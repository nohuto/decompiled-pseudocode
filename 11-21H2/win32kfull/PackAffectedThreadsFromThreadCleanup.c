/*
 * XREFs of PackAffectedThreadsFromThreadCleanup @ 0x1C00AC830
 * Callers:
 *     <none>
 * Callees:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00A9BFC (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00AC8B0 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall PackAffectedThreadsFromThreadCleanup(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *v1; // rax
  __int64 v2; // rcx
  const struct tagTHREADINFO *v3; // r8

  v1 = InAffectedThreadList(a1);
  if ( v1 )
    *((_QWORD *)v1 + 2) = 0LL;
  if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v2 + 432)) )
    PackAffectedThreadList(v3, 0LL);
}
