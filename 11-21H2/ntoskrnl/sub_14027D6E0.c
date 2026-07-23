/*
 * XREFs of sub_14027D6E0 @ 0x14027D6E0
 * Callers:
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027D2D8 @ 0x14027D2D8 (sub_14027D2D8.c)
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14027FD04 @ 0x14027FD04 (sub_14027FD04.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1403528A4 @ 0x1403528A4 (sub_1403528A4.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_14058C874 @ 0x14058C874 (sub_14058C874.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405C1218 @ 0x1405C1218 (sub_1405C1218.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14025D6C0 @ 0x14025D6C0 (sub_14025D6C0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

unsigned __int64 __fastcall sub_14027D6E0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rbx
  signed __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  *a3 = 0LL;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  sub_14031DE00(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  for ( i = 2LL; ; --i )
  {
    v9 = *(&v15 + i);
    v10 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      v7 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_BYTE *)(v7 + 912) != 1 )
      {
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          v7 = *((_QWORD *)KeGetCurrentThread() + 23);
          v12 = *(_QWORD *)(v7 + 1928);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8 * ((v9 >> 3) & 0x1FF));
            v14 = v10 | 0x20;
            v7 = (unsigned __int8)v13;
            LOBYTE(v7) = v13 & 0x20;
            if ( (v13 & 0x20) == 0 )
              v14 = *(_QWORD *)v9;
            v10 = v14;
            if ( (v13 & 0x42) != 0 )
              v10 = v14 | 0x42;
          }
        }
      }
    }
    if ( (v10 & 1) == 0 || (v10 & 0x80u) != 0LL )
      break;
    if ( (v10 & 0x20) == 0 )
      sub_14025D6C0(v7, (volatile signed __int64 *)*(&v15 + i), v10, 1);
    if ( v9 != v6 )
    {
      sub_14031DE00(a1, v9, 0LL);
      sub_14020D8D0(a1, v6);
      v6 = v9;
    }
    if ( !i )
    {
      *a3 = a2;
      return v6;
    }
  }
  *a3 = v9;
  return v6;
}
