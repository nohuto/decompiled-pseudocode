/*
 * XREFs of ?HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C1B0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BD24 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C24C (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003C59C (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
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
        HampDepGroupDereference(*((volatile signed __int64 **)FirstLink + 5));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FirstLink);
      }
      FirstLink = NextLink;
    }
    while ( NextLink );
  }
}
