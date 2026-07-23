/*
 * XREFs of sub_1407A4A8C @ 0x1407A4A8C
 * Callers:
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F608C @ 0x1406F608C (sub_1406F608C.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407BBF50 @ 0x1407BBF50 (sub_1407BBF50.c)
 */

ULONG_PTR __fastcall sub_1407A4A8C(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  int v6; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-88h]
  int v16; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a3;
  v6 = a2;
  memset(v17, 0, sizeof(v17));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = (a3 + a2 - 1) | 0xFFF;
  v15 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( v15 == a1 )
    v15 = 0LL;
  else
    sub_14030D5C0(a1, 0LL, (__int64)v17, a4);
  v10 = sub_14030E7C0(v4, 0, &v16);
  v11 = v10;
  if ( v10 )
  {
    if ( v9 >> 12 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
      && sub_14032E910(v10)
      && ((*(_DWORD *)(v11 + 48) & 8) == 0 || (int)sub_1407A4C90(v11, v6, v5, 1, 0) >= 0)
      && (*(_DWORD *)(v11 + 48) & 0x200000) == 0
      && (*(_DWORD *)(v11 + 64) & 0x4000000) == 0
      && (dword_140015E20[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x702) == (dword_140015E20[(*(_DWORD *)(v11 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v12 = *(_DWORD *)(**(_QWORD **)(v11 + 72) + 56LL), (v12 & 0x80u) != 0) && (v12 & 0x20) == 0
        || !sub_14030EC40(v11) && (unsigned int)sub_1407BBF50(v13, v4, v9) )
      {
        if ( (int)sub_14033A030(a1, v11, v4, v9) >= 0 )
        {
          v8 = sub_1407B9190(v11, v4, v9, -1073741823, 0);
          if ( !v8 )
            sub_1406F608C(v11, v4, v9);
        }
      }
    }
    sub_14032E700((char *)v11);
  }
  if ( v15 )
    sub_1402D0930((__int64)v17, 0LL);
  if ( v8 )
    return a1 ^ qword_140C50680 ^ v8;
  return v8;
}
