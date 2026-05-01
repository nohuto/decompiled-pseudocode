/*
 * XREFs of ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1805D97E0
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z @ 0x1805D712C (--$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z.c)
 */

char __fastcall CShallowContainerIterator::Next(CShallowContainerIterator *this, struct IShellItem2 **a2)
{
  char v2; // bl
  __int64 *v5; // rsi
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  LPBC v9; // rcx
  __int64 v10; // rcx
  int v11; // esi
  LPBC v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  struct IShellItem2 *v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( !*(_DWORD *)this )
  {
    v5 = (__int64 *)((char *)this + 16);
    if ( *((_QWORD *)this + 2) )
      goto LABEL_7;
    if ( !*((_QWORD *)this + 1) )
    {
      *(_DWORD *)this = 1;
      return v2;
    }
    v6 = _CreatePropertyBagBindCtx<unsigned long>((__int64)this, a2, *((_DWORD *)this + 6), &v13);
    *(_DWORD *)this = v6;
    v7 = v6 == 0;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, LPBC, const GUID *, GUID *, __int64 *))(**((_QWORD **)this + 1) + 24LL))(
             *((_QWORD *)this + 1),
             v13,
             &BHID_EnumItems,
             &GUID_70629033_e363_4a28_a567_0db78006e6d7,
             v5);
      v9 = v13;
      *(_DWORD *)this = v8;
      ((void (__fastcall *)(LPBC))v9->lpVtbl->Release)(v9);
      v7 = *(_DWORD *)this == 0;
    }
    if ( v7 )
    {
LABEL_7:
      v10 = *v5;
      v15 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, LPBC *))(*(_QWORD *)v10 + 24LL))(
              v10,
              1LL,
              &v14,
              &v13);
      if ( !v11 )
      {
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IShellItem2 **))v14)(
                v14,
                &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
                &v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      *(_DWORD *)this = v11;
      if ( !v11 )
      {
        v2 = 1;
        *a2 = v15;
      }
    }
  }
  return v2;
}
