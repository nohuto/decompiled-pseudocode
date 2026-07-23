/*
 * XREFs of sub_140716F80 @ 0x140716F80
 * Callers:
 *     sub_140716ED0 @ 0x140716ED0 (sub_140716ED0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140920C6C @ 0x140920C6C (sub_140920C6C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

char __fastcall sub_140716F80(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  _WORD *v6; // r14
  _WORD *v7; // rax
  char v8; // si
  __int16 v9; // r13
  bool v10; // zf
  unsigned int v11; // esi
  unsigned int v12; // r12d
  _WORD *v13; // rax
  _WORD *v14; // rdi
  int v15; // r15d
  __int64 v16; // rax
  UNICODE_STRING *p_DestinationString; // r8
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // eax
  size_t v22; // r8
  _WORD *v23; // rdx
  _WORD *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  unsigned int *v34; // [rsp+98h] [rbp+48h]
  __int64 v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a2;
  v31 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v30 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4) = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v7 = (_WORD *)sub_1406BF400(BugCheckParameter3, a3, &v31);
  else
    v7 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  if ( !v7 )
    return 0;
  v9 = v7[1] & 0x20;
  DestinationString.Length = v7[36];
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = v7 + 38;
  if ( v10 )
    sub_1407C97C0(BugCheckParameter3, &v31);
  else
    sub_1406BF450(BugCheckParameter3, &v31);
  v11 = *a2;
  v12 = v11;
  v13 = (_WORD *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                ? sub_1406BF400(BugCheckParameter3, v11, &v35)
                : sub_1407C9820(BugCheckParameter3));
  v14 = v13;
  if ( !v13 )
    return 0;
  v15 = 0x80000000;
  if ( *v13 != 26994 )
    goto LABEL_21;
  v15 = sub_1407C5F80(BugCheckParameter3, (__int64)&BugCheckParameter4);
  if ( v15 < 0 )
  {
    v8 = 0;
LABEL_45:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v35);
    else
      sub_1407C97C0(BugCheckParameter3, &v35);
LABEL_48:
    if ( !v6 )
      return v8;
    goto LABEL_49;
  }
  LODWORD(v30) = v35;
  v6 = v14;
  v12 = v11;
  WORD2(v30) = WORD2(v35);
  v35 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v35 + 4);
  v11 = BugCheckParameter4;
  v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v35)
      : sub_1407C9820(BugCheckParameter3);
  v14 = (_WORD *)v16;
  if ( v16 )
  {
LABEL_21:
    p_DestinationString = &DestinationString;
    if ( v9 )
      LODWORD(p_DestinationString) = 0;
    v18 = sub_140920C6C(
            BugCheckParameter3,
            (_DWORD)v14,
            (_DWORD)p_DestinationString,
            (unsigned __int64)&DestinationString & -(__int64)(v9 != 0),
            (__int64)&BugCheckParameter4);
    v19 = (unsigned int)v18;
    if ( v18 < 0 )
    {
      v8 = 0;
      goto LABEL_44;
    }
    v10 = v14[1]-- == 1;
    v20 = (unsigned __int16)v14[1];
    if ( v10 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v35);
      else
        sub_1407C97C0(BugCheckParameter3, &v35);
      v14 = 0LL;
      sub_14079BD98(BugCheckParameter3, v11);
      if ( !v6 )
        goto LABEL_35;
      v10 = v6[1]-- == 1;
      v21 = (unsigned __int16)v6[1];
      if ( v10 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v30);
        else
          sub_1407C97C0(BugCheckParameter3, &v30);
        v6 = 0LL;
        sub_14079BD98(BugCheckParameter3, v12);
LABEL_35:
        v12 = -1;
LABEL_43:
        v8 = 1;
        *v34 = v12;
LABEL_44:
        if ( !v14 )
          goto LABEL_48;
        goto LABEL_45;
      }
      if ( v15 >= v21 )
        goto LABEL_43;
      v22 = 4LL * (v21 - v15);
      v23 = &v6[2 * (v15 + 1) + 2];
      v24 = &v6[2 * v15 + 2];
    }
    else
    {
      if ( (unsigned int)v19 >= v20 )
        goto LABEL_43;
      v25 = (unsigned int)(v19 + 1);
      v26 = v20 - (unsigned int)v19;
      v27 = v19;
      if ( *v14 == 26988 )
      {
        v22 = 4 * v26;
        v28 = v19 + 1;
        v23 = &v14[2 * v25 + 2];
        v24 = &v14[2 * v28];
      }
      else
      {
        v22 = 8 * v26;
        v23 = &v14[4 * v25 + 2];
        v24 = &v14[4 * v27 + 2];
      }
    }
    memmove(v24, v23, v22);
    goto LABEL_43;
  }
  v8 = 0;
LABEL_49:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v30);
  else
    sub_1407C97C0(BugCheckParameter3, &v30);
  return v8;
}
