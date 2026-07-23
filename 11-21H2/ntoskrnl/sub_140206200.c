/*
 * XREFs of sub_140206200 @ 0x140206200
 * Callers:
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 * Callees:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_1402D7740 @ 0x1402D7740 (sub_1402D7740.c)
 *     sub_1402D7C70 @ 0x1402D7C70 (sub_1402D7C70.c)
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406734EC @ 0x1406734EC (sub_1406734EC.c)
 *     sub_14067368C @ 0x14067368C (sub_14067368C.c)
 *     sub_1406759F8 @ 0x1406759F8 (sub_1406759F8.c)
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 *     sub_1407D38A8 @ 0x1407D38A8 (sub_1407D38A8.c)
 */

__int64 __fastcall sub_140206200(
        void *a1,
        ULONG64 a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  int v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  unsigned int v19; // r12d
  int v20; // ecx
  unsigned int i; // r14d
  char v22; // di
  unsigned __int16 *v23; // r11
  int v24; // r10d
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // r14
  __int64 result; // rax
  __int16 v33; // cx
  int v34; // eax
  int v35; // eax
  ULONG64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rsi
  _WORD *v39; // r15
  char v40; // [rsp+70h] [rbp-388h]
  unsigned __int16 v41; // [rsp+74h] [rbp-384h] BYREF
  int v42; // [rsp+78h] [rbp-380h]
  bool v43; // [rsp+7Ch] [rbp-37Ch]
  ULONG64 v44; // [rsp+80h] [rbp-378h] BYREF
  PVOID v45; // [rsp+88h] [rbp-370h] BYREF
  PVOID BaseOfImage; // [rsp+90h] [rbp-368h]
  int v47; // [rsp+98h] [rbp-360h]
  int v48; // [rsp+9Ch] [rbp-35Ch]
  ULONG64 Size; // [rsp+A0h] [rbp-358h]
  __int64 v50; // [rsp+A8h] [rbp-350h] BYREF
  _QWORD *v51; // [rsp+B0h] [rbp-348h]
  __int64 v52; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-330h]
  __int64 v55; // [rsp+D0h] [rbp-328h]
  __int64 *v56; // [rsp+D8h] [rbp-320h]
  __int64 v57; // [rsp+E0h] [rbp-318h]
  void *v58; // [rsp+E8h] [rbp-310h]
  _DWORD v59[132]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  Size = a2;
  BaseOfImage = a1;
  v56 = a7;
  v51 = a6;
  v58 = a8;
  v57 = a9;
  v54 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v59, 0, 0x206uLL);
  v11 = 0;
  v47 = a3 & 0x40;
  v50 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v12 = *(_WORD *)(a4 + 16);
    v11 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v43 = v11;
  }
  v15 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v15 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v33 = *(_WORD *)(a4 + 16);
      else
        v33 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v33 & 0xF3FF) != 0
         || v33 == 3072) )
      {
        v34 = sub_1406E3AE0((_DWORD)BaseOfImage, Size, 0, a3, 1);
        v18 = v34;
        if ( v34 < 0 )
        {
          if ( v34 != -1073741686 )
            return (unsigned int)v18;
          v15 = v13 | 0x80000;
          v14 = a5;
        }
        else
        {
          v15 = v13 | sub_1402D7740(BaseOfImage, a4, 0LL);
          v14 = a5;
        }
      }
      else
      {
        a3 |= 0x10u;
        v15 = v13;
      }
    }
  }
  v16 = 393216;
  if ( (v15 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v17 = ~v15;
  LOWORD(v59[0]) = 1;
  LOWORD(v59[1]) = 0;
  LOBYTE(v16) = (~v15 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  if ( (((unsigned __int8)v16 & ((~v15 & 0x20000) != 0)) != 0 || v14 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v15 |= 4u;
    result = sub_1406759F8(v16, v17, v12, v15, (__int64)v59);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = sub_14067368C(BaseOfImage, Size, (__int64)&v52);
    if ( (int)result < 0 )
      return result;
  }
  v18 = 0;
  v19 = 0;
LABEL_15:
  if ( v19 >= LOWORD(v59[0]) )
    return (unsigned int)v18;
  v45 = 0LL;
  v44 = 0LL;
  v41 = v59[2 * v19 + 1];
  v20 = v59[2 * v19 + 2];
  v42 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_48:
      ++v19;
      goto LABEL_15;
    }
    if ( i )
      break;
    if ( v20 != 9 )
    {
      if ( (v15 & 0xA0000) == 0 && (a3 & 0x10) == 0 && v41 && byte_140C4629A )
      {
        v40 = 1;
        v35 = sub_1402D708C((_DWORD)BaseOfImage, v41, (unsigned int)&v45, (unsigned int)&v44, v15 | 0x1000u);
        v18 = v35;
        if ( v35 < 0 )
        {
          if ( v35 == -1073741772 || v35 == -1073741766 )
            v18 = -1073020927;
        }
        else
        {
          v36 = v44;
          if ( !v44 )
          {
            v18 = sub_1406734EC(v45, &v44, 512LL);
            v36 = v44;
          }
          if ( (a3 & 0x1000) != 0 && v18 < 0 )
            goto LABEL_48;
          v18 = sub_14067368C(v45, v36, (__int64)&v53);
          if ( v18 >= 0 )
          {
            v22 = 1;
            goto LABEL_20;
          }
        }
      }
LABEL_46:
      v20 = v42;
      continue;
    }
    a3 |= 0x20u;
  }
  v22 = 0;
  v40 = 0;
LABEL_20:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v41;
  v50 = 0LL;
  v23 = &v41;
  if ( v22 )
    v23 = 0LL;
  v24 = a3;
  if ( v22 )
  {
    v24 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v24 = a3 | 4;
  }
  v25 = &v50;
  if ( v56 )
    v25 = v56;
  v26 = v52;
  if ( v22 )
    v26 = v53;
  v27 = v54;
  if ( v22 )
    v27 = v55;
  v28 = Size;
  if ( v22 )
    v28 = v44;
  v29 = (int)BaseOfImage;
  if ( v22 )
    v29 = (int)v45;
  v30 = sub_1407D38A8(v29, 0, v28, v27, v26, 0, a4, a5, (__int64)v59, (__int64)v51, (__int64)v25, v24, (__int64)v23);
  v18 = v30;
  if ( v47 && v30 >= 0 && v51 && v40 )
  {
    if ( v56 )
      v37 = *v56;
    else
      LODWORD(v37) = v50;
    v18 = sub_1402D7C70((_DWORD)v45, *v51, v37, *(_DWORD *)(a4 + 24), 1);
    if ( v18 < 0 )
    {
      *v51 = 0LL;
      if ( v18 == -1073741701 )
        return (unsigned int)v18;
    }
  }
  if ( v18 < 0 )
    goto LABEL_46;
  v31 = (_DWORD *)v57;
  if ( !v57 )
    return (unsigned int)v18;
  if ( v41 )
  {
    if ( (unsigned int)sub_140372644(v41, Src, 86LL) )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( Src[v38] );
      goto LABEL_103;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v38) = 0;
LABEL_103:
    if ( (unsigned int)v38 < *v31 && (v39 = v58) != 0LL )
    {
      memmove(v58, Src, 2LL * (unsigned int)v38);
      *v31 = v38 + 1;
      v39[(unsigned int)v38] = 0;
    }
    else
    {
      *v31 = v38 + 1;
      v18 = -1073741789;
      v48 = -1073741789;
    }
  }
  return (unsigned int)v18;
}
