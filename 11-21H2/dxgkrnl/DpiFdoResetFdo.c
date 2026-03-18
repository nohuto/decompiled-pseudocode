/*
 * XREFs of DpiFdoResetFdo @ 0x1C038B234
 * Callers:
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0389720 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x1C00261F4 (DpiFdoCleanupMipiDsi.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiFdoCleanupDP @ 0x1C0060624 (DpiFdoCleanupDP.c)
 *     DpiRequestIoPowerState @ 0x1C01F0D70 (DpiRequestIoPowerState.c)
 *     DxgkFreeUnicodeString @ 0x1C0205754 (DxgkFreeUnicodeString.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C02C5358 (DxgkReleaseAdapterFdoReference.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C0388D24 (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  DXGADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rcx
  void (__fastcall *v11)(_QWORD); // rax
  __int64 v12; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 1368) )
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
  ExDeleteResourceLite((PERESOURCE)(v1 + 3792));
  ExDeleteResourceLite((PERESOURCE)(v1 + 3304));
  if ( *(_QWORD *)(v1 + 3928) )
    DpiRequestIoPowerState(a1, 7, v3, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4752));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
  DxgkFreeUnicodeString(v1 + 4848);
  v4 = *(void **)(v1 + 2728);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v1);
  DpiFdoCleanupMipiDsi(v1);
  DpiFdoCleanupDP((_QWORD *)v1);
  v5 = *(DXGADAPTER **)(v1 + 3896);
  if ( v5 )
  {
    DxgkReleaseAdapterFdoReference(v5);
    *(_QWORD *)(v1 + 3896) = 0LL;
  }
  *(_DWORD *)(v1 + 3280) = 0;
  v6 = *(void **)(v1 + 3296);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 3296) = 0LL;
  }
  v7 = *(void **)(v1 + 3288);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
  v8 = *(void **)(v1 + 4816);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 4816) = 0LL;
  }
  v9 = *(void **)(v1 + 4824);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 4824) = 0LL;
  }
  v10 = *(_QWORD **)(v1 + 4864);
  if ( v10 )
  {
    v11 = (void (__fastcall *)(_QWORD))v10[4];
    if ( !v11
      || (v11(v10[2]),
          v12 = *(_QWORD *)(v1 + 4864),
          *(_OWORD *)(v12 + 8) = 0LL,
          *(_OWORD *)(v12 + 24) = 0LL,
          *(_OWORD *)(v12 + 40) = 0LL,
          *(_QWORD *)(v12 + 56) = 0LL,
          (v10 = *(_QWORD **)(v1 + 4864)) != 0LL) )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(v1 + 4864) = 0LL;
    }
  }
}
