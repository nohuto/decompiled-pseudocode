/*
 * XREFs of sub_14038AA3C @ 0x14038AA3C
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038ACD0 @ 0x14038ACD0 (sub_14038ACD0.c)
 *     sub_14038AE58 @ 0x14038AE58 (sub_14038AE58.c)
 *     sub_14038B198 @ 0x14038B198 (sub_14038B198.c)
 *     sub_14038B428 @ 0x14038B428 (sub_14038B428.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 */

void sub_14038AA3C()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( !_InterlockedExchange(&dword_140C22090, 1) )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C22060);
    sub_14038B428(4LL);
    sub_1402935D0((ULONG_PTR)&qword_140C22060);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
    for ( i = (PVOID *)qword_140C23140; i != &qword_140C23140; i = (PVOID *)*i )
    {
      sub_1402D66A8((ULONG_PTR)(i + 54));
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v2) = *((_BYTE *)i + 80);
        sub_1407FD7A8(i + 63, v2);
        sub_14038ACD0(i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v2) = *((_BYTE *)i + 69);
        sub_14081CEB4(i + 63, v2);
        sub_14038B198(i);
      }
      *((_BYTE *)i + 504) = 1;
      sub_1402935D0((ULONG_PTR)(i + 54));
    }
    sub_1402935D0((ULONG_PTR)&qword_140C222D0);
    LOBYTE(v3) = 1;
    sub_14038AE58(v3);
    sub_1402D66A8((ULONG_PTR)&qword_140C22200);
    byte_140C22210 = 0;
    sub_1402935D0((ULONG_PTR)&qword_140C22200);
  }
}
