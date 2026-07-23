/*
 * XREFs of sub_14079B3A0 @ 0x14079B3A0
 * Callers:
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_14079C640 @ 0x14079C640 (sub_14079C640.c)
 *     sub_14079C888 @ 0x14079C888 (sub_14079C888.c)
 *     sub_14079CED8 @ 0x14079CED8 (sub_14079CED8.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 sub_14079B3A0(__int64 a1, int a2, ...)
{
  __int64 v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // rbx
  unsigned int *v5; // r12
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rbp
  int v15; // r8d
  _RTL_BITMAP *BitMapHeader; // r10
  unsigned int v17; // eax
  signed int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int16 v24; // [rsp+98h] [rbp+10h] BYREF
  __int16 v25; // [rsp+9Ah] [rbp+12h]
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]
  __int64 v29; // [rsp+B0h] [rbp+28h]
  __int64 v30; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v26 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v25 = HIWORD(a2);
  v24 = 0;
  sub_140AB4534(&v24);
  v4 = v30;
  v5 = (unsigned int *)(v2 + 280);
  v6 = v29;
  v7 = v3;
  LODWORD(v26) = v3;
  v8 = v3;
  while ( 2 )
  {
    v9 = *v5;
    while ( v7 < v9 )
    {
      v10 = sub_140AB44C0(v2, v7);
      if ( !v10 )
      {
        v21 = -1073741492;
        if ( v4 )
        {
          sub_14020A890(v4, 0, 16, 0xC000014C, v11);
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
        }
        return v21;
      }
      v12 = sub_14079B740(v10);
      if ( v12 )
      {
        v7 += *(_DWORD *)(v12 + 16);
        if ( v6 )
        {
          sub_14079CED8(v6);
          sub_14079C888();
        }
      }
      else
      {
        v14 = (_DWORD *)sub_140AB451C(v13, v13, &v24);
        v17 = v14[2];
        if ( v17 > v9 - v7 || v17 < 0x20 || (v17 & 0xFFF) != 0 || *v14 != 1852400232 || v14[1] != v7 )
        {
          v21 = -1073741492;
          if ( !v4 )
            return v21;
          sub_14020A890(v4, 0, 16, 0xC000014C, 0x20u);
          goto LABEL_22;
        }
        v18 = sub_14079C640(v9 - v7, (int)v14, v15, (int)va, BitMapHeader, v6, v4);
        v21 = v18;
        if ( v18 < 0 )
        {
          if ( !v4 )
            return v21;
          sub_14020A890(v4, 0, 16, v18, 0x30u);
LABEL_22:
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
          *(_QWORD *)(v4 + 304) = v14;
          return v21;
        }
        v7 += v14[2];
        sub_140AB44A4(v20, v19, &v24);
        v2 = a1;
      }
    }
    ++v8;
    v5 += 158;
    v7 = 0x80000000;
    if ( v8 <= 1 )
      continue;
    return v3;
  }
}
