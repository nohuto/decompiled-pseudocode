/*
 * XREFs of sub_1409AFD2C @ 0x1409AFD2C
 * Callers:
 *     sub_14032A750 @ 0x14032A750 (sub_14032A750.c)
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     sub_140700158 @ 0x140700158 (sub_140700158.c)
 *     sub_1407001C8 @ 0x1407001C8 (sub_1407001C8.c)
 */

char sub_1409AFD2C()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  v1 = *((_QWORD *)CurrentThread + 23);
  v2 = *(_QWORD *)(v1 + 1296);
  v3 = *(_QWORD *)(v2 + 1008);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    sub_1407001C8(*(_QWORD *)(v2 + 1008), (__int64)CurrentThread);
    if ( *(_QWORD *)(v3 + 552) && (*(_DWORD *)(v3 + 1068) & 0x200) != 0 && (*(_DWORD *)(v1 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v1 + 1120), 0x20u);
      sub_14025863C(v3, 9LL, *(_QWORD *)(v1 + 1088), 1);
    }
    LOBYTE(v2) = sub_140700158(v3, (__int64)CurrentThread);
  }
  return v2;
}
