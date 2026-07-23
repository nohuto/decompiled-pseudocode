/*
 * XREFs of sub_1406C9120 @ 0x1406C9120
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int64 __fastcall sub_1406C9120(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned __int64 result; // rax

  v5 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - v5);
  if ( (unsigned int)result < a3 )
  {
    *(_BYTE *)(a1 + 28) = 1;
  }
  else
  {
    result = (unsigned __int64)memmove((void *)(*(_QWORD *)a1 + v5), a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  return result;
}
