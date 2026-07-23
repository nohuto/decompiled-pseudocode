/*
 * XREFs of sub_140843D74 @ 0x140843D74
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     sub_1403E3A4C @ 0x1403E3A4C (sub_1403E3A4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140843D74(_WORD *a1, _QWORD *a2, wchar_t **a3)
{
  int v4; // esi
  void *v5; // r13
  wchar_t *v6; // r15
  int v7; // r14d
  const wchar_t *v8; // rbx
  wchar_t *v9; // rdi
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  unsigned __int64 v12; // rcx
  wchar_t *v13; // rbx
  unsigned __int8 v14; // r14
  wchar_t *v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  wchar_t v18; // dx
  wchar_t *v19; // rax
  bool v20; // zf
  unsigned __int8 v21; // di
  wchar_t *v22; // rbx
  PVOID v23; // rax
  unsigned int v24; // r14d
  unsigned int *v25; // r15
  int v26; // r8d
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  char *v29; // rcx
  wchar_t *v31; // r13
  __int64 v32; // rax
  size_t v33; // r15
  wchar_t *v34; // rax
  int v35; // eax
  int v36; // [rsp+30h] [rbp-D0h]
  __int16 v37; // [rsp+34h] [rbp-CCh]
  wchar_t *EndPtr; // [rsp+38h] [rbp-C8h] BYREF
  int Radix; // [rsp+40h] [rbp-C0h]
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v41; // [rsp+48h] [rbp-B8h]
  wchar_t *v42; // [rsp+50h] [rbp-B0h]
  _QWORD *v43; // [rsp+58h] [rbp-A8h]
  char v44; // [rsp+60h] [rbp-A0h] BYREF

  v43 = a2;
  EndPtr = 0LL;
  v4 = 0;
  v42 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 10;
  Radix = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v8 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v7 = 16;
    Radix = v7;
  }
  v41 = wcstoul(v8, &EndPtr, v7);
  if ( v41 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v8 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v9 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v10 = wcschr(v9, 0x2Du);
  if ( !v10 || v10 == v9 )
    return 3221225592LL;
  if ( *v9 != 48 || (v11 = 16, ((v9[1] - 88) & 0xFFDF) != 0) )
    v11 = v7;
  v40 = 0;
  v12 = sub_1403E3A4C(0LL, v9, &EndPtr, v11, 1, &v40);
  if ( v12 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v13 = EndPtr;
  if ( EndPtr == v9 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v37) = v12;
  v14 = 0;
  LOBYTE(v37) = BYTE1(v12);
  v15 = EndPtr;
  HIBYTE(v36) = BYTE2(v12);
  BYTE2(v36) = BYTE3(v12);
  LOBYTE(v36) = BYTE5(v12);
  BYTE1(v36) = BYTE4(v12);
  while ( 1 )
  {
    if ( v14 == 0xFF )
    {
      v4 = -1073741675;
      goto LABEL_85;
    }
    v16 = *v15;
    if ( (_WORD)v16 == 45 )
    {
      if ( *(v15 - 1) != 45 )
      {
        ++v14;
        if ( v15[1] == 48 && ((v15[2] - 88) & 0xFFDF) == 0 )
          v15 += 2;
        goto LABEL_27;
      }
    }
    else if ( (unsigned int)v16 <= 0x3B )
    {
      v17 = 0x800120100000001LL;
      if ( _bittest64(&v17, v16) )
      {
LABEL_33:
        v19 = v15 - 1;
        v4 = -1073741704;
        v20 = *(v15 - 1) == 45;
        if ( *(v15 - 1) != 45 )
          v19 = v15;
        *a3 = v19;
        if ( !v20 )
        {
          v4 = 0;
          ++v14;
          goto LABEL_37;
        }
LABEL_49:
        if ( v4 >= 0 )
        {
          v29 = (char *)sub_14067757C(4LL * v14 + 12);
          *v43 = v29;
          if ( v29 )
          {
            *v29 = v41;
            *(_DWORD *)(v29 + 2) = v36;
            *((_WORD *)v29 + 3) = v37;
            v29[1] = v14;
            memmove(v29 + 8, v5, 4LL * v14);
          }
          else
          {
            v4 = -1073741801;
          }
        }
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        goto LABEL_54;
      }
    }
    v18 = v15[1];
    if ( v18 == 58 && (((_WORD)v16 - 71) & 0xFFF3) == 0 && (_DWORD)v16 != 75 )
      goto LABEL_33;
    if ( (unsigned __int16)(v16 - 48) <= 9u )
      goto LABEL_26;
    if ( (unsigned __int16)(v16 - 97) > 5u )
      break;
LABEL_27:
    if ( !++v15 )
      goto LABEL_37;
  }
  if ( (unsigned __int16)(v16 - 65) > 5u )
  {
    v4 = -1073741704;
LABEL_85:
    *a3 = v15;
    return (unsigned int)v4;
  }
LABEL_26:
  if ( (_DWORD)v16 != 68 || v18 != 58 )
    goto LABEL_27;
  v31 = EndPtr;
  v32 = v15 - EndPtr;
  v33 = 2 * v32;
  if ( v32 >= 256 )
  {
    v34 = (wchar_t *)sub_14067757C(v33 + 2);
    v42 = v34;
    if ( !v34 )
      return (unsigned int)-1073741801;
    v13 = v34;
  }
  else
  {
    v13 = (wchar_t *)&v44;
  }
  memmove(v13, v31, v33);
  v13[v33 / 2] = 0;
  ++v14;
  v6 = v42;
  *a3 = v15;
LABEL_37:
  v21 = v14 - 1;
  if ( !v14 )
    v21 = 0;
  if ( v21 )
  {
    v22 = v13 + 1;
    v23 = sub_14067757C(4LL * v21);
    v5 = v23;
    if ( v23 )
    {
      v24 = 0;
      v25 = (unsigned int *)v23;
      while ( 1 )
      {
        if ( *v22 != 48 || (v26 = 16, ((v22[1] - 88) & 0xFFDF) != 0) )
          v26 = Radix;
        *v25 = wcstoul(v22, &EndPtr, v26);
        if ( EndPtr )
        {
          v27 = *EndPtr;
          if ( (unsigned int)v27 > 0x3B || (v28 = 0x800320000000001LL, !_bittest64(&v28, v27)) )
          {
            if ( EndPtr[1] != 58 )
              break;
            LOWORD(v27) = v27 - 68;
            if ( (unsigned __int16)v27 > 0xFu )
              break;
            v35 = 34825;
            if ( !_bittest(&v35, v27) )
              break;
          }
        }
        v22 = EndPtr + 1;
        ++v24;
        ++v25;
        if ( v24 >= v21 )
          goto LABEL_48;
      }
      v4 = -1073741704;
    }
    else
    {
      v4 = -1073741801;
    }
LABEL_48:
    v6 = v42;
    v14 = v21;
    goto LABEL_49;
  }
  v4 = -1073741704;
LABEL_54:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v4;
}
