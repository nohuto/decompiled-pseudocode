/*
 * XREFs of sub_1409A2E54 @ 0x1409A2E54
 * Callers:
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 *     sub_1409A20D0 @ 0x1409A20D0 (sub_1409A20D0.c)
 *     sub_1409A216C @ 0x1409A216C (sub_1409A216C.c)
 *     sub_1409A21EC @ 0x1409A21EC (sub_1409A21EC.c)
 *     sub_1409A229C @ 0x1409A229C (sub_1409A229C.c)
 *     sub_1409A2EE4 @ 0x1409A2EE4 (sub_1409A2EE4.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_1409A2440 @ 0x1409A2440 (sub_1409A2440.c)
 *     sub_1409A27E4 @ 0x1409A27E4 (sub_1409A27E4.c)
 *     sub_1409A700C @ 0x1409A700C (sub_1409A700C.c)
 */

BOOLEAN __fastcall sub_1409A2E54(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r10
  struct _KTHREAD *CurrentThread; // rax

  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
    sub_1409A2440(a1);
  v5 = sub_1409A27E4(*(_DWORD *)(a1 + 16));
  sub_1409A700C(*(_DWORD *)(v6 + 16), *(_DWORD *)(v6 + 72), *(_QWORD *)(v6 + 24), v5, a2, v4);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
}
