/*
 * XREFs of sub_14052CF60 @ 0x14052CF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052CF60(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( a1 < (unsigned int)dword_140C4A0DC )
  {
    _mm_lfence();
    *a2 = *(_DWORD *)(*(_QWORD *)(qword_140C4ABF0 + 8LL * a1) + 12LL);
    return 0LL;
  }
  return result;
}
