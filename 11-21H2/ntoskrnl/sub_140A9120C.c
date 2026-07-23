/*
 * XREFs of sub_140A9120C @ 0x140A9120C
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8C08C @ 0x140A8C08C (sub_140A8C08C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140A9120C(__int64 a1)
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  if ( !qword_140C1ADE0 )
    return 0LL;
  result = (_QWORD *)(qword_140C1ADE0
                    + ((unsigned __int64)(_InterlockedIncrement(&dword_140C1ADE8) & (unsigned int)(dword_140C0D8C4 - 1)) << 9));
  *result = a1;
  CurrentThread = KeGetCurrentThread();
  result[2] = 0LL;
  result[1] = CurrentThread;
  return result;
}
