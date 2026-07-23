/*
 * XREFs of sub_1402697B0 @ 0x1402697B0
 * Callers:
 *     sub_14026940C @ 0x14026940C (sub_14026940C.c)
 *     sub_140269760 @ 0x140269760 (sub_140269760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402697B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 72);
  result = 0LL;
  if ( v1 && word_140D05000 )
  {
    v3 = (int *)(v1 + 64);
    v4 = (unsigned __int16)word_140D05000;
    do
    {
      v5 = *v3;
      v3 += 18;
      result += v5;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
