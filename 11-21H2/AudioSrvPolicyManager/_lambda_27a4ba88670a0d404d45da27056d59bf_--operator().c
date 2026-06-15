/*
 * XREFs of _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x1800333B8
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180033B30 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

__int64 __fastcall lambda_27a4ba88670a0d404d45da27056d59bf_::operator()(__int64 a1)
{
  unsigned __int16 **v1; // rax
  unsigned __int16 *v3; // rcx
  int v4; // edx
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned __int64 v8; // r14
  HRESULT UBound; // ebx
  __int64 v10; // rdx
  LONG v11; // eax
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  _WORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  char *v19; // rax
  _QWORD *v20; // rbx
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  HRESULT Element; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  char v30; // al
  _BYTE *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  __int16 v37; // ax
  _WORD *v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int16 v41; // ax
  _WORD *v42; // rax
  _QWORD *v43; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  LONG plUbound; // [rsp+60h] [rbp+40h] BYREF
  LONG rgIndices; // [rsp+68h] [rbp+48h] BYREF

  v1 = *(unsigned __int16 ***)(a1 + 8);
  v3 = *v1;
  if ( **v1 > 0x1Fu )
  {
    if ( *v3 < 0x40u || *v3 > 0x41u && *v3 != 70 && *v3 != 8196 )
      goto LABEL_4;
  }
  else if ( *v3 <= 0x1Du )
  {
    v4 = 1057026562;
    if ( _bittest(&v4, *v3) )
    {
LABEL_4:
      v5 = -2147024809;
      v6 = 706LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070057LL);
      return v5;
    }
  }
  v5 = -2147024809;
  plUbound = 0;
  v8 = 24LL;
  if ( *v3 != 8 )
  {
    if ( *v3 == 30 )
    {
      v13 = (_BYTE *)*((_QWORD *)v3 + 1);
      if ( v13 )
      {
        v14 = 0x7FFFFFFFLL;
        do
        {
          if ( !*v13 )
            break;
          ++v13;
          --v14;
        }
        while ( v14 );
        v15 = (0x7FFFFFFF - v14) & -(__int64)(v14 != 0);
        UBound = v14 == 0 ? 0x80070057 : 0;
        if ( v14 )
        {
          if ( v15 > 0x400 )
          {
            v10 = 758LL;
            goto LABEL_30;
          }
          v8 = v15 + 25;
          goto LABEL_60;
        }
      }
      else
      {
        UBound = -2147024809;
      }
      v10 = 757LL;
      goto LABEL_31;
    }
    if ( *v3 != 31 )
    {
      if ( *v3 == 65 || *v3 == 70 )
      {
        v12 = *((unsigned int *)v3 + 2);
        if ( (unsigned int)v12 > 0x400 )
        {
          v10 = 715LL;
          goto LABEL_30;
        }
        v8 = v12 + 24;
      }
      else if ( *v3 == 8196 )
      {
        if ( SafeArrayGetDim(*((SAFEARRAY **)v3 + 1)) != 1 )
        {
          v6 = 721LL;
          goto LABEL_5;
        }
        if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
        {
          v6 = 722LL;
          goto LABEL_5;
        }
        UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
        if ( UBound < 0 )
        {
          v10 = 723LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)UBound);
          return (unsigned int)UBound;
        }
        if ( plUbound < 0 )
        {
          v10 = 724LL;
LABEL_30:
          UBound = -2147024882;
          goto LABEL_31;
        }
        v11 = plUbound + 1;
        plUbound = v11;
        if ( (unsigned int)v11 > 0x100 )
        {
          v10 = 730LL;
          goto LABEL_30;
        }
        v8 = 4LL * v11 + 24;
      }
      goto LABEL_60;
    }
  }
  v16 = (_WORD *)*((_QWORD *)v3 + 1);
  if ( *v3 != 8 )
  {
    if ( v16 )
    {
      v17 = 0x3FFFFFFFLL;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v17;
      }
      while ( v17 );
      UBound = v17 == 0 ? 0x80070057 : 0;
      if ( v17 )
        goto LABEL_57;
    }
    else
    {
      UBound = -2147024809;
    }
    v10 = 745LL;
    goto LABEL_31;
  }
  if ( !v16 )
  {
    UBound = -2147024809;
LABEL_51:
    v10 = 741LL;
    goto LABEL_31;
  }
  v17 = 0x3FFFFFFFLL;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v17;
  }
  while ( v17 );
  UBound = v17 == 0 ? 0x80070057 : 0;
  if ( !v17 )
    goto LABEL_51;
LABEL_57:
  v18 = (2 * (0x3FFFFFFF - v17)) & -(__int64)(v17 != 0);
  if ( v18 > 0x400 )
  {
    v10 = 748LL;
    goto LABEL_30;
  }
  v8 = v18 + 26;
LABEL_60:
  v19 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( !v19 )
  {
    v10 = 771LL;
    goto LABEL_30;
  }
  v21 = v19 + 24;
  v22 = **(_QWORD **)(a1 + 8);
  *(_OWORD *)v19 = *(_OWORD *)v22;
  *((_QWORD *)v19 + 2) = *(_QWORD *)(v22 + 16);
  switch ( *(_WORD *)v22 )
  {
    case 8:
      goto LABEL_85;
    case 0x1E:
      v26 = *(_QWORD *)(v22 + 8);
      v27 = v8 - 24;
      if ( v8 - 25 > 0x7FFFFFFE )
      {
        if ( v8 != 24 )
          *v21 = 0;
      }
      else
      {
        v28 = 2147483646 - v27;
        v29 = v26 - (_QWORD)v21;
        do
        {
          if ( !(v28 + v27) )
            break;
          v30 = v21[v29];
          if ( !v30 )
            break;
          *v21++ = v30;
          --v27;
        }
        while ( v27 );
        v31 = v21 - 1;
        if ( v27 )
          v31 = v21;
        *v31 = 0;
        v5 = v27 == 0 ? 0x8007007A : 0;
        if ( v27 )
          goto LABEL_106;
      }
      v25 = 819LL;
LABEL_111:
      v24 = v5;
LABEL_112:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v24);
      operator delete(v20);
      return v5;
    case 0x1F:
LABEL_85:
      v32 = *(_QWORD *)(v22 + 8);
      v33 = (v8 - 24) >> 1;
      v34 = v33 - 1;
      if ( *(_WORD *)v22 == 8 )
      {
        if ( v34 > 0x7FFFFFFE )
        {
          if ( v33 )
            *(_WORD *)v21 = 0;
          goto LABEL_97;
        }
        v35 = 2147483646 - v33;
        v36 = v32 - (_QWORD)v21;
        do
        {
          if ( !(v35 + v33) )
            break;
          v37 = *(_WORD *)&v21[v36];
          if ( !v37 )
            break;
          *(_WORD *)v21 = v37;
          v21 += 2;
          --v33;
        }
        while ( v33 );
        v38 = v21 - 2;
        if ( v33 )
          v38 = v21;
        *v38 = 0;
        v5 = v33 == 0 ? 0x8007007A : 0;
        if ( !v33 )
        {
LABEL_97:
          v25 = 805LL;
          goto LABEL_111;
        }
LABEL_106:
        v20[1] = 24LL;
        break;
      }
      if ( v34 > 0x7FFFFFFE )
      {
        if ( v33 )
          *(_WORD *)v21 = 0;
      }
      else
      {
        v39 = 2147483646 - v33;
        v40 = v32 - (_QWORD)v21;
        do
        {
          if ( !(v39 + v33) )
            break;
          v41 = *(_WORD *)&v21[v40];
          if ( !v41 )
            break;
          *(_WORD *)v21 = v41;
          v21 += 2;
          --v33;
        }
        while ( v33 );
        v42 = v21 - 2;
        if ( v33 )
          v42 = v21;
        *v42 = 0;
        v5 = v33 == 0 ? 0x8007007A : 0;
        if ( v33 )
          goto LABEL_106;
      }
      v25 = 810LL;
      goto LABEL_111;
    case 0x41:
    case 0x46:
      memcpy_0(v19 + 24, *(const void **)(v22 + 16), *(unsigned int *)(v22 + 8));
      v20[2] = 24LL;
      break;
    case 0x2004:
      *((_QWORD *)v19 + 1) = 24LL;
      rgIndices = 0;
      if ( plUbound > 0 )
      {
        while ( 1 )
        {
          Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), &rgIndices, v21);
          v5 = Element;
          if ( Element < 0 )
            break;
          v21 += 4;
          if ( ++rgIndices >= plUbound )
            goto LABEL_107;
        }
        v24 = (unsigned int)Element;
        v25 = 794LL;
        goto LABEL_112;
      }
      break;
  }
LABEL_107:
  v43 = *(_QWORD **)(a1 + 24);
  ***(_QWORD ***)(a1 + 16) = v8;
  *v43 = v20;
  return 0LL;
}
