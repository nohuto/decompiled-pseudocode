/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x1407D4964
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x1407D4904 (MiProcessLoadConfigForDriver.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x14034B480 (MiSetImageProtection.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x140658044 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3050C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  void (__fastcall **v7)(uintptr_t); // rsi
  _QWORD *v8; // rsi
  ULONG Size; // [rsp+40h] [rbp+18h] BYREF

  Size = 0;
  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  v5 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
  v6 = (__int64)v5;
  if ( !v5 )
    return 0LL;
  if ( *(_DWORD *)v5 < 0x78u || (v7 = (void (__fastcall **)(uintptr_t))v5[14]) == 0LL )
  {
LABEL_14:
    if ( *(_DWORD *)v6 >= 0x80u )
    {
      v8 = *(_QWORD **)(v6 + 120);
      if ( v8 )
      {
        if ( a2 )
        {
          if ( !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v6 + 120), 8, 4u) )
          {
            MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
            dword_140C65910 = 104;
            return 3221225595LL;
          }
          *v8 = &guard_dispatch_icall;
          if ( *(_QWORD *)(a2 + 16) )
            MiSetImageProtection(a1, (unsigned __int64)v8, 8, 0x100u);
        }
        else
        {
          *v8 = &guard_dispatch_icall;
        }
      }
    }
    if ( *(_DWORD *)v6 >= 0xC0u && (*(_DWORD *)(v6 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 184) )
        MiCheckForDiscardableLongJumpTable(a1, v6);
    }
    return 0LL;
  }
  if ( !a2 )
  {
    *v7 = guard_check_icall;
    goto LABEL_14;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v5[14], 8, 4u) )
  {
    *v7 = guard_check_icall;
    if ( *(_QWORD *)(a2 + 16) )
      MiSetImageProtection(a1, (unsigned __int64)v7, 8, 0x100u);
    goto LABEL_14;
  }
  MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
  dword_140C65910 = 103;
  return 3221225595LL;
}
