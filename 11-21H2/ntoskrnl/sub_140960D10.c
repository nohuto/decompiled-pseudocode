/*
 * XREFs of sub_140960D10 @ 0x140960D10
 * Callers:
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140960D10(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // r10
  __int64 result; // rax

  v2 = a1;
  v3 = 40LL;
  do
  {
    *v2 += *(_DWORD *)((char *)v2 + a2 - (_QWORD)a1);
    ++v2;
    --v3;
  }
  while ( v3 );
  a1[42] += *(_DWORD *)(a2 + 168);
  result = *(unsigned int *)(a2 + 172);
  a1[43] += result;
  return result;
}
