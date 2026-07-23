/*
 * XREFs of sub_140AA3C60 @ 0x140AA3C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_140AA3C60(__int64 a1)
{
  PVOID *v1; // rdx
  PVOID result; // rax

  if ( *(int *)(a1 + 16) >= 0 && (qword_140D01450 & 0x400000) == 0 )
  {
    v1 = *(PVOID **)(a1 + 8);
    result = v1 + 13;
    *(_QWORD *)(a1 + 8) = v1 + 13;
    if ( v1 < v1 + 13 )
    {
      do
      {
        result = MmBadPointer;
        *v1++ = MmBadPointer;
      }
      while ( (unsigned __int64)v1 < *(_QWORD *)(a1 + 8) );
    }
  }
  return result;
}
