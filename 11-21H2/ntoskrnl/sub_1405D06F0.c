/*
 * XREFs of sub_1405D06F0 @ 0x1405D06F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038ACD0 @ 0x14038ACD0 (sub_14038ACD0.c)
 *     sub_14038B198 @ 0x14038B198 (sub_14038B198.c)
 *     sub_1405C9980 @ 0x1405C9980 (sub_1405C9980.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 */

void sub_1405D06F0()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx

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
      sub_14038ACD0((__int64)i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      sub_14081CEB4(i + 63, v2);
      sub_14038B198((__int64)i);
    }
    sub_1402935D0((ULONG_PTR)(i + 54));
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  sub_1405C9980();
  _InterlockedExchange(&dword_140C22148, 0);
}
