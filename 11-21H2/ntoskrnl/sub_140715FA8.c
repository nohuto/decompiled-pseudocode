/*
 * XREFs of sub_140715FA8 @ 0x140715FA8
 * Callers:
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_1406579F8 @ 0x1406579F8 (sub_1406579F8.c)
 *     sub_14067C45C @ 0x14067C45C (sub_14067C45C.c)
 *     sub_14068B018 @ 0x14068B018 (sub_14068B018.c)
 *     sub_1406B50AC @ 0x1406B50AC (sub_1406B50AC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406DC690 @ 0x1406DC690 (sub_1406DC690.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     sub_1407172C8 @ 0x1407172C8 (sub_1407172C8.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_140715FA8(ULONG_PTR BugCheckParameter3, int a2, _BYTE *a3, _RTL_BITMAP *a4, __int64 a5)
{
  _RTL_BITMAP *v6; // rdi
  _DWORD *v7; // r14
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  unsigned int v16; // esi
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // eax
  ULONG v20; // edx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edi
  signed int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ecx
  ULONG v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v31; // [rsp+20h] [rbp-38h]
  unsigned int v32; // [rsp+20h] [rbp-38h]
  unsigned int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+30h] [rbp-28h]
  __int64 v35; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v36[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+48h]

  v36[0] = 0xFFFFFFFFLL;
  v6 = a4;
  sub_140AB4534((char *)v36 + 4);
  v7 = 0LL;
  v35 = v8;
  sub_140AB4534((char *)&v35 + 4);
  v34 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !(unsigned __int8)sub_1407C8130(
                           BugCheckParameter3,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
                           0LL) )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 0;
LABEL_5:
    v10 = -1073741492;
    sub_14020A890(v9, 0, 9, 0xC000014C, v31);
    return v10;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v11 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v36);
  else
    v11 = sub_1407C9820(BugCheckParameter3);
  v12 = v11;
  if ( !v11 )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 16;
    goto LABEL_5;
  }
  if ( -4 - *(_DWORD *)(v11 - 4) < 76 )
  {
    v13 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v32 = 24;
    v10 = -1073741492;
    v14 = -1073741492;
LABEL_17:
    sub_14020A890(v13, 0, 9, v14, v32);
    goto LABEL_91;
  }
  v15 = *(_DWORD *)(v11 + 44);
  v16 = 0;
  v17 = v15;
  v37 = v15;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, v15, v6) )
    {
      if ( v17 != v15 )
        goto LABEL_60;
      v33 = 128;
      goto LABEL_90;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v18 = sub_1406BF400(BugCheckParameter3, v15, &v35);
    else
      v18 = sub_1407C9820(BugCheckParameter3);
    v7 = (_DWORD *)v18;
    if ( !v18 )
    {
      v32 = 144;
      goto LABEL_77;
    }
    v19 = -4 - *(_DWORD *)(v18 - 4);
    if ( v19 < 0x14 || (v20 = v7[4], v20 + 20 < v20) || v20 + 20 > v19 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v35);
      else
        sub_1407C97C0(BugCheckParameter3, &v35);
      sub_14020A890(a5, 1, 9, 0xC000014C, 0x98u);
LABEL_60:
      if ( (a2 & 0x20000) == 0 && (BYTE3(NlsMbOemCodePageTag) || (dword_140C4986C & 6) != 0) )
      {
        if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, *(unsigned int *)(v12 + 44), 0LL) )
        {
          v33 = 32;
          goto LABEL_90;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v25 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v12 + 44), &v35);
        else
          v25 = sub_1407C9820(BugCheckParameter3);
        v7 = (_DWORD *)v25;
        if ( !v25 )
        {
          v32 = 48;
          goto LABEL_77;
        }
        v26 = -4 - *(_DWORD *)(v25 - 4);
        if ( v26 < 0x14 || (v27 = *(_DWORD *)(v25 + 16), v27 + 20 < v27) || v27 + 20 > v26 )
        {
          v32 = 80;
LABEL_77:
          v10 = -1073741492;
          v14 = -1073741492;
        }
        else
        {
          if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v25 + 20), v27, 0) )
          {
            v32 = 64;
            goto LABEL_77;
          }
          v21 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v12 + 44));
          v10 = v21;
          if ( v21 >= 0 )
          {
            v28 = *(_DWORD *)(v12 + 44);
            v7[2] = v28;
            v7[1] = v28;
            sub_14067C45C(BugCheckParameter3);
            sub_14068B018(BugCheckParameter3);
            v10 = -1073741267;
            v29 = *(_QWORD *)(BugCheckParameter3 + 64);
            *a3 = 1;
            *(_DWORD *)(v29 + 4088) |= 4u;
            goto LABEL_91;
          }
          v32 = 96;
LABEL_86:
          v14 = v21;
        }
        v13 = a5;
        goto LABEL_17;
      }
      v33 = 112;
LABEL_90:
      v10 = -1073741492;
      sub_14020A890(a5, 0, 9, 0xC000014C, v33);
      v7 = 0LL;
      goto LABEL_91;
    }
    if ( v15 != v37 && v7[2] != v16 )
    {
      v32 = 160;
      goto LABEL_77;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v20, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v35);
      else
        sub_1407C97C0(BugCheckParameter3, &v35);
      sub_14020A890(a5, 1, 9, 0xC000014C, 0xA8u);
      goto LABEL_60;
    }
    if ( v34 )
    {
      v21 = sub_1406579F8(BugCheckParameter3, v15);
      v10 = v21;
      if ( v21 < 0 )
      {
        v32 = 184;
        goto LABEL_86;
      }
    }
    else
    {
      v21 = sub_1407172C8(BugCheckParameter3, v15);
      v10 = v21;
      if ( v21 < 0 )
      {
        v32 = 176;
        goto LABEL_86;
      }
    }
    v16 = v15;
    v15 = v7[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v35);
    else
      sub_1407C97C0(BugCheckParameter3, &v35);
    v17 = v37;
    if ( v15 == v37 )
      break;
    v6 = a4;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v22 = sub_1406BF400(BugCheckParameter3, v15, &v35);
  else
    v22 = sub_1407C9820(BugCheckParameter3);
  v7 = (_DWORD *)v22;
  if ( *(_DWORD *)(v22 + 8) != v16 )
  {
    v32 = 200;
    goto LABEL_77;
  }
  if ( !v34 )
    sub_1406DC690(BugCheckParameter3);
  if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = sub_1406B50AC(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v23));
      v10 = v24;
      if ( v24 < 0 )
        break;
      if ( ++v23 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
        goto LABEL_52;
    }
    sub_14020A890(a5, 0, 9, v24, 0xD0u);
    if ( v10 != -1073741670 )
      v10 = -1073741492;
  }
  else
  {
LABEL_52:
    v10 = 0;
  }
LABEL_91:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v36);
  else
    sub_1407C97C0(BugCheckParameter3, v36);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v35);
    else
      sub_1407C97C0(BugCheckParameter3, &v35);
  }
  return v10;
}
