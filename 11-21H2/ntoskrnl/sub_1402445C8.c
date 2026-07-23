/*
 * XREFs of sub_1402445C8 @ 0x1402445C8
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int8 __fastcall sub_1402445C8(__int64 a1)
{
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdi

  result = *(_DWORD *)(a1 + 408) & 7;
  if ( result != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    result = 0;
    while ( 1 )
    {
      v4 = result;
      if ( *(struct _KTHREAD **)(a1 + 8LL * result + 72) == CurrentThread )
        break;
      if ( ++result >= 4u )
        return result;
    }
    result = ObfDereferenceObjectWithTag(CurrentThread, 0x746C6644u);
    *(_QWORD *)(a1 + 8 * v4 + 72) = 0LL;
  }
  return result;
}
