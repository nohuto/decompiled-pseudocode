/*
 * XREFs of sub_1C004E850 @ 0x1C004E850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C004E850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // edx

  v8 = sub_1C0007798(a1, 10);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = sub_1C001A364(a1 + 336);
    v9 = MEMORY[0];
  }
  else
  {
    v10 = -1073741637;
  }
  *a7 = v9;
  return v10;
}
