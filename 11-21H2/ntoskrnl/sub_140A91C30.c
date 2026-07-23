/*
 * XREFs of sub_140A91C30 @ 0x140A91C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 *     sub_140A91F88 @ 0x140A91F88 (sub_140A91F88.c)
 */

char __fastcall sub_140A91C30(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // r14d
  __int64 v10; // rax
  _QWORD *v11; // rbp
  void *v12; // rcx
  char result; // al
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  if ( !dword_140D57528 )
    return sub_14042A5E0(BugCheckParameter3, a2);
  v7 = sub_140A91F88();
  if ( v7 )
  {
    if ( (qword_140D01450 & 0x10) != 0 )
      sub_140A8C924(0xC4u, 0xD7uLL, v7 + 16, BugCheckParameter3, 0LL);
    _InterlockedAdd(&dword_140D5785C, 1u);
    v8 = a5;
    sub_140A91EDC(BugCheckParameter3, a5);
  }
  else
  {
    v8 = a5;
  }
  v9 = 0;
  if ( (dword_140C29FC0 & 0x10) == 0 )
    return sub_14042A5E0(BugCheckParameter3, a2);
  v10 = sub_1402D83B4(&qword_140D58A10, BugCheckParameter3, v8);
  v11 = (_QWORD *)v10;
  if ( !v10 )
  {
    _InterlockedExchange(&dword_140D576A8, 1);
    return sub_14042A5E0(BugCheckParameter3, a2);
  }
  v12 = (void *)(v10 + 16);
  if ( a5 == 120 )
  {
    memset(v12, 0, 0x78uLL);
  }
  else
  {
    sub_14042A5E0(v12, a2);
    v9 = 1;
  }
  sub_14045F6C8((__int64)&v14, 0);
  sub_1402D8234((__int64)&qword_140D58A10, (__int64)&v14, v11);
  result = sub_1402D81DC((__int64)&v14);
  if ( !v9 )
    return sub_14042A5E0(BugCheckParameter3, a2);
  return result;
}
