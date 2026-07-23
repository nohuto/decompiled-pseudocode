/*
 * XREFs of sub_140628F90 @ 0x140628F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_14058503C @ 0x14058503C (sub_14058503C.c)
 */

__int64 __fastcall sub_140628F90(struct _MDL *BugCheckParameter3, char a2, unsigned int a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 || a3 > 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (char *)BugCheckParameter3->StartVa
       + BugCheckParameter3->ByteCount
       + (unsigned __int64)BugCheckParameter3->ByteOffset <= (PVOID)0x7FFFFFFEFFFFLL )
    {
      sub_14029C5B0(BugCheckParameter3, 0, a3 != 0);
      if ( (BugCheckParameter3->MdlFlags & 0xFFFFFF77) == 0x102 )
      {
        sub_14058503C((ULONG_PTR)BugCheckParameter3, 1);
        return v4;
      }
      MmUnlockPages(BugCheckParameter3);
    }
    return (unsigned int)-1073741637;
  }
}
