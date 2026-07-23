/*
 * XREFs of sub_140A4EEAC @ 0x140A4EEAC
 * Callers:
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_140A4E460 @ 0x140A4E460 (sub_140A4E460.c)
 *     sub_140A4FA24 @ 0x140A4FA24 (sub_140A4FA24.c)
 *     sub_140A4FD14 @ 0x140A4FD14 (sub_140A4FD14.c)
 *     sub_140A4FDB0 @ 0x140A4FDB0 (sub_140A4FDB0.c)
 */

__int64 sub_140A4EEAC()
{
  void *v0; // r8
  __int64 v1; // rbx
  __int64 v2; // rdi
  void *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  void *v8; // r8
  _QWORD *v9; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  sub_140A4FD14();
  v11[1] = 0LL;
  v11[0] = sub_140A4E460;
  sub_140A4E460((__int64)v11, (void *)(*((_QWORD *)PsInitialSystemProcess + 5) >> 12), 1LL, 2);
  sub_140A4FA24(0xFFFFDE0000000000uLL, (qword_140D06B38 << 12) + qword_140D069A8 - 1, 512LL);
  PoSetHiberRange(0LL, 0x14000u, qword_140C532D8, 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)KeGetCurrentThread() + 23), 0xB80uLL, 0x62706D4Du);
  v0 = *(void **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
  if ( v0 )
    PoSetHiberRange(0LL, 0x10000u, v0, 0x1000uLL, 0x62706D4Du);
  if ( sub_14029C6C4() )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140C4F418,
      8 * (((unsigned __int64)qword_140C4F410 >> 6) + ((qword_140C4F410 & 0x3F) != 0)),
      0x62706D4Du);
    PoSetHiberRange(0LL, 0x10000u, qword_140C4F420, (unsigned int)(dword_140C4F440 << 12), 0x62706D4Du);
  }
  sub_140A4FA24(qword_140C51AD0, qword_140C51AD0 + qword_140C51AD8 - 1, 0LL);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, qword_140C29CA8, 0x7D0uLL, 0x64736D4Du);
  v1 = 0LL;
  v2 = 50LL;
  do
  {
    v3 = *(void **)((char *)qword_140C29CA8 + v1 + 8);
    if ( v3 )
      PoSetHiberRange(0LL, 0x10000u, v3, *(unsigned __int16 *)((char *)qword_140C29CA8 + v1), 0x64736D4Du);
    v1 += 40LL;
    --v2;
  }
  while ( v2 );
  v4 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = v5;
    v9 = v5;
    if ( v7 )
    {
      v6 = (_QWORD *)*v7;
      v5 = (_QWORD *)v5[1];
      if ( *v7 )
      {
        do
        {
          v5 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    PoSetHiberRange(0LL, 0x10000u, v8, 0x480uLL, 0x6F496D4Du);
  }
  return sub_140A4FDB0();
}
