/*
 * XREFs of CcMdlReadComplete2 @ 0x1407C386C
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1403551A0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1407DFAC0 (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
