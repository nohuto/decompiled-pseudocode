/*
 * XREFs of sub_140B13B7C @ 0x140B13B7C
 * Callers:
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     sub_140B13964 @ 0x140B13964 (sub_140B13964.c)
 *     sub_140B14558 @ 0x140B14558 (sub_140B14558.c)
 */

char __fastcall sub_140B13B7C(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        PCUNICODE_STRING Source,
        __int64 *a6,
        char a7)
{
  int v7; // r12d
  bool v8; // zf
  char *v10; // r15
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  const WCHAR *v14; // rax
  const WCHAR *v15; // rsi
  char *v16; // rax
  PCUNICODE_STRING v17; // rax
  unsigned __int16 v18; // cx
  _WORD *v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // esi
  ULONG_PTR v22; // rax
  PVOID v23; // r14
  unsigned int v24; // esi
  const UNICODE_STRING *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // esi
  ULONG_PTR v32; // rax
  _DWORD *v33; // rsi
  unsigned int v34; // eax
  unsigned int v35; // esi
  ULONG_PTR v36; // rax
  int v37; // r14d
  unsigned __int16 v38; // ax
  int v39; // r13d
  unsigned int v40; // esi
  unsigned int v41; // eax
  char v42; // si
  __int64 v44; // rcx
  ULONG_PTR v45; // rax
  unsigned __int16 v46; // ax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  size_t Size; // [rsp+38h] [rbp-61h] BYREF
  __int64 v51; // [rsp+40h] [rbp-59h] BYREF
  __int64 v52; // [rsp+48h] [rbp-51h]
  __int64 v53; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING v54; // [rsp+58h] [rbp-41h] BYREF
  __int64 v55; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-29h] BYREF
  __int64 v57; // [rsp+80h] [rbp-19h] BYREF
  __int64 v58; // [rsp+88h] [rbp-11h] BYREF
  __int64 v59; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 v61; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+F8h] [rbp+5Fh]
  unsigned int v63; // [rsp+100h] [rbp+67h]

  v63 = a4;
  BugCheckParameter3a = a3;
  v7 = -1;
  v55 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v59 = 0xFFFFFFFFLL;
  v58 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(Size) = 0;
  v57 = 0xFFFFFFFFLL;
  v53 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v51 = 0xFFFFFFFFLL;
  v61 = 0;
  v54 = 0LL;
  a7 = 0;
  Destination = 0LL;
  if ( v8 )
    v12 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v55);
  else
    v12 = sub_1406BF400(BugCheckParameter3, a2, &v55);
  v52 = v12;
  v13 = v12;
  if ( !v12 || (v14 = (const WCHAR *)sub_140B14558(BugCheckParameter3, v12, &v61), (v15 = v14) == 0LL) )
  {
    v42 = 0;
    goto LABEL_53;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, v14) < 0
    || (v16 = (char *)sub_14042A5E0(144LL, 0LL), (v11 = v16) == 0LL) )
  {
    sub_14042A5E0(v15, v61);
    v10 = 0LL;
    v42 = 0;
    goto LABEL_53;
  }
  memset(v16, 0, 0x90uLL);
  v17 = Source;
  v18 = v61;
  *((_QWORD *)v11 + 8) = BugCheckParameter3;
  v10 = v11;
  *(UNICODE_STRING *)(v11 + 72) = *v17;
  *((_QWORD *)v11 + 5) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  v19 = v11 + 120;
  *((_QWORD *)v11 + 16) = v15;
  *((_WORD *)v11 + 60) = v18 - 2;
  *((_WORD *)v11 + 61) = v18;
  v20 = sub_1406B4108(BugCheckParameter3, v13, (int)&qword_140B57B70);
  v21 = v20;
  if ( v20 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = sub_1406BF400(BugCheckParameter3, v20, &v51);
    else
      v22 = sub_1407C9820(BugCheckParameter3, v20, (unsigned int *)&v51);
    if ( !v22 )
    {
      v42 = 0;
      goto LABEL_53;
    }
    v23 = sub_14082F8AC(BugCheckParameter3, v21, v22, (unsigned int *)&Size, &v53);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v51);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v51);
    if ( !v23 )
      goto LABEL_103;
    v24 = Size;
    v54.Buffer = (wchar_t *)sub_14042A5E0((unsigned int)Size, 0LL);
    if ( !v54.Buffer )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v53);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v53);
      v42 = a7;
LABEL_55:
      v13 = v52;
      goto LABEL_56;
    }
    memmove(v54.Buffer, v23, v24);
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v54.Length = v24;
    v54.MaximumLength = v24;
    if ( v8 )
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v53);
    else
      sub_1406BF450(BugCheckParameter3, &v53);
    LODWORD(v13) = v52;
LABEL_18:
    v25 = Source;
    Destination.MaximumLength = Source->Length + 92 + *v19;
    Destination.Buffer = (wchar_t *)sub_14042A5E0(Destination.MaximumLength, 0LL);
    if ( Destination.Buffer )
    {
      if ( RtlAppendUnicodeStringToString(&Destination, &stru_140B57828) >= 0
        && RtlAppendUnicodeStringToString(&Destination, v25) >= 0
        && RtlAppendUnicodeStringToString(&Destination, &stru_140B578A0) >= 0
        && RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) >= 0 )
      {
        v26 = *((_QWORD *)v11 + 3);
        if ( v26 )
          sub_14042A5E0(v26, *((unsigned __int16 *)v11 + 8));
        v27 = *((_QWORD *)v11 + 5);
        *((UNICODE_STRING *)v11 + 1) = v54;
        v54 = 0LL;
        if ( v27 )
          sub_14042A5E0(v27, *((unsigned __int16 *)v11 + 16));
        v28 = a6;
        *((UNICODE_STRING *)v11 + 2) = Destination;
        v29 = *v28;
        Destination = 0LL;
        if ( *(__int64 **)(v29 + 8) != v28 )
          __fastfail(3u);
        *(_QWORD *)v11 = v29;
        *((_QWORD *)v11 + 1) = v28;
        *(_QWORD *)(v29 + 8) = v11;
        v10 = 0LL;
        *v28 = (__int64)v11;
        v30 = sub_1406B4108(BugCheckParameter3, v13, (int)&qword_140B57B40);
        v31 = v30;
        if ( v30 == -1 )
        {
          *((_DWORD *)v11 + 35) = 1;
        }
        else
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v32 = sub_1406BF400(BugCheckParameter3, v30, &v51);
          else
            v32 = sub_1407C9820(BugCheckParameter3, v30, (unsigned int *)&v51);
          if ( !v32 )
            goto LABEL_81;
          v33 = sub_14082F8AC(BugCheckParameter3, v31, v32, (unsigned int *)&Size, &v57);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v51);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v51);
          if ( !v33 )
            goto LABEL_81;
          *((_DWORD *)v11 + 35) = *v33;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v57);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v57);
        }
        v34 = sub_1406B4108(BugCheckParameter3, v13, (int)&qword_140B57B50);
        v35 = v34;
        if ( v34 == -1 )
        {
          v37 = (_DWORD)v11 + 104;
          *((_WORD *)v11 + 52) = 0;
          *((_WORD *)v11 + 53) = 0;
          *((_QWORD *)v11 + 14) = 0LL;
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v36 = sub_1406BF400(BugCheckParameter3, v34, &v51);
        else
          v36 = sub_1407C9820(BugCheckParameter3, v34, (unsigned int *)&v51);
        if ( v36 )
        {
          *((_QWORD *)v11 + 14) = sub_14082F8AC(BugCheckParameter3, v35, v36, (unsigned int *)&Size, &v58);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v51);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v51);
          if ( *((_QWORD *)v11 + 14) )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              sub_1406BF450(BugCheckParameter3, &v58);
            else
              sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v58);
            v37 = (_DWORD)v11 + 104;
            v38 = Size - 2;
            *((_WORD *)v11 + 52) = Size - 2;
            if ( v38 <= (unsigned __int16)Size )
            {
              *((_WORD *)v11 + 53) = v38;
LABEL_48:
              v39 = v52;
              v40 = sub_1406B4108(BugCheckParameter3, v52, (int)&qword_140B57B00);
              if ( v40 == -1 )
              {
                *((_DWORD *)v11 + 22) = 0;
                *((_QWORD *)v11 + 12) = 0LL;
LABEL_50:
                v41 = sub_1406B4108(BugCheckParameter3, v39, (int)&qword_140B57C00);
                if ( v41 != -1 )
                  v7 = sub_140B13964(BugCheckParameter3a, v41, v63, v37);
                *((_DWORD *)v11 + 34) = v7;
                v42 = 1;
                goto LABEL_53;
              }
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v45 = sub_1406BF400(BugCheckParameter3, v40, &v51);
              else
                v45 = sub_1407C9820(BugCheckParameter3, v40, (unsigned int *)&v51);
              if ( v45 )
              {
                *((_QWORD *)v11 + 12) = sub_14082F8AC(BugCheckParameter3, v40, v45, (unsigned int *)&Size, &v59);
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  sub_1406BF450(BugCheckParameter3, &v51);
                else
                  sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v51);
                if ( *((_QWORD *)v11 + 12) )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    sub_1406BF450(BugCheckParameter3, &v59);
                  else
                    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v59);
                  v46 = Size - 2;
                  *((_WORD *)v11 + 44) = Size - 2;
                  if ( v46 <= (unsigned __int16)Size )
                  {
                    *((_WORD *)v11 + 45) = v46;
                    goto LABEL_50;
                  }
                }
              }
            }
          }
        }
LABEL_81:
        v42 = 0;
        goto LABEL_53;
      }
      v42 = a7;
LABEL_53:
      if ( v54.Buffer )
        sub_14042A5E0(v54.Buffer, v54.Length);
      goto LABEL_55;
    }
LABEL_103:
    v42 = 0;
    goto LABEL_53;
  }
  v44 = (unsigned int)(unsigned __int16)*v19 + 46;
  v54.MaximumLength = *v19 + 46;
  v42 = 0;
  v54.Buffer = (wchar_t *)sub_14042A5E0(v44, 0LL);
  if ( v54.Buffer )
  {
    if ( RtlAppendUnicodeToString(&v54, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&v54, (PCUNICODE_STRING)(v11 + 120)) < 0
      || RtlAppendUnicodeToString(&v54, L".sys") < 0 )
    {
      goto LABEL_53;
    }
    goto LABEL_18;
  }
LABEL_56:
  if ( Destination.Buffer )
    sub_14042A5E0(Destination.Buffer, Destination.Length);
  if ( v10 )
  {
    v47 = *((_QWORD *)v10 + 3);
    if ( v47 )
      sub_14042A5E0(v47, *((unsigned __int16 *)v10 + 8));
    v48 = *((_QWORD *)v10 + 5);
    if ( v48 )
      sub_14042A5E0(v48, *((unsigned __int16 *)v10 + 16));
    v49 = *((_QWORD *)v11 + 16);
    if ( v49 )
      sub_14042A5E0(v49, *((unsigned __int16 *)v11 + 60));
    sub_14042A5E0(v11, 144LL);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v55);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v55);
  }
  return v42;
}
