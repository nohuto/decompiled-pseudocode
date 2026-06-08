/*
 * XREFs of RegisterXsdDomain @ 0x1C0027474
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     PepQueryPerfDomainInfo @ 0x1C0044264 (PepQueryPerfDomainInfo.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rbp
  _DWORD *v3; // r15
  char v4; // r14
  char v5; // bl
  __int64 v6; // rdx
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v10; // rdx
  __int64 Pool2; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax

  v1 = (_DWORD *)a1[69];
  v3 = (_DWORD *)a1[151];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  v6 = qword_1C001F068;
  if ( (__int64 *)qword_1C001F068 == &qword_1C001F068 )
  {
LABEL_7:
    v10 = 56LL;
    if ( v1 == v3 )
      v10 = 72LL;
    Pool2 = ExAllocatePool2(64LL, v10, 1919119952LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v12 = (_QWORD *)(Pool2 + 16);
      v12[1] = v12;
      *v12 = v12;
      v13 = (__int64 *)qword_1C001F070;
      if ( *(__int64 **)qword_1C001F070 != &qword_1C001F068 )
        goto LABEL_20;
      *(_QWORD *)v6 = &qword_1C001F068;
      *(_QWORD *)(v6 + 8) = v13;
      *v13 = v6;
      qword_1C001F070 = v6;
      *(_DWORD *)(v6 + 36) = v1[3];
      *(_DWORD *)(v6 + 40) = v1[4];
      *(_DWORD *)(v6 + 44) = v1[5];
      *(_BYTE *)(v6 + 48) = v4;
LABEL_4:
      a1[70] = v6;
      v7 = *(_QWORD **)(v6 + 24);
      v8 = a1 + 71;
      if ( *v7 == v6 + 16 )
      {
        *v8 = v6 + 16;
        a1[72] = v7;
        *v7 = v8;
        *(_QWORD *)(v6 + 24) = v8;
        if ( ++*(_DWORD *)(v6 + 32) == *(_DWORD *)(v6 + 44)
          && (!*(_BYTE *)(v6 + 48) || (int)PepQueryPerfDomainInfo(a1) >= 0) )
        {
          v5 = 1;
        }
        goto LABEL_6;
      }
LABEL_20:
      __fastfail(3u);
    }
  }
  else
  {
    while ( *(_DWORD *)(v6 + 36) != v1[3] )
    {
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &qword_1C001F068 )
        goto LABEL_7;
    }
    if ( v4 == *(_BYTE *)(v6 + 48) )
      goto LABEL_4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
  }
LABEL_6:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  return v5;
}
