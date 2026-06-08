/*
 * XREFs of QueryProcMeasValues @ 0x1C0001C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QueryProcMeasValues(int a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // r9
  int v12; // edi
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( a2 && a1 )
  {
    v6 = KeQueryInterruptTimePrecise(&v14);
    v7 = qword_1C001F930;
    v8 = 0;
    v15 = 0;
    v9 = v6;
    v10 = 0;
    while ( (__int64 *)v7 != &qword_1C001F930 )
    {
      if ( (a1 & *(_DWORD *)(v7 + 24)) == *(_DWORD *)(v7 + 24) && *(_QWORD *)(v7 + 40) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v7 + 16));
        if ( a3 )
          v11 = a3 + v10;
        else
          v11 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(v7 + 40))(v9, v7, &v15, v11);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          *(_QWORD *)(v7 + 16));
        if ( v12 < 0 )
          return (unsigned int)v12;
        v8 += v15;
        v10 += 24 * v15;
      }
      v7 = *(_QWORD *)v7;
    }
    *a2 = v8;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
