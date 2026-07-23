/*
 * XREFs of sub_1402A05C0 @ 0x1402A05C0
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A05C0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 1680);
  v2 = 256LL;
  v3 = 0LL;
  v1[65] = 256LL;
  v1[66] = v1 + 61;
  v4 = v1 + 67;
  do
  {
    v5 = qword_140C51C00[v3];
    v3 = (unsigned int)(v3 + 1);
    v6 = v5 + qword_140C51BE8;
    v2 <<= 9;
    *v4 = v2;
    v4[1] = v6;
    v4 += 2;
    result = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)result < 3 );
  return result;
}
