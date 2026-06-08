/*
 * XREFs of RegisterHvPackage @ 0x1C0039200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     GetHvPackage @ 0x1C003849C (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 HvPackage; // rax
  __int64 *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 72), 0LL, &v10, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DCF8,
      0LL);
    v3 = qword_1C001DD58;
    if ( (__int64 *)qword_1C001DD58 == &qword_1C001DD58 )
      goto LABEL_6;
    do
    {
      v4 = v3;
      if ( *(_DWORD *)(v3 + 32) == v10 )
        break;
      v3 = *(_QWORD *)v3;
      v4 = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C001DD58 );
    if ( !v4 )
    {
LABEL_6:
      HvPackage = GetHvPackage(v10);
      v4 = HvPackage;
      if ( !HvPackage )
      {
LABEL_13:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001DCF8);
        return (unsigned int)v2;
      }
      KeInitializeAffinityEx2(HvPackage + 48, 32LL);
      v6 = (__int64 *)qword_1C001DD60;
      if ( *(__int64 **)qword_1C001DD60 != &qword_1C001DD58 )
LABEL_15:
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_1C001DD58;
      *(_QWORD *)(v4 + 8) = v6;
      *v6 = v4;
      qword_1C001DD60 = v4;
    }
    *(_QWORD *)(a1 + 1080) = v4;
    ++*(_DWORD *)(v4 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v4 + 48, *(unsigned int *)(a1 + 56));
    v7 = (_QWORD *)(a1 + 1088);
    v8 = *(_QWORD **)(v4 + 24);
    if ( *v8 == v4 + 16 )
    {
      v7[1] = v8;
      *v7 = v4 + 16;
      *v8 = v7;
      *(_QWORD *)(v4 + 24) = v7;
      v2 = *(_DWORD *)(v4 + 36) != *(_DWORD *)(v4 + 40) ? 0x103 : 0;
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  return (unsigned int)v2;
}
