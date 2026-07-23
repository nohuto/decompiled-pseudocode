/*
 * XREFs of sub_1409736EC @ 0x1409736EC
 * Callers:
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 * Callees:
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_1402D75D4 @ 0x1402D75D4 (sub_1402D75D4.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBA0 @ 0x14030EBA0 (sub_14030EBA0.c)
 *     sub_1406AD6A0 @ 0x1406AD6A0 (sub_1406AD6A0.c)
 *     sub_140973B80 @ 0x140973B80 (sub_140973B80.c)
 */

__int64 __fastcall sub_1409736EC(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // ebx
  __int64 i; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // r15d
  char *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  sub_14030EB30((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
LABEL_17:
    v7 = -1073741558;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1680) + 341LL) & 2) != 0 )
  {
    v7 = -1073741637;
  }
  else
  {
LABEL_4:
    for ( i = (__int64)sub_1402D75D4(a1); ; i = sub_140281C00(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
      {
        sub_14030EBA0((__int64)CurrentThread, i);
        if ( !(unsigned int)sub_14030EB80(v9)
          && sub_1406AD6A0(v10)
          && (v11 = **(_QWORD **)(v9 + 72), v12 = *(_QWORD *)(*(_QWORD *)v11 + 56LL), *(_DWORD *)(v12 + 60) == a2)
          && *(_DWORD *)(v12 + 72) == a3 )
        {
          v13 = (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v11 + 24LL), -1LL, -1LL);
          sub_14030EB64(v9);
          sub_140280EF8((__int64)CurrentThread, v9);
          sub_14030EA00((__int64)CurrentThread, a1);
          v7 = sub_140973B80(v13, a2, a3);
          sub_14030EB30((__int64)CurrentThread, a1);
          sub_14030EBA0((__int64)CurrentThread, v9);
          v14 = sub_14030EB80(v9);
          sub_14030EA70(v15);
          if ( v7 < 0 )
            break;
          if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
            goto LABEL_17;
          if ( v14 )
            goto LABEL_4;
        }
        else
        {
          sub_140280EF8((__int64)CurrentThread, v9);
        }
      }
    }
  }
  sub_14030EA00((__int64)CurrentThread, a1);
  return (unsigned int)v7;
}
