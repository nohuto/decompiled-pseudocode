/*
 * XREFs of PreserveWriteObj @ 0x1C0069130
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 */

__int64 __fastcall PreserveWriteObj(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _SLIST_ENTRY *Next; // rcx
  __int64 v7; // rax

  v3 = a3;
  if ( a3 )
    goto LABEL_5;
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      return (unsigned int)PushAccFieldObj(
                             a1,
                             (__int64)ReadFieldObj,
                             *(_SLIST_ENTRY **)(a2 + 32),
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                             a2 + 56,
                             4u);
    case 1:
      v7 = *(_QWORD *)(a2 + 48) & *(_QWORD *)(a2 + 56);
      ++*(_DWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 40) |= v7;
      return (unsigned int)PushAccFieldObj(
                             a1,
                             (__int64)WriteFieldObj,
                             *(_SLIST_ENTRY **)(a2 + 32),
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                             a2 + 40,
                             4u);
    case 2:
LABEL_5:
      Next = a1[26].Next;
      a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
      HeapFree(Next);
      break;
  }
  return v3;
}
