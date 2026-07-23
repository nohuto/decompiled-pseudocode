/*
 * XREFs of sub_140515D20 @ 0x140515D20
 * Callers:
 *     sub_140515CF0 @ 0x140515CF0 (sub_140515CF0.c)
 * Callees:
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 */

__int64 __fastcall sub_140515D20(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, int a6)
{
  __int64 v6; // rbx
  int *v8; // r9
  __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v11 = 0;
  v10[0] = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 437) )
  {
    v11 = 1;
    v8 = &v11;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (int)sub_1405164D0(*(_QWORD *)(a1 + 504), 0, (__int64)v8, a6, (__int64)a4, (__int64)v10) >= 0 )
    return v10[0];
  *a4 = 0LL;
  return v6;
}
