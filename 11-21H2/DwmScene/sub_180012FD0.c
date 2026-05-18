/*
 * XREFs of sub_180012FD0 @ 0x180012FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019D1C @ 0x180019D1C (sub_180019D1C.c)
 */

__int64 __fastcall sub_180012FD0(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_180019D1C(qword_1801F7498) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
