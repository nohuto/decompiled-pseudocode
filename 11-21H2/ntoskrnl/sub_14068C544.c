/*
 * XREFs of sub_14068C544 @ 0x14068C544
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068C700 @ 0x14068C700 (sub_14068C700.c)
 *     sub_14068C7E0 @ 0x14068C7E0 (sub_14068C7E0.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_1406C9BF4 @ 0x1406C9BF4 (sub_1406C9BF4.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     sub_14092200C @ 0x14092200C (sub_14092200C.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14068C544(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r11
  bool v6; // zf
  char v7; // bl
  unsigned int v8; // r10d
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r10d
  _DWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v22; // r11d
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // r10d
  _DWORD *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rsi
  __int64 v34; // rcx
  const void *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r8d
  signed int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  unsigned int v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+34h] [rbp-24h]
  __int64 v47; // [rsp+38h] [rbp-20h] BYREF
  __int64 v48; // [rsp+40h] [rbp-18h] BYREF
  __int64 v49; // [rsp+48h] [rbp-10h]
  char v50; // [rsp+A0h] [rbp+48h]
  __int16 v53; // [rsp+B8h] [rbp+60h] BYREF

  v53 = 0;
  v4 = a3;
  sub_140AB4534(&v53);
  v6 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0;
  v7 = v5;
  v8 = *(_DWORD *)(BugCheckParameter2 + 280);
  v9 = (unsigned int)v5;
  v50 = v5;
  v10 = v5;
  v48 = v5;
  v47 = v5;
  v45 = v8;
  if ( !v6 )
  {
    v11 = v5;
    v46 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    if ( *(_DWORD *)(BugCheckParameter2 + 232) == 4096 )
    {
LABEL_9:
      LODWORD(v5) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v49 = sub_140AB44C0(BugCheckParameter2, v11);
      v14 = (_DWORD *)sub_140AB451C(v12, v49, &v53);
      if ( !(unsigned __int8)sub_14068C7E0(v14, v11, v13) )
      {
        v20 = -1073741492;
        sub_14020A890(v4, 1, 34, 0xC000014C, 0x10u);
        if ( (a2 & 0x20000) != 0 || BYTE3(NlsMbOemCodePageTag) == (_BYTE)v9 && (dword_140C4986C & 6) == 0 )
        {
          v43 = 32;
          goto LABEL_30;
        }
        v24 = sub_14071F430(BugCheckParameter2);
        v20 = v24;
        if ( v24 < 0 )
        {
          v43 = 48;
          goto LABEL_27;
        }
        memset(v14, 0, 0x1000uLL);
        v14[2] = 4096;
        v14[1] = v11 & 0x7FFFFFFF;
        *v14 = 1852400232;
        v14[8] = 4064;
        v50 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( v14[2] != 4096 )
      {
        v10 = v14[2];
        sub_140AB44A4(v16, v15, &v53);
        sub_140AB4534(&v53);
        if ( v10 + v11 > v22 )
        {
          v7 = v50;
          v8 = v45;
          goto LABEL_9;
        }
        v17 = sub_14068D310(BugCheckParameter2 + 224, v11, v10, &v48);
        v20 = v17;
        if ( v17 < 0 )
        {
          v43 = 64;
          goto LABEL_32;
        }
        sub_14068CEA0(BugCheckParameter2, v9, v9 & v44);
        v14 = (_DWORD *)sub_140AB451C(v23, v49, &v53);
      }
      v17 = sub_14068C700(BugCheckParameter2);
      v20 = v17;
      if ( v17 == 1073741833 )
      {
        v7 = 1;
        v50 = 1;
      }
      else
      {
        if ( v17 < 0 )
        {
          v43 = 80;
          goto LABEL_32;
        }
        v7 = v50;
      }
      v11 += v14[2];
      sub_140AB44A4(v19, v18, &v53);
      sub_140AB4534(&v53);
      v8 = v45;
      if ( v11 >= v46 )
        goto LABEL_9;
    }
  }
  v11 = v5;
LABEL_10:
  while ( v11 < v8 )
  {
    v48 = sub_140AB44C0(BugCheckParameter2, v11);
    v28 = (_DWORD *)sub_140AB451C(v26, v48, &v53);
    if ( !(unsigned __int8)sub_14068C7E0(v28, v11, v27) )
    {
      v20 = -1073741492;
      sub_14020A890(v4, 1, 34, 0xC000014C, 0x60u);
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        v43 = 112;
LABEL_30:
        v25 = -1073741492;
LABEL_33:
        sub_14020A890(v4, 0, 34, v25, v43);
        return v20;
      }
      v24 = sub_14071F430(BugCheckParameter2);
      v20 = v24;
      if ( v24 < 0 )
      {
        v43 = 128;
LABEL_27:
        v25 = v24;
        goto LABEL_33;
      }
      memset(v28, 0, 0x1000uLL);
      v28[2] = 4096;
      *v28 = 1852400232;
      v28[1] = v11 & 0x7FFFFFFF;
      v28[8] = 4064;
      v50 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    if ( v28[2] != 4096 )
    {
      v10 = v28[2];
      sub_140AB44A4(v30, v29, &v53);
      sub_140AB4534(&v53);
      v31 = sub_14068D2B8(BugCheckParameter2, v10, 0, 825445699, (__int64)&v47);
      v20 = v31;
      if ( v31 < 0 )
      {
        sub_14020A890(v4, 0, 34, v31, 0x90u);
        v9 = v47;
        goto LABEL_13;
      }
      v9 = v47;
      v32 = 0;
      if ( v10 )
      {
        do
        {
          v48 = sub_140AB44C0(BugCheckParameter2, v32 + v11);
          v33 = v48;
          v35 = (const void *)sub_140AB451C(v34, v48, &v53);
          memmove((void *)(v9 + v32), v35, 0x1000uLL);
          sub_140AB44A4(v37, v36, &v53);
          sub_140AB4534(&v53);
          if ( (*(_BYTE *)(v33 + 8) & 8) != 0 )
            sub_1406D16F8(BugCheckParameter2, 4096LL, v35);
          else
            sub_14079CF18(4096LL);
          v32 += 4096;
          *(_QWORD *)v33 = 0LL;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_DWORD *)(v33 + 16) = 0;
        }
        while ( v32 < v10 );
        v4 = a3;
      }
      if ( !(unsigned __int8)sub_14092200C(BugCheckParameter2, v11, v10) )
      {
        v39 = sub_1406C9BF4(BugCheckParameter2, v9, v38, 0, v10, 0);
        v20 = v39;
        if ( v39 < 0 )
        {
          sub_14020A890(v4, 0, 34, v39, 0xA0u);
          goto LABEL_13;
        }
      }
      sub_14068CEA0(BugCheckParameter2, 1, 0LL);
      v9 = 0LL;
      v28 = (_DWORD *)sub_140AB451C(v40, v48, &v53);
      v47 = 0LL;
    }
    v17 = sub_14068C700(BugCheckParameter2);
    v20 = v17;
    if ( v17 == 1073741833 )
    {
      v7 = 1;
      v50 = 1;
    }
    else
    {
      if ( v17 < 0 )
      {
        v43 = 176;
LABEL_32:
        v25 = v17;
        goto LABEL_33;
      }
      v7 = v50;
    }
    v11 += v28[2];
    sub_140AB44A4(v42, v41, &v53);
    sub_140AB4534(&v53);
    v8 = v45;
  }
  if ( v7 )
  {
    return 1073741833;
  }
  else
  {
    v20 = v5;
LABEL_13:
    if ( v9 )
      sub_1406D16F8(BugCheckParameter2, v10, v9);
  }
  return v20;
}
