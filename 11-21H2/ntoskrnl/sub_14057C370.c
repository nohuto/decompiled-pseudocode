/*
 * XREFs of sub_14057C370 @ 0x14057C370
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x140220FB0 (ExInterlockedRemoveHeadList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PLIST_ENTRY __fastcall sub_14057C370(PLIST_ENTRY ListHead)
{
  _LIST_ENTRY *v1; // rbx
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY result; // rax

  v1 = ListHead;
  v2 = (KSPIN_LOCK *)&ListHead[1];
  while ( 1 )
  {
    result = ExInterlockedRemoveHeadList(ListHead, v2);
    if ( !result )
      break;
    sub_14042A5E0(v1, result);
    v2 = (KSPIN_LOCK *)&v1[1];
    ListHead = v1;
  }
  return result;
}
