/*
 * XREFs of ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18023985E
 * Callers:
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002E6F8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D54C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800E607C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x180239798 (--$GetAsString@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1805DAADC (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x1805DC9B4 (McTemplateU0qz_EventWriteTransfer.c)
 *     EncodeRelativePath @ 0x1805F37E4 (EncodeRelativePath.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CLauncherTipContextMenu::_CheckLinkHash(
        CLauncherTipContextMenu *this,
        const struct CPropertyStoreHelper *a2,
        unsigned int *a3)
{
  signed int FailIf; // edi
  const WCHAR *v6; // rax
  unsigned __int64 v7; // r8
  int As; // eax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rbx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 v21; // r8
  signed __int64 v22; // r9
  __int16 v23; // ax
  char *v24; // rax
  int v25; // r14d
  size_t v26; // rax
  WCHAR *v27; // rax
  BYTE *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int lpDestStr; // [rsp+20h] [rbp-E0h]
  BYTE pbHash[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG pulRet; // [rsp+54h] [rbp-ACh] BYREF
  LPCWSTR lpSrcStr; // [rsp+58h] [rbp-A8h] BYREF
  PROPVARIANT propvarIn; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  PROPERTYKEY v42; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v43; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  GUID v47; // [rsp+D0h] [rbp-30h]
  GUID v48; // [rsp+E0h] [rbp-20h]
  GUID v49; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v50[264]; // [rsp+100h] [rbp+0h] BYREF

  *a3 = 0;
  pulRet = 0;
  LOWORD(propvarIn) = 0;
  v42.fmtid = (GUID)PKEY_Winx_Hash;
  v42.pid = 2;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a2, (__int64)&v42, &propvarIn);
  if ( FailIf >= 0 )
  {
    if ( (_WORD)propvarIn )
      FailIf = PropVariantToUInt32(&propvarIn, &pulRet);
    else
      FailIf = -2147023728;
  }
  PropVariantClear(&propvarIn);
  v6 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( FailIf >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
    v40 = -1LL;
    v41 = -1LL;
    v42 = PKEY_Link_TargetParsingPath;
    FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(a2, (__int128 *)&v42, (PWSTR *)&v39);
    v6 = (const WCHAR *)v39;
  }
  propvarIn = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( FailIf >= 0 )
  {
    v47 = FOLDERID_ProgramFiles;
    v48 = FOLDERID_System;
    v49 = FOLDERID_Windows;
    EncodeRelativePath(v50, v6);
    FailIf = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               (__int64)&propvarIn,
               (__int64)v50,
               0xFFFFFFFFFFFFFFFFuLL);
    if ( FailIf >= 0 && (!propvarIn || !*(_WORD *)propvarIn) )
    {
      v7 = v40;
      if ( v40 == -1 )
      {
        if ( v39 )
        {
          v7 = -1LL;
          do
            ++v7;
          while ( *(_WORD *)(v39 + 2 * v7) );
        }
        else
        {
          v7 = 0LL;
        }
      }
      FailIf = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                 (__int64)&propvarIn,
                 v39,
                 v7);
    }
  }
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( FailIf >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v43);
    v44 = -1LL;
    v45 = -1LL;
    v42 = PKEY_Link_Arguments;
    As = CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(a2, (__int128 *)&v42, &v43);
    FailIf = As;
    if ( As == -2147023728 || As >= 0 )
    {
      if ( v43 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v43[v9] );
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&propvarIn);
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v39 + 2 * v11) );
      v12 = v37 + v11 + v10 + 61;
      lpSrcStr = 0LL;
      v46 = 0LL;
      CoTaskMemFree(0LL);
      FailIf = _AllocStringWorker<CTCoAllocPolicy>(v14, v13, 0LL, v12, lpDestStr, (char **)&lpSrcStr);
      CoTaskMemFree(0LL);
      v15 = (unsigned __int16 *)lpSrcStr;
      if ( FailIf >= 0 )
      {
        if ( !propvarIn
          || !*(_WORD *)propvarIn
          || (FailIf = StringCchCopyW((wchar_t *)lpSrcStr, v12, (const wchar_t *)propvarIn), FailIf >= 0) )
        {
          if ( !v43 || (FailIf = StringCchCatW(v15, v12, (char *)v43), FailIf >= 0) )
          {
            if ( (unsigned __int64)(v12 - 1) > 0x7FFFFFFE )
            {
              FailIf = -2147024809;
            }
            else
            {
              v16 = v12;
              v17 = v15;
              do
              {
                if ( !*v17 )
                  break;
                ++v17;
                --v16;
              }
              while ( v16 );
              FailIf = v16 == 0 ? 0x80070057 : 0;
              if ( v16 )
                v18 = v12 - v16;
              else
                v18 = 0LL;
              if ( v16 )
              {
                v19 = v12 - v18;
                v20 = (char *)&v15[v18];
                if ( v12 != v18 )
                {
                  v21 = 2147483646LL;
                  v22 = (char *)L"Do not prehash links.  This should only be done by the user." - v20;
                  do
                  {
                    if ( !v21 )
                      break;
                    v23 = *(_WORD *)&v20[v22];
                    if ( !v23 )
                      break;
                    *(_WORD *)v20 = v23;
                    v20 += 2;
                    --v21;
                    --v19;
                  }
                  while ( v19 );
                }
                v24 = v20 - 2;
                if ( v19 )
                  v24 = v20;
                *(_WORD *)v24 = 0;
                FailIf = v19 == 0 ? 0x8007007A : 0;
              }
            }
          }
        }
      }
      *(_DWORD *)pbHash = 0;
      if ( FailIf >= 0 )
      {
        lpSrcStr = 0LL;
        FailIf = StringCchLengthW(v15, v12, (unsigned __int64 *)&lpSrcStr);
        if ( FailIf >= 0 )
        {
          v25 = (int)lpSrcStr;
          v26 = 2LL * ((_QWORD)lpSrcStr + 1);
          if ( !is_mul_ok((unsigned __int64)lpSrcStr + 1, 2uLL) )
            v26 = -1LL;
          v27 = (WCHAR *)operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
          v28 = (BYTE *)v27;
          if ( v27 )
          {
            if ( LCMapStringEx(&LocaleName, 0x100u, v15, v25 + 1, v27, v25 + 1, 0LL, 0LL, 0LL)
              || (FailIf = ResultFromKnownLastError(), FailIf >= 0) )
            {
              FailIf = HashData(v28, 2 * v25, pbHash, 4u);
            }
            operator delete[](v28);
            if ( FailIf >= 0 )
            {
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                McTemplateU0qz_EventWriteTransfer(v30, v29, *(unsigned int *)pbHash, v15);
              if ( pulRet == *(_DWORD *)pbHash )
              {
                FailIf = 0;
                *a3 = pulRet;
              }
              else
              {
                FailIf = -2147467259;
              }
            }
          }
          else
          {
            FailIf = -2147024882;
          }
        }
      }
      CoTaskMemFree(v15);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v43);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
  return (unsigned int)FailIf;
}
