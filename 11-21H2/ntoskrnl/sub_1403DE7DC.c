/*
 * XREFs of sub_1403DE7DC @ 0x1403DE7DC
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DE7DC(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = dword_140C06A90;
  if ( (unsigned int)dword_140C06A90 >= 8 )
  {
    v1 = 0;
    dword_140C06A90 = 0;
  }
  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 1) == 0 && (v1 & 2) != 0 )
  {
    result = v1 & 0xFFFFFFFE | ((v1 & 1) == 0) | 4;
    dword_140C06A90 = v1 & 0xFFFFFFFE | ((v1 & 1) == 0) | 4;
  }
  return result;
}
