/*
 * XREFs of sub_14025032C @ 0x14025032C
 * Callers:
 *     sub_1406BB808 @ 0x1406BB808 (sub_1406BB808.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 */

struct _KTHREAD *__fastcall sub_14025032C(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  struct _KTHREAD *result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)sub_1409F92FC(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( *((_BYTE *)result + 586) != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == *(_QWORD *)(*((_QWORD *)result + 23) + 1392LL) )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              *((const void **)KeGetCurrentThread() + 23));
          return (struct _KTHREAD *)KeRaiseUserException(3221225480LL);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
