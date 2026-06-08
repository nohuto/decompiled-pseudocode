/*
 * XREFs of RegisterXsdDomain @ 0x1C002D548
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     PepQueryPerfDomainInfo @ 0x1C0039FAC (PepQueryPerfDomainInfo.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rdi
  _DWORD *v3; // r14
  char v4; // bp
  char v5; // bl
  __int64 i; // rdx
  __int64 v8; // rdx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx

  v1 = (_DWORD *)a1[69];
  v3 = (_DWORD *)a1[151];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  for ( i = qword_1C00114A8; (__int64 *)i != &qword_1C00114A8; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 36) == v1[3] )
    {
      if ( v4 != *(_BYTE *)(i + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x13u,
            (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
        goto LABEL_8;
      }
LABEL_14:
      a1[70] = i;
      v12 = *(_QWORD **)(i + 24);
      v13 = a1 + 71;
      if ( *v12 == i + 16 )
      {
        *v13 = i + 16;
        a1[72] = v12;
        *v12 = v13;
        *(_QWORD *)(i + 24) = v13;
        if ( ++*(_DWORD *)(i + 32) == *(_DWORD *)(i + 44)
          && (!*(_BYTE *)(i + 48) || (int)PepQueryPerfDomainInfo(a1) >= 0) )
        {
          v5 = 1;
        }
        goto LABEL_8;
      }
LABEL_19:
      __fastfail(3u);
    }
  }
  v8 = 56LL;
  if ( v1 == v3 )
    v8 = 72LL;
  Pool2 = ExAllocatePool2(64LL, v8, 1919119952LL);
  i = Pool2;
  if ( Pool2 )
  {
    v10 = (_QWORD *)(Pool2 + 16);
    v10[1] = v10;
    *v10 = v10;
    v11 = (__int64 *)qword_1C00114B0;
    if ( *(__int64 **)qword_1C00114B0 == &qword_1C00114A8 )
    {
      *(_QWORD *)i = &qword_1C00114A8;
      *(_QWORD *)(i + 8) = v11;
      *v11 = i;
      qword_1C00114B0 = i;
      *(_DWORD *)(i + 36) = v1[3];
      *(_DWORD *)(i + 40) = v1[4];
      *(_DWORD *)(i + 44) = v1[5];
      *(_BYTE *)(i + 48) = v4;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  return v5;
}
