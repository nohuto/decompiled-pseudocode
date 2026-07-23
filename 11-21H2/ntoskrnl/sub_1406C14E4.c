/*
 * XREFs of sub_1406C14E4 @ 0x1406C14E4
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x140244FB0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1406DA170 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

void __fastcall sub_1406C14E4(__int64 a1, struct _MDL *a2)
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
