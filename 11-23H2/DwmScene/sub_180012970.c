/*
 * XREFs of sub_180012970 @ 0x180012970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001898C @ 0x18001898C (sub_18001898C.c)
 */

__int64 __fastcall sub_180012970(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_18001898C(qword_1801D3390) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
