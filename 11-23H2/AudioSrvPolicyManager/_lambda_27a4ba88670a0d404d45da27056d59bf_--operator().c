/*
 * XREFs of _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x18003BBA4
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x18003C0E0 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015DBC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016D1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18001A248 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180022B34 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180037178 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18003D158 (-IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18003EB9C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 */

__int64 __fastcall lambda_27a4ba88670a0d404d45da27056d59bf_::operator()(__int64 a1)
{
  const char **v2; // r9
  __int64 v3; // rdx
  HRESULT UBound; // ebx
  SIZE_T v5; // rsi
  LONG v6; // eax
  __int64 v7; // rax
  const unsigned __int16 *v8; // rcx
  char *v9; // rax
  char *v10; // rbx
  char *v11; // r14
  __int64 v12; // r9
  LONG v13; // eax
  int Element; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  char *v17; // r8
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  SIZE_T **v21; // rax
  SIZE_T *v22; // rcx
  char **v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  LONG plUbound; // [rsp+60h] [rbp+40h] BYREF
  unsigned __int64 rgIndices; // [rsp+68h] [rbp+48h] BYREF
  char *v27; // [rsp+70h] [rbp+50h] BYREF

  if ( CAudioSessionPropertyStore::IsValidProperty(
         (CAudioSessionPropertyStore *)a1,
         **(const struct tagPROPVARIANT ***)(a1 + 8)) )
  {
    plUbound = 0;
    v5 = 24LL;
    if ( *(_WORD *)v2 != 8 )
    {
      if ( *(_WORD *)v2 == 30 )
      {
        UBound = StringCbLengthA(v2[1], (unsigned int)*(unsigned __int16 *)v2 - 30, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 757LL;
          goto LABEL_4;
        }
        if ( rgIndices > 0x400 )
        {
          UBound = -2147024882;
          v3 = 758LL;
          goto LABEL_4;
        }
        v5 = rgIndices + 25;
        goto LABEL_38;
      }
      if ( *(_WORD *)v2 != 31 )
      {
        if ( *(_WORD *)v2 == 65 || *(_WORD *)v2 == 70 )
        {
          v7 = *((unsigned int *)v2 + 2);
          if ( (unsigned int)v7 > 0x400 )
          {
            UBound = -2147024882;
            v3 = 715LL;
            goto LABEL_4;
          }
          v5 = v7 + 24;
        }
        else if ( *(_WORD *)v2 == 8196 )
        {
          if ( SafeArrayGetDim((SAFEARRAY *)v2[1]) != 1 )
          {
            v3 = 721LL;
            goto LABEL_3;
          }
          if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
          {
            v3 = 722LL;
            goto LABEL_3;
          }
          UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
          if ( UBound < 0 )
          {
            v3 = 723LL;
            goto LABEL_4;
          }
          if ( plUbound < 0 )
          {
            UBound = -2147024882;
            v3 = 724LL;
            goto LABEL_4;
          }
          v6 = plUbound + 1;
          plUbound = v6;
          if ( (unsigned int)v6 > 0x100 )
          {
            UBound = -2147024882;
            v3 = 730LL;
            goto LABEL_4;
          }
          v5 = 4LL * v6 + 24;
        }
LABEL_38:
        v9 = (char *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v9;
        v10 = v9;
        if ( !v9 )
        {
          UBound = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x303,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL);
          Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v27);
          return (unsigned int)UBound;
        }
        v11 = v9 + 24;
        v12 = **(_QWORD **)(a1 + 8);
        *(_OWORD *)v9 = *(_OWORD *)v12;
        *((_QWORD *)v9 + 2) = *(_QWORD *)(v12 + 16);
        if ( *(_WORD *)v12 != 8 )
        {
          if ( *(_WORD *)v12 == 30 )
          {
            Element = StringCchCopyA(v9 + 24, v5 - 24, *(const char **)(v12 + 8));
            v15 = Element;
            if ( Element < 0 )
            {
              v16 = 819LL;
LABEL_58:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v16,
                (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)(unsigned int)Element);
              Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v27);
              return v15;
            }
LABEL_59:
            *((_QWORD *)v10 + 1) = 24LL;
LABEL_60:
            v21 = *(SIZE_T ***)(a1 + 16);
            v27 = 0LL;
            v22 = *v21;
            v23 = *(char ***)(a1 + 24);
            *v22 = v5;
            *v23 = v10;
            Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v27);
            return 0LL;
          }
          if ( *(_WORD *)v12 != 31 )
          {
            if ( *(_WORD *)v12 == 65 || *(_WORD *)v12 == 70 )
            {
              memcpy_0(v9 + 24, *(const void **)(v12 + 16), *(unsigned int *)(v12 + 8));
              *((_QWORD *)v10 + 2) = 24LL;
            }
            else if ( *(_WORD *)v12 == 8196 )
            {
              LODWORD(rgIndices) = 0;
              *((_QWORD *)v9 + 1) = 24LL;
              v13 = 0;
              while ( v13 < plUbound )
              {
                Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), (LONG *)&rgIndices, v11);
                v15 = Element;
                if ( Element < 0 )
                {
                  v16 = 794LL;
                  goto LABEL_58;
                }
                v11 += 4;
                v13 = rgIndices + 1;
                LODWORD(rgIndices) = rgIndices + 1;
              }
            }
            goto LABEL_60;
          }
        }
        v17 = *(char **)(v12 + 8);
        v18 = v5 - 24;
        v19 = v9 + 24;
        if ( *(_WORD *)v12 == 8 )
        {
          Element = StringCbCopyW(v19, v18, v17);
          v15 = Element;
          if ( Element < 0 )
          {
            v16 = 805LL;
            goto LABEL_58;
          }
        }
        else
        {
          Element = StringCbCopyW(v19, v18, v17);
          v15 = Element;
          if ( Element < 0 )
          {
            v16 = 810LL;
            goto LABEL_58;
          }
        }
        goto LABEL_59;
      }
    }
    v8 = (const unsigned __int16 *)v2[1];
    if ( *(_WORD *)v2 == 8 )
    {
      UBound = StringCbLengthW(v8, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 741LL;
        goto LABEL_4;
      }
    }
    else
    {
      UBound = StringCbLengthW(v8, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 745LL;
        goto LABEL_4;
      }
    }
    if ( rgIndices > 0x400 )
    {
      UBound = -2147024882;
      v3 = 748LL;
      goto LABEL_4;
    }
    v5 = rgIndices + 26;
    goto LABEL_38;
  }
  v3 = 706LL;
LABEL_3:
  UBound = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)UBound);
  return (unsigned int)UBound;
}
