/*
 * XREFs of sub_140629030 @ 0x140629030
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_14058503C @ 0x14058503C (sub_14058503C.c)
 */

void __fastcall sub_140629030(struct _MDL *BugCheckParameter3, unsigned int a2)
{
  CSHORT MdlFlags; // ax
  CSHORT v4; // ax

  if ( a2 > 1 )
    __int2c();
  MdlFlags = BugCheckParameter3->MdlFlags;
  if ( (MdlFlags & 0xFFF7) != 0 )
    __int2c();
  v4 = MdlFlags | 0x102;
  BugCheckParameter3->MdlFlags = v4;
  if ( a2 == 1 )
    BugCheckParameter3->MdlFlags = v4 | 0x80;
  sub_14058503C((ULONG_PTR)BugCheckParameter3, 0);
  MmUnlockPages(BugCheckParameter3);
}
