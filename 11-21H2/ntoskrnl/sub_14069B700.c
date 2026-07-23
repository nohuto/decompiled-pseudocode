/*
 * XREFs of sub_14069B700 @ 0x14069B700
 * Callers:
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall sub_14069B700(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int a3)
{
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  _WORD *v8; // rax
  _WORD *v9; // r13
  unsigned __int8 *v10; // rbx
  __int16 v11; // cx
  unsigned __int8 *v12; // rdi
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // r10
  unsigned int v15; // esi
  unsigned int v16; // r14d
  int v17; // ecx
  unsigned int v18; // ebx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  UNICODE_STRING String2; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+80h] [rbp+20h] BYREF
  int v27; // [rsp+84h] [rbp+24h]
  int v28; // [rsp+98h] [rbp+38h] BYREF
  int v29; // [rsp+9Ch] [rbp+3Ch]

  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v26 = -1;
  v4 = BugCheckParameter4;
  v27 = 0;
  v28 = -1;
  v29 = 0;
  String1 = 0LL;
  String2 = 0LL;
  if ( v3 )
    v6 = sub_1407C9820(BugCheckParameter3);
  else
    v6 = sub_1406BF400(BugCheckParameter3, a3);
  v7 = v6;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = (_WORD *)sub_1406BF400(BugCheckParameter3, v4);
  else
    v8 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  v9 = v8;
  if ( !v7 || !v8 )
  {
    v18 = -1073741670;
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_19;
  }
  v10 = (unsigned __int8 *)(v8 + 38);
  v11 = v8[1] & 0x20;
  v12 = (unsigned __int8 *)(v7 + 76);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
  {
    String2.Buffer = (wchar_t *)(v7 + 76);
    if ( v11 )
    {
      v23 = (unsigned __int16)v8[36];
      String2.Length = *(_WORD *)(v7 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)((__int64 (__fastcall *)(UNICODE_STRING *, unsigned __int8 *, __int64, _QWORD))sub_1407C45A0)(
                  &String2,
                  v10,
                  v23,
                  0LL) <= 0 )
      {
        v18 = -1073741492;
        goto LABEL_19;
      }
    }
    else
    {
      String1.Length = v8[36];
      String1.MaximumLength = String1.Length;
      String2.Length = *(_WORD *)(v7 + 72);
      String2.MaximumLength = String2.Length;
      String1.Buffer = v8 + 38;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v18 = -1073741492;
        goto LABEL_19;
      }
    }
LABEL_18:
    v18 = 0;
    goto LABEL_19;
  }
  v13 = v8[36];
  v14 = *(_WORD *)(v7 + 72);
  if ( !v11 )
  {
    v22 = *(unsigned __int16 *)(v7 + 72);
    String1.Buffer = v8 + 38;
    String1.Length = v13;
    String1.MaximumLength = v13;
    if ( (int)((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64, _QWORD, _QWORD, wchar_t *))sub_1407C45A0)(
                &String1,
                v7 + 76,
                v22,
                0LL,
                *(_QWORD *)&String2.Length,
                String2.Buffer) >= 0 )
    {
      v18 = -1073741492;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v13 )
  {
    while ( v14 )
    {
      v15 = *v10++;
      v16 = *v12++;
      if ( (_WORD)v15 != (_WORD)v16 )
      {
        if ( v15 >= 0x61 )
        {
          if ( v15 > 0x7A )
          {
            v21 = sub_140347DB0();
            LOWORD(v15) = sub_1403477B0(v21[154], v15);
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        if ( v16 >= 0x61 )
        {
          if ( v16 > 0x7A )
          {
            v20 = sub_140347DB0();
            LOWORD(v16) = sub_1403477B0(v20[154], v16);
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        v17 = (unsigned __int16)v15 - (unsigned __int16)v16;
        if ( (unsigned __int16)v15 != (unsigned __int16)v16 )
          goto LABEL_17;
      }
      --v14;
      if ( !--v13 )
        break;
    }
  }
  v17 = v13 - v14;
LABEL_17:
  if ( v17 < 0 )
    goto LABEL_18;
  v18 = -1073741492;
LABEL_19:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v26);
  else
    sub_1407C97C0(BugCheckParameter3, &v26);
LABEL_21:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v28);
    else
      sub_1407C97C0(BugCheckParameter3, &v28);
  }
  return v18;
}
