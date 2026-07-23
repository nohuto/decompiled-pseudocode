/*
 * XREFs of sub_140515DC0 @ 0x140515DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 */

__int64 __fastcall sub_140515DC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v8 = a8;
  v9 = *(_QWORD *)(a1 + 504);
  v10 = 0LL;
  v12 = 0LL;
  if ( (int)sub_1405164D0(v9, a5, a6, a7, (__int64)a8, (__int64)&v12) >= 0 )
    return v12;
  *v8 = 0LL;
  return v10;
}
