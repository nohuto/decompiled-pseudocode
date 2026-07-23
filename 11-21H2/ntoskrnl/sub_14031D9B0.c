/*
 * XREFs of sub_14031D9B0 @ 0x14031D9B0
 * Callers:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_1402810B0 @ 0x1402810B0 (sub_1402810B0.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_14031BF80 @ 0x14031BF80 (sub_14031BF80.c)
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_1403528A4 @ 0x1403528A4 (sub_1403528A4.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 __fastcall sub_14031D9B0(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // r10d
  char v6; // al
  __int64 v7; // rbx
  BOOL v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+90h] [rbp+18h]
  unsigned __int64 v20; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  if ( (unsigned __int8)(v6 - 1) <= 2u || v6 == 7 )
    goto LABEL_7;
  if ( v6 != 5 )
  {
    if ( v6 == 4 )
    {
      if ( a2 < ((qword_140D069A8 + (qword_140D06B38 << 12) + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
        && a2 >= qword_140D069A8 )
      {
        return 0LL;
      }
    }
    else if ( !v6 )
    {
LABEL_6:
      v5 = 1;
    }
LABEL_7:
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
    if ( (dword_140D06880 & 0x1000000) != 0 && v7 && !*(_DWORD *)(v7 + 12480) )
    {
      *(_DWORD *)(v7 + 12480) = 1;
      v18 = 0;
      v8 = 0;
      v9 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v20 = v9;
      v19 = a3 | 2;
      if ( !v5 )
        goto LABEL_15;
      v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
      {
        if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          v15 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8 * ((v10 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              LOBYTE(v11) = v11 | 0x20;
            if ( (v16 & 0x42) != 0 )
              LOBYTE(v11) = v11 | 0x42;
          }
        }
        v8 = 0;
      }
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 0x80u) != 0LL )
        {
          v18 = 3;
          v20 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        while ( 1 )
        {
LABEL_15:
          v12 = *(_QWORD *)v20;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL
            && v20 <= 0xFFFFF6FB7DBED7F8uLL
            && (dword_140D06880 & 0xC00000) != 0
            && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
          {
            if ( (v12 & 1) == 0 )
            {
LABEL_42:
              v8 = 0;
              break;
            }
            if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
            {
              v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 8 * ((v20 >> 3) & 0x1FF));
                if ( (v14 & 0x20) != 0 )
                  LOBYTE(v12) = v12 | 0x20;
                if ( (v14 & 0x42) != 0 )
                  LOBYTE(v12) = v12 | 0x42;
              }
            }
          }
          if ( (v12 & 1) == 0 )
            goto LABEL_42;
          if ( (v12 & 0x80u) == 0LL )
          {
            v8 = sub_14031DE00(a1, v20, v19) != 0;
            break;
          }
          v18 = 2;
          v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
      }
      --*(_DWORD *)(v7 + 12480);
      if ( !v8 || !v18 )
        return v8;
      if ( v18 == 3 )
        v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (sub_140317A10(v9) & 0x81) == 0x81 )
      {
        if ( v18 != 3 )
          return 2LL;
        return 3;
      }
      else
      {
        sub_14020D8D0(a1, v20);
        return 0;
      }
    }
    return 0LL;
  }
  if ( a2 < qword_140C540A0 || a2 >= qword_140C540A0 + 0x100000000000LL )
    goto LABEL_6;
  return 0LL;
}
