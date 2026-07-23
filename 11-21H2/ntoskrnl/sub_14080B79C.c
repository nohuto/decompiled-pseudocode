/*
 * XREFs of sub_14080B79C @ 0x14080B79C
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14092BDD0 @ 0x14092BDD0 (sub_14092BDD0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14093A908 @ 0x14093A908 (sub_14093A908.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14080B79C(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  int v6; // eax
  void *v7; // rcx
  void *v8; // rcx
  _QWORD *v9; // rdi
  void *v10; // rcx
  _QWORD *v11; // rsi
  void *v12; // rcx
  int v13; // eax
  int v14; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v2 = *(void **)(a1 + 136);
    if ( v2 )
    {
      v6 = sub_14093A908(v2);
      if ( v6 < 0 )
        DbgPrintEx(5u, 0, "DBGK: IoDiscardDeferredLiveDumpData failed, status 0x%X\n", v6);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v3 = *(void **)(a1 + 120);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x57676244u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v4 = *(_QWORD **)(a1 + 128);
    if ( v4 )
    {
      v7 = (void *)v4[2];
      if ( v7 )
      {
        ObfDereferenceObject(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
        v4 = *(_QWORD **)(a1 + 128);
      }
      v8 = (void *)v4[1];
      if ( v8 )
      {
        ZwClose(v8);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0LL;
        v4 = *(_QWORD **)(a1 + 128);
      }
      v9 = (_QWORD *)v4[5];
      v4[5] = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = (void *)v9[2];
          v11 = (_QWORD *)v9[4];
          if ( v10 )
            ExFreePoolWithTag(v10, 0x57676244u);
          ExFreePoolWithTag(v9, 0x57676244u);
          v9 = v11;
        }
        while ( v11 );
      }
      v12 = *(void **)(a1 + 128);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x57676244u);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v5 = *(void **)(a1 + 144);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x57676244u);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( (*(_DWORD *)(a1 + 112) & 1) == 0 )
      {
        v13 = WerLiveKernelCancelReport();
        if ( v13 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v13);
      }
      v14 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 104));
      if ( v14 < 0 )
        DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v14);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
}
