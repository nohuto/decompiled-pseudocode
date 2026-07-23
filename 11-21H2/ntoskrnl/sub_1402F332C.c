/*
 * XREFs of sub_1402F332C @ 0x1402F332C
 * Callers:
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 *     sub_140351500 @ 0x140351500 (sub_140351500.c)
 */

char __fastcall sub_1402F332C(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char v7; // bl
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  KeAcquireSpinLockAtDpcLevel(&qword_140D31380);
  LOBYTE(v6) = a2;
  v7 = sub_140351500(a1, v6, a3, &v9);
  KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
  if ( v9 )
    sub_1403457BC(KeGetCurrentPrcb(), qword_140D088C0[(unsigned int)dword_140C2B1C0], (unsigned int)dword_140D0504C);
  return v7;
}
