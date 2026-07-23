/*
 * XREFs of sub_14069A660 @ 0x14069A660
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x140220FB0 (ExInterlockedRemoveHeadList.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14069A660()
{
  PLIST_ENTRY v0; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int v2; // edx
  __int64 Flink; // rcx
  __int64 result; // rax

  do
  {
    v0 = ExInterlockedRemoveHeadList(&stru_140C03668, &Lock);
    Blink = v0[1].Blink;
    v2 = (int)Blink[2].Blink;
    LODWORD(Blink[2].Blink) = 0;
    HIDWORD(Blink->Blink) = 0;
    LODWORD(Blink->Blink) = v2;
    sub_14075DD3C(Blink);
    Flink = (__int64)v0[1].Flink;
    if ( Flink )
      sub_1402E0164(Flink);
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&dword_140C16508, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
