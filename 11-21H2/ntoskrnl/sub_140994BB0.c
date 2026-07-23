/*
 * XREFs of sub_140994BB0 @ 0x140994BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140369AC4 @ 0x140369AC4 (sub_140369AC4.c)
 */

void __fastcall sub_140994BB0(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
    sub_1402D66A8((ULONG_PTR)&qword_140C229A0);
    sub_140369AC4(1);
    sub_1402935D0((ULONG_PTR)&qword_140C229A0);
    sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  }
}
