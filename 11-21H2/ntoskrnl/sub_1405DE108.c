/*
 * XREFs of sub_1405DE108 @ 0x1405DE108
 * Callers:
 *     sub_1405DDBE0 @ 0x1405DDBE0 (sub_1405DDBE0.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403A7530 (IoReleaseRemoveLockAndWaitEx.c)
 *     sub_1403DCBDC @ 0x1403DCBDC (sub_1403DCBDC.c)
 *     sub_1405CD9A0 @ 0x1405CD9A0 (sub_1405CD9A0.c)
 *     sub_1405DFA70 @ 0x1405DFA70 (sub_1405DFA70.c)
 */

__int64 __fastcall sub_1405DE108(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 272);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 272), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( *((char **)P + 25) != P + 200 )
    sub_1405CD9A0(v5, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  sub_1405DFA70(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 206, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  sub_1403DCBDC((PVOID *)P, 2);
  return v6;
}
