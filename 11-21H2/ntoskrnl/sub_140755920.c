/*
 * XREFs of sub_140755920 @ 0x140755920
 * Callers:
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_1402D75D4 @ 0x1402D75D4 (sub_1402D75D4.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 */

__int64 sub_140755920()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  int HostSilo; // eax
  int v3; // ecx
  int v4; // r14d
  int v5; // ebp
  __int64 i; // rax
  char *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v1 = *((_QWORD *)CurrentThread + 23);
  HostSilo = PsGetHostSilo();
  v4 = v3 | 4;
  if ( !HostSilo )
    v4 = v3;
  if ( !v4 )
    return 0LL;
  v5 = 0;
  sub_14030EB30((__int64)CurrentThread, v1);
  for ( i = (__int64)sub_1402D75D4(v1); ; i = sub_140281C00((unsigned __int64)v7) )
  {
    v7 = (char *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
    {
      sub_14030EB64(i);
      sub_14030EA00((__int64)CurrentThread, v1);
      sub_14030B7F0((__int64)CurrentThread, (__int64)v7);
      v5 = sub_1406F74A8((__int64)v7, 0LL, v4);
      sub_14032E700(v7);
      if ( v5 < 0 )
        return (unsigned int)v5;
      sub_14030EB30((__int64)CurrentThread, v1);
    }
  }
  sub_14030EA00((__int64)CurrentThread, v1);
  return (unsigned int)v5;
}
