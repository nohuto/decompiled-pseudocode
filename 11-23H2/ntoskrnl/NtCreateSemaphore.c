/*
 * XREFs of NtCreateSemaphore @ 0x1407331E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x1402B32F0 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateSemaphore(unsigned __int64 a1, __int64 a2, __int64 a3, LONG a4, int Limit)
{
  _QWORD *v6; // rdi
  char PreviousMode; // si
  int inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF

  v6 = (_QWORD *)a1;
  v12 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  inserted = ObCreateObjectEx(PreviousMode, ExSemaphoreObjectType, a3, PreviousMode, v10, 32, 0, 0, &Semaphore, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, a4, Limit);
    inserted = ObInsertObjectEx(Semaphore, 0LL, 0, 0LL, (__int64)&v12);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v6 = v12;
  }
  return (unsigned int)inserted;
}
