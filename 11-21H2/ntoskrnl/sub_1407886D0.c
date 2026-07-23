/*
 * XREFs of sub_1407886D0 @ 0x1407886D0
 * Callers:
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140A2EAB8 @ 0x140A2EAB8 (sub_140A2EAB8.c)
 *     sub_140A2EDF4 @ 0x140A2EDF4 (sub_140A2EDF4.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788A34 @ 0x140788A34 (sub_140788A34.c)
 *     sub_140788D90 @ 0x140788D90 (sub_140788D90.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     sub_140A2EDF4 @ 0x140A2EDF4 (sub_140A2EDF4.c)
 *     sub_140A2EE50 @ 0x140A2EE50 (sub_140A2EE50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407886D0(
        __int64 *a1,
        _WORD *a2,
        void *a3,
        __int64 a4,
        __int64 (**a5)[3],
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  HANDLE v9; // r15
  unsigned int *v10; // r12
  __int64 *v11; // r10
  int v13; // ecx
  int v15; // ebx
  unsigned int v16; // r8d
  __int64 (**j)[3]; // r11
  __int64 *v18; // r9
  __int64 v19; // rdx
  HANDLE v20; // rcx
  __int64 (**v21)[3]; // rsi
  int v22; // eax
  unsigned __int16 *v24; // r14
  HANDLE v25; // rcx
  int v26; // eax
  void *v27; // rcx
  unsigned int v28; // eax
  size_t v29; // r8
  char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // r9
  int v34; // eax
  __int64 v35; // rax
  _BYTE *v36; // r14
  int v37; // r8d
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  unsigned __int16 *Pool2; // rax
  int v42; // r8d
  int v43; // eax
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r8
  _WORD *v49; // rdx
  unsigned __int64 i; // rcx
  __int64 v51; // r9
  int v52; // ecx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned int v61; // edx
  __int64 v62; // rdx
  void *v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // rax
  int v66; // eax
  char v67; // dl
  char v68; // al
  char *v69; // rax
  __int64 v70; // rax
  int v71; // eax
  int v72; // eax
  _BYTE *v73; // rcx
  __int64 v74; // rax
  HANDLE v75; // r8
  _WORD *v76; // rcx
  unsigned int v77; // [rsp+28h] [rbp-79h]
  __int64 v78; // [rsp+28h] [rbp-79h]
  void *v79; // [rsp+30h] [rbp-71h]
  HANDLE Handle; // [rsp+58h] [rbp-49h] BYREF
  int v81; // [rsp+60h] [rbp-41h] BYREF
  int v82; // [rsp+64h] [rbp-3Dh] BYREF
  int v83; // [rsp+68h] [rbp-39h] BYREF
  void *v84; // [rsp+70h] [rbp-31h] BYREF
  __int128 v85; // [rsp+78h] [rbp-29h] BYREF
  __int64 v86; // [rsp+88h] [rbp-19h]
  __int64 v87; // [rsp+90h] [rbp-11h] BYREF
  HANDLE v88; // [rsp+98h] [rbp-9h] BYREF
  void *v89; // [rsp+A0h] [rbp-1h]
  char v92; // [rsp+100h] [rbp+5Fh] BYREF

  v8 = a5;
  v9 = a3;
  v10 = a8;
  v88 = 0LL;
  v11 = a1;
  v89 = 0LL;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v15 = 0;
  v86 = 0LL;
  LODWORD(v87) = 0;
  v82 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0LL;
  v92 = 0;
  v85 = 0LL;
  if ( v13 == 2 )
  {
    v31 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
    if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
      v31 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v31 )
    {
      v33 = a6;
      v77 = a7 >> 1;
      *v8 = 18;
      v34 = sub_140A2EE50(v11, 2LL, a2, v33, v77, v10);
      v15 = v34;
      if ( (int)(v34 + 0x80000000) < 0 || v34 == -1073741789 )
        *v10 *= 2;
      goto LABEL_25;
    }
  }
  else if ( v13 == 18 )
  {
    v35 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v35 )
    {
      if ( !a3 )
      {
        v15 = sub_140788A34((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( v15 < 0 )
          goto LABEL_25;
        LODWORD(a3) = (_DWORD)Handle;
        LODWORD(v11) = (_DWORD)a1;
      }
      v36 = a6;
      v15 = sub_1407886D0((int)v11, (int)a2, (int)a3, (int)&qword_1400170F8, (__int64)v8, a6, a7, (__int64)v10);
      if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073741789 )
        goto LABEL_25;
      v37 = (int)Handle;
      if ( v9 )
        v37 = (int)v9;
      v38 = sub_1407886D0((int)a1, (int)a2, v37, (int)&qword_140017138, (__int64)v8, &v82, 4, (__int64)v10);
      v15 = v38;
      if ( v38 == -1073741789 )
      {
LABEL_74:
        v15 = -1073741595;
        goto LABEL_25;
      }
      if ( v38 >= 0 )
      {
        if ( *v8 == 7 && *v10 == 4 )
        {
          v39 = v82;
        }
        else
        {
          v39 = -1;
          v82 = -1;
        }
        *v8 = 17;
        *v10 = 1;
        if ( !v36 || !a7 )
          goto LABEL_206;
        *v36 = (v39 != 0) - 1;
      }
      goto LABEL_25;
    }
  }
  else if ( v13 == 33 )
  {
    v40 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v40 )
    {
      if ( !a3 )
      {
        v15 = sub_140788A34((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( v15 < 0 )
          goto LABEL_25;
      }
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 1042LL, 1111770192LL);
      v24 = Pool2;
      if ( Pool2 )
      {
        v42 = (int)Handle;
        if ( v9 )
          v42 = (int)v9;
        v43 = sub_1407886D0((int)a1, (int)a2, v42, (int)&qword_14000FC20, (__int64)v8, Pool2, 1042, (__int64)v10);
        v15 = v43;
        if ( v43 != -1073741789 )
        {
          if ( v43 < 0 )
            goto LABEL_42;
          if ( *v8 != 18 )
            goto LABEL_193;
          if ( *v10 - 2 > 0x206 )
            goto LABEL_193;
          v44 = (*v10 >> 1) - 1;
          v87 = (unsigned int)v44;
          if ( v24[v44] )
            goto LABEL_193;
          v45 = (int)Handle;
          v46 = 2 * v44;
          LODWORD(a8) = 2 * v44;
          if ( v9 )
            v45 = (int)v9;
          LODWORD(a5) = 1040 - v46;
          v84 = &v24[(unsigned int)v44 + 1];
          v15 = sub_1407886D0((int)a1, (int)a2, v45, (int)&qword_14000FD30, (__int64)v8, v84, 1040 - v46, (__int64)v10);
          if ( v15 == -1073741275 )
          {
            v47 = (int)Handle;
            if ( v9 )
              v47 = (int)v9;
            v15 = sub_1407886D0((int)a1, (int)a2, v47, (int)&qword_140017310, (__int64)v8, v84, (int)a5, (__int64)v10);
          }
          if ( v15 != -1073741789 )
          {
            if ( v15 < 0 )
              goto LABEL_42;
            if ( *v8 == 18 && *v10 - 2 <= 0x206 )
            {
              v48 = v87;
              v49 = v24;
              v24[v87] = 45;
              for ( i = *v24; (_WORD)i; i = (unsigned __int16)*v49 )
              {
                if ( (unsigned __int16)i <= 0x3Au && (v51 = 0x400200100000000LL, _bittest64(&v51, i)) || (_WORD)i == 126 )
                  *v49 = 95;
                ++v49;
              }
              v52 = (_DWORD)a8 + 2;
              v24[v48] = 45;
              *v8 = 18;
              v53 = *v10 + v52;
              *v10 = v53;
              v27 = a6;
              if ( a6 && a7 >= v53 )
              {
                v29 = v53;
                v30 = (char *)v24;
                goto LABEL_41;
              }
LABEL_192:
              v15 = -1073741789;
              goto LABEL_42;
            }
LABEL_193:
            v15 = -1073741823;
            goto LABEL_42;
          }
        }
LABEL_191:
        v15 = -1073741595;
        goto LABEL_42;
      }
LABEL_103:
      v15 = -1073741801;
      goto LABEL_25;
    }
  }
  else
  {
    if ( v13 == 29 )
    {
      v54 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
      if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
        v54 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v54 )
        goto LABEL_120;
    }
    if ( v13 != 30 )
    {
      switch ( v13 )
      {
        case ' ':
          v32 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
          if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
            v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v32 )
          {
            *v8 = 18;
            v62 = -1LL;
            do
              ++v62;
            while ( a2[v62] );
            v63 = a6;
            v64 = 2 * v62 + 2;
            *v10 = v64;
            if ( v63 && a7 >= v64 )
              memmove(v63, a2, v64);
            else
              return (unsigned int)-1073741789;
            return (unsigned int)v15;
          }
          break;
        case '&':
          v65 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
          if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
            v65 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v65 )
          {
            if ( !a3 )
            {
              v15 = sub_1407827F0(v11, 0LL, 2u, a2, 1, 0, &Handle, 0LL, &v84);
              if ( v15 < 0 )
                goto LABEL_25;
              LODWORD(v9) = (_DWORD)Handle;
              LODWORD(v11) = (_DWORD)a1;
            }
            v66 = sub_1407886D0((int)v11, (int)a2, (int)v9, (int)&qword_1400172D8, (__int64)v8, &v92, 1, (__int64)v10);
            v15 = v66;
            if ( v66 == -1073741789 )
              goto LABEL_74;
            if ( v66 == -1073741275 )
            {
              v15 = 0;
              v92 = 0;
              v67 = 0;
            }
            else
            {
              if ( v66 < 0 )
                goto LABEL_25;
              if ( *v8 == 17 && *v10 == 1 )
              {
                v67 = v92;
              }
              else
              {
                v67 = -1;
                v92 = -1;
              }
              if ( v67 )
              {
                if ( !Handle )
                {
                  LOBYTE(v79) = 0;
                  LODWORD(v78) = 1;
                  v15 = sub_1407827F0(a1, 0LL, 2u, a2, v78, v79, &Handle, 0LL, &v84);
                  if ( v15 < 0 )
                    goto LABEL_25;
                  v67 = v92;
                }
                v68 = v67;
                if ( (*((_BYTE *)v84 + 64) & 0x10) != 0 )
                  v68 = 0;
                v67 = v68;
                v92 = v68;
              }
            }
            v69 = (char *)a6;
            *v8 = 17;
            *v10 = 1;
            if ( !v69 || !a7 )
              goto LABEL_206;
            *v69 = v67;
            goto LABEL_25;
          }
          break;
        case '(':
          v70 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
          if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
            v70 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v70 )
          {
            if ( !a3 )
            {
              v15 = sub_140788A34((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
              if ( v15 < 0 )
                goto LABEL_25;
              LODWORD(v9) = (_DWORD)Handle;
              LODWORD(v11) = (_DWORD)a1;
            }
            v71 = sub_1407886D0((int)v11, (int)a2, (int)v9, (int)&qword_140016E80, (__int64)v8, &v81, 4, (__int64)v10);
            v15 = v71;
            if ( v71 != -1073741789 )
            {
              if ( v71 == -1073741275 )
              {
                v15 = 0;
              }
              else
              {
                if ( v71 < 0 )
                  goto LABEL_25;
                if ( *v8 == 7 && *v10 == 4 )
                {
                  v72 = v81;
                  goto LABEL_183;
                }
              }
              v72 = -1;
              v81 = -1;
LABEL_183:
              v73 = a6;
              *v8 = 17;
              *v10 = 1;
              if ( v73 && a7 )
              {
                *v73 = (v72 != 0) - 1;
                goto LABEL_25;
              }
LABEL_206:
              v15 = -1073741789;
              goto LABEL_25;
            }
            goto LABEL_74;
          }
          break;
      }
      goto LABEL_9;
    }
    v55 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v55 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v55 )
    {
LABEL_120:
      if ( !a3 )
      {
        v15 = sub_140788A34((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
        if ( v15 < 0 )
          goto LABEL_25;
        v9 = Handle;
        v11 = a1;
      }
      v56 = 0LL;
      if ( *v11 )
        v56 = *(_QWORD *)(*v11 + 224);
      v57 = sub_14077FFEC(v56, (__int64)v9, (__int64)L"Configurations", 0, 9u, (__int64)&v88);
      v15 = v57;
      if ( v57 != -1073741772 )
      {
        if ( v57 < 0 )
          goto LABEL_25;
        v58 = *(_DWORD *)(a4 + 16) == 30;
        *(_WORD *)((char *)&v86 + 1) = 0;
        BYTE3(v86) = 0;
        *(_QWORD *)&v85 = a6;
        HIDWORD(v85) = 0;
        HIDWORD(v86) = 0;
        if ( !v58 )
          goto LABEL_131;
        v59 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
        if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
          v59 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v86) = 1;
        if ( v59 )
LABEL_131:
          LOBYTE(v86) = 0;
        if ( a6 )
          DWORD2(v85) = a7 >> 1;
        else
          DWORD2(v85) = 0;
        v15 = sub_14083EAEC(*a1, v88, sub_14064F770, &v85);
        if ( v15 < 0 )
        {
          if ( v86 < 0 )
            v15 = HIDWORD(v86);
          goto LABEL_25;
        }
        if ( HIDWORD(v85) )
        {
          v60 = v85;
          v61 = HIDWORD(v85) + 1;
          v15 = HIDWORD(v86);
          *v8 = 8210;
          HIDWORD(v85) = v61;
          *v10 = 2 * v61;
          if ( v60 && 2 * (unsigned __int64)v61 <= a7 )
            *(_WORD *)(v60 + 2LL * (v61 - 1)) = 0;
          else
            v15 = -1073741789;
          goto LABEL_25;
        }
      }
      v15 = -1073741275;
      goto LABEL_25;
    }
  }
LABEL_9:
  v16 = 0;
  for ( j = &off_140002870; ; j += 5 )
  {
    v18 = (__int64 *)*j;
    if ( LODWORD((**j)[2]) == v13 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v16 >= 0x20 )
      return (unsigned int)-1073741802;
  }
  a5 = &off_140002870 + 5 * v16;
  if ( !a5 )
    return (unsigned int)-1073741802;
  if ( v9 )
  {
    v20 = v89;
LABEL_20:
    v21 = a5;
    if ( !*((_DWORD *)a5 + 8) )
    {
      if ( v9 )
        v20 = v9;
      v22 = sub_140788D90(v20, v20, a5, v8, a6, a7, v10);
      v15 = v22;
      if ( v22 != -1073741275 && (v22 && v22 != -1073741789 || *v8 != 18 || *v10 != 2) || *(_DWORD *)(a4 + 16) != 7 )
        goto LABEL_25;
      v74 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
      if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
        v74 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v74 )
        goto LABEL_25;
      v75 = Handle;
      if ( v9 )
        v75 = v9;
      if ( (int)sub_140A2EDF4(a1, a2, v75, &v83) < 0 || v83 != 218103811 )
        goto LABEL_25;
      v76 = a6;
      v15 = 0;
      *v8 = 18;
      *v10 = 36;
      if ( v76 && a7 >= 0x24 )
      {
        sub_1402E0340(v76, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 2048);
        goto LABEL_25;
      }
      goto LABEL_206;
    }
    LODWORD(a5) = 48;
    v24 = (unsigned __int16 *)ExAllocatePool2(256LL, 48LL, 1111770192LL);
    if ( v24 )
    {
      v25 = Handle;
      if ( v9 )
        v25 = v9;
      v26 = sub_14077FC64(v25, L"Version", &v87, v24, (unsigned int *)&a5);
      v15 = v26;
      if ( v26 == -1073741772 )
      {
        v15 = -1073741275;
        goto LABEL_42;
      }
      if ( v26 != -1073741789 )
      {
        if ( v26 < 0 )
        {
LABEL_42:
          ExFreePoolWithTag(v24, 0);
          goto LABEL_25;
        }
        if ( (_DWORD)v87 == 3 && (_DWORD)a5 == 48 )
        {
          v27 = a6;
          *v8 = *((_DWORD *)v21 + 2);
          v28 = *((_DWORD *)v21 + 8);
          *v10 = v28;
          if ( v27 && a7 >= v28 )
          {
            v29 = *((unsigned int *)v21 + 8);
            v30 = (char *)v24 + *((unsigned int *)v21 + 7);
LABEL_41:
            memmove(v27, v30, v29);
            goto LABEL_42;
          }
          goto LABEL_192;
        }
        goto LABEL_193;
      }
      goto LABEL_191;
    }
    goto LABEL_103;
  }
  v15 = sub_140788A34((_DWORD)v11, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
  if ( v15 >= 0 )
  {
    v20 = Handle;
    goto LABEL_20;
  }
LABEL_25:
  if ( v88 )
    ZwClose(v88);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
