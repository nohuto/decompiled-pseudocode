/*
 * XREFs of sub_14062F600 @ 0x14062F600
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 */

__int64 __fastcall sub_14062F600(__int64 a1, __int16 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  __int16 v6; // bx
  __int64 result; // rax

  v6 = a3 + 24;
  result = sub_1402ABBF0(a1, a3 + 24, a4, a5, a6);
  if ( result )
  {
    *(_QWORD *)(result + 8) = *a5;
    *(_WORD *)(result + 4) = v6;
    *(_WORD *)(result + 6) = a2;
    *(_DWORD *)result = (unsigned __int8)a6 | 0xC0118000;
    *(_QWORD *)(result + 16) = **((_QWORD **)KeGetCurrentPrcb() + 4372);
    result += 24LL;
  }
  return result;
}
