/*
 * XREFs of sub_14091FEFC @ 0x14091FEFC
 * Callers:
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F914 @ 0x14082F914 (sub_14082F914.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091FEFC(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned __int64 v2; // r14
  WCHAR *v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  ULONG v12; // r14d
  unsigned int v13; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned int v25; // ebx
  size_t v26; // rbx
  char v27; // r13
  __int64 *v28; // rbx
  unsigned int i; // r15d
  unsigned int v30; // eax
  unsigned int *v31; // r8
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int *v34; // r8
  __int64 v35; // rax
  bool v36; // al
  _DWORD *v37; // rcx
  unsigned int v38; // r12d
  unsigned int v39; // r13d
  __int64 v40; // rax
  unsigned int v41; // r15d
  __int64 *v42; // r14
  unsigned int *v43; // rdx
  const char *v44; // rcx
  int v45; // eax
  bool v46; // bl
  unsigned int v47; // r15d
  int *v48; // r14
  unsigned int v49; // eax
  __int64 v50; // rax
  int v51; // ebx
  unsigned int v52; // ebx
  __int64 v53; // rax
  unsigned int *v54; // rdx
  void *v55; // rcx
  unsigned int *v56; // rdx
  size_t Size; // [rsp+28h] [rbp-D8h]
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  int v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h]
  _DWORD v71[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v73[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-30h] BYREF
  int v75; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v76; // [rsp+DCh] [rbp-24h] BYREF
  _BYTE v77[4]; // [rsp+E4h] [rbp-1Ch] BYREF
  const wchar_t *v78; // [rsp+E8h] [rbp-18h]
  const wchar_t *v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  __int64 v81; // [rsp+100h] [rbp+0h]
  int v82; // [rsp+108h] [rbp+8h]
  int v83; // [rsp+10Ch] [rbp+Ch]
  int v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  int v86; // [rsp+120h] [rbp+20h]
  int v87; // [rsp+124h] [rbp+24h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+134h] [rbp+34h]
  char v91; // [rsp+13Ch] [rbp+3Ch]
  ULONG_PTR BugCheckParameter4; // [rsp+190h] [rbp+90h] BYREF
  WCHAR *PoolWithTag; // [rsp+198h] [rbp+98h]
  __int64 v94; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v95; // [rsp+1A8h] [rbp+A8h] BYREF

  LODWORD(v2) = 0;
  v5 = 0LL;
  v67 = L"Control\\FastCache";
  v71[1] = 0;
  v73[1] = 0;
  v76 = 0LL;
  v78 = L"Control\\ProductOptions";
  v79 = L"ProductPolicy";
  v83 = 0;
  v87 = 0;
  v90 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  v94 = 0xFFFFFFFFLL;
  v64 = 0xFFFFFFFFLL;
  v61 = 0xFFFFFFFFLL;
  v59 = 0xFFFFFFFFLL;
  v60 = 0xFFFFFFFFLL;
  v62 = 0xFFFFFFFFLL;
  v95 = 0xFFFFFFFFLL;
  v68 = 0LL;
  v69 = -1;
  v70 = 0LL;
  v71[0] = -1;
  v71[2] = -1;
  v72 = 0LL;
  v73[0] = -1;
  v74 = 0LL;
  v75 = -1;
  v77[0] = 0;
  v80 = -1;
  v81 = 0LL;
  v82 = -1;
  v84 = -1;
  v85 = 0LL;
  v86 = -1;
  v88 = 0LL;
  v89 = -1;
  v91 = 0;
  v7 = *(_DWORD *)(v6 + 36);
  v8 = *(_QWORD *)(a2 + 64);
  LODWORD(BugCheckParameter4) = 0;
  PoolWithTag = 0LL;
  v65 = 0LL;
  v9 = *(_DWORD *)(v8 + 36);
  v63 = 0LL;
  DestinationString = 0LL;
  if ( v7 == -1 || v9 == -1 )
  {
    v15 = -1073741492;
    goto LABEL_82;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v10 = sub_1406BF400(BugCheckParameter3, v7, &v62);
  else
    v10 = sub_1407C9820(BugCheckParameter3, v7, (unsigned int *)&v62);
  v2 = v10;
  v65 = v10;
  if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
    v11 = sub_1406BF400(a2, v9, &v64);
  else
    v11 = sub_1407C9820(a2, v9, (unsigned int *)&v64);
  v63 = (_DWORD *)v11;
  if ( !v2 || (LODWORD(v2) = 0, !v11) )
  {
    v15 = -1073741670;
    goto LABEL_82;
  }
  v12 = sub_14082F914(BugCheckParameter3, v7, L"WPA");
  v13 = sub_14082F914(a2, v9, L"WPA");
  if ( v12 == -1 || v13 == -1 )
  {
    v15 = -1073741492;
LABEL_81:
    LODWORD(v2) = 0;
    goto LABEL_82;
  }
  v14 = sub_14091EE14(BugCheckParameter3, v12, a2, (struct _LOOKASIDE_LIST_EX *)v13, 2, 1);
  LODWORD(v2) = 0;
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = sub_14082F914(BugCheckParameter3, v7, L"CurrentControlSet");
    v17 = v16;
    if ( v16 == -1 )
    {
      v15 = 0;
      v5 = 0LL;
      goto LABEL_82;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v18 = sub_1406BF400(BugCheckParameter3, v16, &v60);
    else
      v18 = sub_1407C9820(BugCheckParameter3, v16, (unsigned int *)&v60);
    if ( !v18 )
    {
LABEL_20:
      v15 = -1073741670;
      v5 = 0LL;
      goto LABEL_82;
    }
    v19 = sub_1406B4108(BugCheckParameter3, v18, (int)&stru_140D3CB80);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v60);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v60);
    if ( v19 != -1 )
    {
      v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
          ? sub_1406BF400(BugCheckParameter3, v19, &v95)
          : sub_1407C9820(BugCheckParameter3, v19, (unsigned int *)&v95);
      v21 = v20;
      if ( v20 )
      {
        if ( *(_DWORD *)(v20 + 12) == 6 )
        {
          v22 = *(unsigned int *)(v20 + 8);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v23 = sub_1406BF400(BugCheckParameter3, v22, &v59);
          else
            v23 = sub_1407C9820(BugCheckParameter3, v22, (unsigned int *)&v59);
          v24 = v23;
          if ( !v23 )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              sub_1406BF450(BugCheckParameter3, &v95);
            else
              sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v95);
            goto LABEL_20;
          }
          v2 = *(unsigned int *)(v21 + 4) + v23 - 2;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v95);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v95);
          v25 = 0;
          while ( *(_WORD *)v2 != 92 && v2 >= v24 )
          {
            ++v25;
            v2 -= 2LL;
          }
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v25 + 1), 0x68504D43u);
          v5 = PoolWithTag;
          if ( !PoolWithTag )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              sub_1406BF450(BugCheckParameter3, &v59);
            else
              sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v59);
            v15 = -1073741801;
            goto LABEL_81;
          }
          v26 = v25;
          memmove(PoolWithTag, (const void *)(v2 + 2), v26 * 2);
          LODWORD(v2) = 0;
          v5[v26] = 0;
          v17 = sub_14082F914(BugCheckParameter3, v7, v5);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v59);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v59);
          if ( v17 == -1 )
          {
LABEL_53:
            v15 = 0;
LABEL_54:
            v5 = PoolWithTag;
            goto LABEL_82;
          }
        }
        else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          sub_1406BF450(BugCheckParameter3, &v95);
        }
        else
        {
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v95);
        }
      }
    }
    v27 = 0;
    v28 = &v68;
    for ( i = 0; i < 2; ++i )
    {
      v30 = sub_14082F914(BugCheckParameter3, v17, (PCWSTR)*(v28 - 1));
      *((_DWORD *)v28 + 2) = v30;
      if ( v30 != -1 )
      {
        if ( *v28 )
        {
          v2 = 88LL * i;
          v31 = (_DWORD *)((char *)v71 + v2);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v32 = sub_1406BF400(BugCheckParameter3, v30, v31);
          else
            v32 = sub_1407C9820(BugCheckParameter3, v30, v31);
          v28[2] = v32;
          if ( !v32 )
          {
LABEL_79:
            v15 = -1073741670;
LABEL_80:
            v5 = PoolWithTag;
            goto LABEL_81;
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*v28);
          v33 = sub_1406B4108(BugCheckParameter3, v28[2], (int)&DestinationString);
          *((_DWORD *)v28 + 8) = v33;
          if ( v33 == -1 )
          {
            LODWORD(v2) = 0;
          }
          else
          {
            v27 = 1;
            v34 = (_DWORD *)((char *)v73 + v2);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v35 = sub_1406BF400(BugCheckParameter3, v33, v34);
            else
              v35 = sub_1407C9820(BugCheckParameter3, v33, v34);
            v28[5] = v35;
            if ( !v35 )
              goto LABEL_79;
            v36 = sub_1407C46A0(
                    BugCheckParameter3,
                    *((unsigned int *)v28 + 8),
                    v35,
                    (unsigned int *)&v77[v2 - 4],
                    (__int64)&v74 + v2,
                    (__int64)&v77[v2],
                    (int *)((char *)&v75 + v2));
            LODWORD(v2) = 0;
            if ( !v36 )
            {
              v15 = -1073741492;
              goto LABEL_54;
            }
          }
        }
        else
        {
          v27 = 1;
        }
      }
      v28 += 11;
    }
    if ( !v27 )
      goto LABEL_53;
    v37 = v63;
    v38 = 0;
    if ( !v63[5] )
      goto LABEL_53;
    while ( 1 )
    {
      sub_1406BF278(a2, v37, v38, &BugCheckParameter4);
      v39 = BugCheckParameter4;
      v40 = (*(_BYTE *)(a2 + 140) & 1) != 0
          ? sub_1406BF400(a2, (unsigned int)BugCheckParameter4, &v94)
          : sub_1407C9820(a2, BugCheckParameter4, (unsigned int *)&v94);
      if ( !v40 )
        break;
      if ( *(_WORD *)(v40 + 72) == 13 )
      {
        v44 = (const char *)(v40 + 76);
        if ( (*(_BYTE *)(v40 + 2) & 0x20) != 0 )
          v45 = strnicmp(v44, "ControlSet000", 0xAuLL);
        else
          v45 = wcsnicmp((const wchar_t *)v44, L"ControlSet000", 0xAuLL);
        v46 = v45 == 0;
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          sub_1406BF450(a2, &v94);
        else
          sub_1407C97C0(a2, (unsigned int *)&v94);
        if ( v46 )
        {
          v47 = 0;
          v48 = &v69;
          do
          {
            if ( *v48 != -1 && (!*((_QWORD *)v48 - 1) || v48[6] != -1) )
            {
              v49 = sub_14082F914(a2, v39, *((PCWSTR *)v48 - 2));
              if ( v49 != -1 )
              {
                if ( *((_QWORD *)v48 - 1) )
                {
                  if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                    v50 = sub_1406BF400(a2, v49, &v94);
                  else
                    v50 = sub_1407C9820(a2, v49, (unsigned int *)&v94);
                  v51 = v50;
                  if ( !v50 )
                    goto LABEL_79;
                  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v48 - 1));
                  v52 = sub_1406B4108(a2, v51, (int)&DestinationString);
                  if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                    sub_1406BF450(a2, &v94);
                  else
                    sub_1407C97C0(a2, (unsigned int *)&v94);
                  if ( v52 != -1 )
                  {
                    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                      v53 = sub_1406BF400(a2, v52, &v61);
                    else
                      v53 = sub_1407C9820(a2, v52, (unsigned int *)&v61);
                    if ( !v53 )
                      goto LABEL_79;
                    LODWORD(Size) = v48[16];
                    v15 = sub_1407169FC(
                            a2,
                            v52,
                            v53,
                            *(_DWORD *)(*((_QWORD *)v48 + 4) + 12LL),
                            *((void **)v48 + 6),
                            Size,
                            v52 >> 31);
                    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                      sub_1406BF450(a2, &v61);
                    else
                      sub_1407C97C0(a2, (unsigned int *)&v61);
                    if ( v15 < 0 )
                      goto LABEL_80;
                  }
                }
                else
                {
                  sub_14091EE14(BugCheckParameter3, *v48, a2, (struct _LOOKASIDE_LIST_EX *)v49, 2, 1);
                }
              }
            }
            ++v47;
            v48 += 22;
          }
          while ( v47 < 2 );
          LODWORD(v2) = 0;
        }
      }
      else if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      {
        sub_1406BF450(a2, &v94);
      }
      else
      {
        sub_1407C97C0(a2, (unsigned int *)&v94);
      }
      v37 = v63;
      if ( ++v38 >= v63[5] )
        goto LABEL_53;
    }
    v15 = -1073741670;
    goto LABEL_54;
  }
LABEL_82:
  v41 = v2;
  v42 = &v72;
  do
  {
    if ( *(v42 - 3) )
    {
      v43 = &v71[22 * v41];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, v43);
      else
        sub_1407C97C0(BugCheckParameter3, v43);
    }
    if ( *v42 )
    {
      v54 = &v73[22 * v41];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, v54);
      else
        sub_1407C97C0(BugCheckParameter3, v54);
    }
    v55 = (void *)v42[2];
    if ( v55 )
    {
      if ( *((_BYTE *)v42 + 36) )
      {
        ExFreePoolWithTag(v55, 0);
      }
      else
      {
        v56 = (unsigned int *)(&v75 + 22 * v41);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, v56);
        else
          sub_1407C97C0(BugCheckParameter3, v56);
      }
    }
    ++v41;
    v42 += 11;
  }
  while ( v41 < 2 );
  if ( v65 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v62);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v62);
  }
  if ( v63 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      sub_1406BF450(a2, &v64);
    else
      sub_1407C97C0(a2, (unsigned int *)&v64);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v15;
}
