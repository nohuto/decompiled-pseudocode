/*
 * XREFs of sub_140511050 @ 0x140511050
 * Callers:
 *     HalAllocateCommonBuffer @ 0x1405054E0 (HalAllocateCommonBuffer.c)
 * Callees:
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 */

__int64 __fastcall sub_140511050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  int *v7; // r9
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  v9[0] = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 437) )
  {
    v10 = 1;
    v7 = &v10;
  }
  else
  {
    v7 = 0LL;
  }
  sub_140514A70(*(_QWORD *)(a1 + 504), 0, (__int64)v7, a6, a4, (__int64)v9);
  return v9[0];
}
