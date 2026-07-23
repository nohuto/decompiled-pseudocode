/*
 * XREFs of sub_14097EF10 @ 0x14097EF10
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBA0 @ 0x14030EBA0 (sub_14030EBA0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14057FFF4 @ 0x14057FFF4 (sub_14057FFF4.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1409E3F78 @ 0x1409E3F78 (sub_1409E3F78.c)
 */

LONG __fastcall sub_14097EF10(char *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rsi
  __int16 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 23);
  if ( a3 )
  {
    sub_14030EBA0((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)sub_14030EB80((__int64)P) && (WORD2(xmmword_140D06900[0]) & 0x8000) != 0 )
    {
      v7 = (__int16 *)sub_14032A72C(v6);
      sub_1409E3F78(*((_DWORD *)P + 6) << 12, (*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1) << 12, v6, 0x2000, *v7, *v7);
    }
    sub_14030EA70(P);
  }
  else
  {
    sub_1407BC0B0((unsigned __int8 *)P, 0LL, 0);
  }
  return sub_14057FFF4(a2);
}
