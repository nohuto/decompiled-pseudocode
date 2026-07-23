/*
 * XREFs of sub_14024E7F8 @ 0x14024E7F8
 * Callers:
 *     sub_14024E6F0 @ 0x14024E6F0 (sub_14024E6F0.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 */

void __fastcall sub_14024E7F8(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rbx
  char v4; // r15
  _QWORD **v5; // r13
  _QWORD *v6; // rsi
  void *v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // rax

  v1 = (_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(a1 + 88);
  v4 = 1;
  if ( v3 != (_QWORD *)(a1 + 88) )
  {
    v5 = (_QWORD **)(a1 + 72);
    do
    {
      v6 = *v5;
      v7 = v3;
      if ( *v5 != v5 || (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
      {
        if ( *((_BYTE *)v3 + 52) )
          goto LABEL_7;
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
          v6 = *(_QWORD **)(a1 + 120);
        v8 = (_QWORD *)(a1 + ((*(_DWORD *)(a1 + 144) & 0x10000) != 0 ? 120LL : 72LL));
        while ( v6 != v8 )
        {
          v9 = v6 - 7;
          if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
            v9 = v6;
          if ( !(unsigned __int8)sub_1402A6AB0(v3[7], v9[3], 0LL) )
          {
            v4 = 0;
            goto LABEL_7;
          }
          v6 = (_QWORD *)*v6;
        }
        if ( !v4 )
          goto LABEL_7;
      }
      v3 = (_QWORD *)v3[1];
      sub_14024E884(v7);
LABEL_7:
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != v1 );
  }
}
