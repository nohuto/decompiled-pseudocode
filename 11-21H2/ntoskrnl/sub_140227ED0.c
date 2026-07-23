/*
 * XREFs of sub_140227ED0 @ 0x140227ED0
 * Callers:
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     sub_14059A9B4 @ 0x14059A9B4 (sub_14059A9B4.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_1402286E0 @ 0x1402286E0 (sub_1402286E0.c)
 *     sub_1402287C8 @ 0x1402287C8 (sub_1402287C8.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059A70C @ 0x14059A70C (sub_14059A70C.c)
 */

__int64 __fastcall sub_140227ED0(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // esi
  char v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  char v20; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v21; // [rsp+28h] [rbp-D8h]
  _OWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[28]; // [rsp+100h] [rbp+0h] BYREF

  v20 = a4;
  v7 = a4;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v24, 0, sizeof(v24));
  v8 = 0;
  v9 = sub_14026DFC0(5LL);
  LODWORD(BugCheckParameter2[0]) = 2183;
  BugCheckParameter2[19] = (ULONG_PTR)sub_140228170;
  BugCheckParameter2[4] = a1;
  BugCheckParameter2[20] = (ULONG_PTR)sub_1402286E0;
  v10 = (a2 << 12) + a1 - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[21] = (ULONG_PTR)v24;
  v24[25] = __PAIR64__(v7, a3);
  v24[1] = 20LL;
  LODWORD(v24[0]) = v11;
  WORD2(v24[0]) = v11;
  v24[2] = v11;
  v24[3] = v11;
  BugCheckParameter2[3] = v9;
  HIBYTE(BugCheckParameter2[0]) = sub_1402CF4F0(v9);
  if ( a1 <= v10 )
  {
    do
    {
      memset(v22, 0, sizeof(v22));
      if ( !(unsigned int)sub_14031D9B0(v9, a1, 0LL) )
        break;
      sub_140352E50(a1, v22);
      v21 = *((_QWORD *)v22 + v13);
      v14 = *((_QWORD *)v22 + (int)v13 - 1);
      sub_140352E50(v10, v22);
      v16 = *((_QWORD *)v22 + v15);
      if ( v16 > (v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v16 = v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v14 <= v16 )
      {
        sub_140228170((ULONG_PTR)BugCheckParameter2);
        v17 = (unsigned int)(LODWORD(BugCheckParameter2[1]) + 1);
        LODWORD(BugCheckParameter2[1]) = 0;
        v14 += 8 * v17;
      }
      sub_1402286E0(BugCheckParameter2);
      if ( (*(_QWORD *)(48 * (((unsigned __int64)sub_140317A10(v21) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      sub_14020D8D0(v9, v21);
      a1 = sub_1402CFEB0(v14);
    }
    while ( a1 <= v10 );
    LOBYTE(v7) = v20;
    if ( !v8 )
    {
      if ( a1 > v10 )
        goto LABEL_13;
      BugCheckParameter2[4] = a1;
    }
    sub_14030CF90(BugCheckParameter2);
  }
LABEL_13:
  LOBYTE(v12) = HIBYTE(BugCheckParameter2[0]);
  sub_1402B0CE0(v9, v12);
  v18 = v24[23];
  if ( v24[23] )
  {
    if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
    {
      sub_14059A70C();
      v18 = v24[23];
    }
    sub_1402287C8(v18, 2LL);
  }
  if ( v24[24] )
    sub_1402287C8(v24[24], (2 * (v7 & 2)) | 3);
  return HIDWORD(v24[26]);
}
