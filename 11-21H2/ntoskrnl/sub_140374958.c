/*
 * XREFs of sub_140374958 @ 0x140374958
 * Callers:
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 * Callees:
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 */

char __fastcall sub_140374958(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v2; // rcx

  LOBYTE(CurrentThread) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)CurrentThread )
  {
    if ( (_BYTE)CurrentThread == 1 )
      LOBYTE(CurrentThread) = (unsigned __int8)sub_140238D0C(
                                                 a1 - 192,
                                                 *(_DWORD *)(*(_QWORD *)(qword_140C51F48
                                                                       + 8LL * *(unsigned __int16 *)(a1 + 174))
                                                           + 16680LL));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v2 = a1 - 1664;
    if ( *((_QWORD *)CurrentThread + 68) != v2 )
      LOBYTE(CurrentThread) = sub_1402393FC(v2, 0LL);
  }
  return (char)CurrentThread;
}
