/*
 * XREFs of ?HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075C5C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800753C0 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

void __fastcall HampDepGroupPruneEmptyLinks(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *FirstLink; // rbx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rdi

  FirstLink = HampDepGroupGetFirstLink(a1);
  if ( FirstLink )
  {
    do
    {
      NextLink = HampDepGroupGetNextLink(FirstLink);
      if ( *((struct _HAM_DEPENDENCY_LINK **)FirstLink + 8) == (struct _HAM_DEPENDENCY_LINK *)((char *)FirstLink + 64)
        && *((struct _HAM_DEPENDENCY_LINK **)FirstLink + 10) == (struct _HAM_DEPENDENCY_LINK *)((char *)FirstLink + 80) )
      {
        RtlRbRemoveNode((char *)a1 + 72, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FirstLink);
      }
      FirstLink = NextLink;
    }
    while ( NextLink );
  }
}
