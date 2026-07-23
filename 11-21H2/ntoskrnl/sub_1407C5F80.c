/*
 * XREFs of sub_1407C5F80 @ 0x1407C5F80
 * Callers:
 *     sub_140715BA0 @ 0x140715BA0 (sub_140715BA0.c)
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407FB158 @ 0x1407FB158 (sub_1407FB158.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall sub_1407C5F80(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        const UNICODE_STRING *a3,
        unsigned __int16 *a4,
        int *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  const UNICODE_STRING *v8; // r15
  ULONG_PTR v10; // rdx
  __int16 *v11; // rax
  __int16 v12; // dx
  __int64 v13; // rcx
  __int16 *v14; // rbx
  int v15; // eax
  int v16; // edx
  __int16 *v17; // r8
  unsigned int v18; // edx
  _BYTE *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int8 *v24; // r15
  unsigned __int16 v25; // dx
  unsigned int v26; // r11d
  int v27; // r10d
  _QWORD *v28; // rax
  unsigned __int16 v29; // dx
  unsigned int v30; // eax
  _QWORD *v31; // rax
  unsigned __int16 v32; // r11
  int v33; // r10d
  ULONG_PTR v34; // rdx
  bool v35; // zf
  __int64 v36; // rax
  unsigned __int16 v37; // cx
  unsigned __int8 *v38; // r10
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  char v42; // cl
  int v43; // r14d
  __int64 v44; // rax
  __int16 *v45; // rbx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  int v51; // [rsp+30h] [rbp-40h]
  int v52; // [rsp+34h] [rbp-3Ch]
  unsigned int v53; // [rsp+38h] [rbp-38h]
  __int64 v54; // [rsp+40h] [rbp-30h] BYREF
  __int64 v55; // [rsp+48h] [rbp-28h] BYREF
  __int16 *v56; // [rsp+50h] [rbp-20h]
  __int64 v57; // [rsp+58h] [rbp-18h]
  UNICODE_STRING String2; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v59; // [rsp+B0h] [rbp+40h]
  __int64 v60; // [rsp+B8h] [rbp+48h]

  v60 = a2;
  LODWORD(v5) = *(unsigned __int16 *)(a2 + 2) - 1;
  v6 = 0;
  v54 = 0xFFFFFFFFLL;
  v59 = 0;
  v8 = a3;
  v51 = v5;
  while ( 1 )
  {
    v5 = v6 + (((unsigned int)v5 - v6) >> 1);
    v10 = *(unsigned int *)(a2 + 4 * v5 + 4);
    v52 = v10;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v11 = (__int16 *)sub_1406BF400(BugCheckParameter3, v10, &v54);
    else
      v11 = (__int16 *)sub_1407C9820(BugCheckParameter3);
    v57 = (__int64)v11;
    *a5 = -1;
    if ( !v11 )
      return 0x80000000LL;
    v12 = *v11;
    v13 = (unsigned int)(unsigned __int16)v11[1] - 1;
    if ( ((*v11 - 26220) & 0xFDFF) == 0 )
    {
      v17 = &v11[4 * v13];
      v56 = v17;
      if ( v12 == 26220 )
      {
        v18 = 4;
        v19 = v17 + 4;
        v20 = 0;
        while ( *v19 )
        {
          ++v20;
          ++v19;
          if ( v20 >= 4 )
            goto LABEL_16;
        }
        v18 = v20;
LABEL_16:
        if ( a4 )
          v21 = *a4;
        else
          v21 = v8->Length >> 1;
        if ( v21 < v18 )
          v18 = v21;
        v22 = 0LL;
        v53 = v18;
        if ( v18 )
        {
          v23 = 0LL;
          v24 = (unsigned __int8 *)(v17 + 4);
          while ( 1 )
          {
            v25 = a4 ? *(unsigned __int8 *)(*((_QWORD *)a4 + 1) + v22) : a3->Buffer[v23];
            v26 = *v24;
            if ( v25 >= 0x61u )
            {
              if ( v25 <= 0x7Au )
              {
                v27 = v25 - 32;
              }
              else
              {
                v28 = sub_140347DB0();
                v27 = sub_1403477B0(v28[154], v29);
              }
            }
            else
            {
              v27 = v25;
            }
            if ( v26 >= 0x61 )
            {
              if ( v26 <= 0x7A )
              {
                v30 = v26 - 32;
              }
              else
              {
                v31 = sub_140347DB0();
                v30 = sub_1403477B0(v31[154], v32);
              }
            }
            else
            {
              v30 = v26;
            }
            v33 = v27 - v30;
            if ( v33 )
              break;
            v22 = (unsigned int)(v22 + 1);
            ++v23;
            ++v24;
            if ( (unsigned int)v22 >= v53 )
            {
              v8 = a3;
              v17 = v56;
              goto LABEL_39;
            }
          }
          v16 = 1;
          if ( v33 <= 0 )
            v16 = -1;
          goto LABEL_61;
        }
      }
LABEL_39:
      v34 = *((unsigned int *)v17 + 1);
      v35 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v55 = 0xFFFFFFFFLL;
      String2 = 0LL;
      if ( v35 )
        v36 = sub_1407C9820(BugCheckParameter3);
      else
        v36 = sub_1406BF400(BugCheckParameter3, v34, &v55);
      if ( !v36 )
        goto LABEL_100;
      v37 = *(_WORD *)(v36 + 72);
      v38 = (unsigned __int8 *)(v36 + 76);
      if ( (*(_BYTE *)(v36 + 2) & 0x20) != 0 )
      {
        if ( a4 )
          v39 = sub_14065C57C(*((unsigned __int8 **)a4 + 1), *a4, v38, v37);
        else
          v39 = sub_1407C45A0((__int64)v8, v38, v37, 0);
      }
      else
      {
        String2.Buffer = (wchar_t *)(v36 + 76);
        String2.Length = v37;
        String2.MaximumLength = v37;
        if ( a4 )
        {
          v40 = -(int)sub_1407C45A0((__int64)&String2, *((unsigned __int8 **)a4 + 1), *a4, 0);
          goto LABEL_54;
        }
        v39 = RtlCompareUnicodeString(v8, &String2, 1u);
      }
      v40 = v39;
LABEL_54:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v55);
      else
        sub_1407C97C0(BugCheckParameter3, &v55);
      if ( v40 )
      {
        v16 = 1;
        if ( v40 < 0 )
          v16 = -1;
      }
      else
      {
        v16 = 0;
        *a5 = *((_DWORD *)v56 + 1);
      }
      goto LABEL_61;
    }
    v14 = &v11[2 * v13];
    v15 = sub_1407C4460(BugCheckParameter3, v8, a4, *((unsigned int *)v14 + 1));
    v16 = v15;
    if ( v15 == 2 )
      goto LABEL_100;
    if ( !v15 )
      *a5 = *((_DWORD *)v14 + 1);
LABEL_61:
    if ( v16 == 2 )
      goto LABEL_100;
    if ( !v16 )
      goto LABEL_99;
    v8 = a3;
    if ( v16 >= 0 )
    {
      v6 = v5;
      LODWORD(v5) = v51;
      v59 = v6;
    }
    else
    {
      v41 = sub_1407C4180(BugCheckParameter3, a3, (unsigned __int8 **)a4, 0, (__int16 *)v57, (__int64)a5);
      if ( v41 == 2 )
        goto LABEL_100;
      if ( v41 >= 0 )
      {
LABEL_99:
        v43 = v52;
        goto LABEL_102;
      }
      v6 = v59;
      v51 = v5;
    }
    v42 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    if ( (unsigned int)v5 - v6 <= 1 )
      break;
    if ( v42 )
      sub_1406BF450(BugCheckParameter3, &v54);
    else
      sub_1407C97C0(BugCheckParameter3, &v54);
    a2 = v60;
  }
  if ( v42 )
    sub_1406BF450(BugCheckParameter3, &v54);
  else
    sub_1407C97C0(BugCheckParameter3, &v54);
  v43 = *(_DWORD *)(v60 + 4LL * v6 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v44 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v60 + 4LL * v6 + 4), &v54);
  else
    v44 = sub_1407C9820(BugCheckParameter3);
  v45 = (__int16 *)v44;
  if ( !v44 )
    goto LABEL_80;
  v47 = sub_1407C4180(
          BugCheckParameter3,
          a3,
          (unsigned __int8 **)a4,
          (unsigned int)*(unsigned __int16 *)(v44 + 2) - 1,
          (__int16 *)v44,
          (__int64)a5);
  if ( v47 == 2 )
    goto LABEL_100;
  if ( v47 )
  {
    if ( v47 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v54);
      else
        sub_1407C97C0(BugCheckParameter3, &v54);
      v43 = *(_DWORD *)(v60 + 4LL * (unsigned int)v5 + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v49 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v60 + 4LL * (unsigned int)v5 + 4), &v54);
      else
        v49 = sub_1407C9820(BugCheckParameter3);
      if ( !v49 )
      {
LABEL_80:
        *a5 = -1;
        return 0x80000000LL;
      }
      v50 = sub_1407C4180(
              BugCheckParameter3,
              a3,
              (unsigned __int8 **)a4,
              (unsigned int)*(unsigned __int16 *)(v49 + 2) - 1,
              (__int16 *)v49,
              (__int64)a5);
      if ( v50 != 2 )
      {
        if ( v50 <= 0 )
          goto LABEL_102;
        goto LABEL_101;
      }
    }
    else
    {
      v48 = sub_1407C4180(BugCheckParameter3, a3, (unsigned __int8 **)a4, 0, v45, (__int64)a5);
      if ( v48 != 2 )
      {
        LODWORD(v5) = v59;
        if ( v48 >= 0 )
          goto LABEL_102;
LABEL_101:
        v43 = -1;
        goto LABEL_102;
      }
    }
LABEL_100:
    LODWORD(v5) = 0x80000000;
    goto LABEL_101;
  }
  LODWORD(v5) = v59;
LABEL_102:
  *a5 = v43;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v54);
  else
    sub_1407C97C0(BugCheckParameter3, &v54);
  return (unsigned int)v5;
}
