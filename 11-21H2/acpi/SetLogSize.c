/*
 * XREFs of SetLogSize @ 0x1C002EE70
 * Callers:
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0030080 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  void *Pool2; // rax

  v0 = 0;
  if ( qword_1C0081AA0 )
  {
    ExFreePoolWithTag(qword_1C0081AA0, 0);
    qword_1C0081AA0 = 0LL;
    qword_1C0081A98 = 0LL;
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 14688LL, 1196379205LL);
  qword_1C0081AA0 = Pool2;
  if ( Pool2 )
  {
    qword_1C0081A98 = 204LL;
    memset(Pool2, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
