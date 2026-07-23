/*
 * XREFs of sub_14081CE58 @ 0x14081CE58
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 *     sub_14098C45C @ 0x14098C45C (sub_14098C45C.c)
 *     sub_14098FB30 @ 0x14098FB30 (sub_14098FB30.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 */

int __fastcall sub_14081CE58(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    sub_140811764(8, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&stru_140C20740, WrExecutive, 0, 0, 0LL);
  dword_140C20720 = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    qword_140C20728 = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
