/*
 * XREFs of ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1802E4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180584908 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::GetPropertyValue(AccessibleElementBase *this, int a2, struct tagVARIANT *a3)
{
  __int16 v5; // r14
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  HRESULT inited; // ebx
  void *v13; // rbx
  int (__fastcall *v14)(void *, unsigned __int16 **); // rdi
  const unsigned __int16 *v15; // rcx
  int v16; // eax
  SHORT v17; // ax
  char v18; // al
  int v19; // ebx
  void *v20; // rbx
  void (__fastcall *v21)(void *, unsigned __int16 **); // rdi
  const unsigned __int16 *v22; // rcx
  int v23; // eax
  LONG v25; // eax
  VARTYPE v26; // cx
  __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  void *v34; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int16 *v36[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v37; // [rsp+40h] [rbp-40h]
  DOUBLE prgn[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v39; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  HIBYTE(v5) = 0;
  a3->vt = 0;
  if ( a2 > 30016 )
  {
    v28 = a2 - 30017;
    if ( v28 )
    {
      v29 = v28 - 14;
      if ( v29 )
      {
        v30 = v29 - 3;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 7 )
                  return 0LL;
                LOBYTE(v5) = *((_DWORD *)this + 31) != 50032;
                a3->iVal = v5 - 1;
                goto LABEL_59;
              }
              v18 = *((_DWORD *)this + 30) & 0x20;
            }
            else
            {
              v18 = *((_DWORD *)this + 30) & 0x10;
            }
          }
          else
          {
            v18 = *((_DWORD *)this + 30) & 0x40;
          }
        }
        else
        {
          v18 = *((_DWORD *)this + 30) & 0x80;
        }
      }
      else
      {
        v18 = *((_DWORD *)this + 30) & 1;
      }
    }
    else
    {
      v18 = *((_DWORD *)this + 30) & 4;
    }
    goto LABEL_57;
  }
  if ( a2 == 30016 )
  {
    v18 = *((_DWORD *)this + 30) & 8;
    goto LABEL_57;
  }
  v6 = a2 - 30001;
  if ( !v6 )
  {
    inited = (*(__int64 (__fastcall **)(char *, unsigned __int16 **))(*((_QWORD *)this + 1) + 40LL))(
               (char *)this + 8,
               v36);
    if ( inited >= 0 )
    {
      *(_OWORD *)prgn = *(_OWORD *)v36;
      v39 = v37;
      inited = InitVariantFromDoubleArray(prgn, 4u, a3);
      if ( inited >= 0 )
        return (unsigned int)inited;
      v27 = 87LL;
    }
    else
    {
      v27 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v25 = *((_DWORD *)this + 31);
    v26 = 3;
    a3->lVal = v25;
LABEL_60:
    a3->vt = v26;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v34);
    if ( inited >= 0 )
    {
      v36[0] = 0LL;
      v36[1] = 0LL;
      *(_QWORD *)&v37 = 0LL;
      v20 = v34;
      v21 = *(void (__fastcall **)(void *, unsigned __int16 **))(*(_QWORD *)v34 + 360LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
      v36[1] = (unsigned __int16 *)-1LL;
      *(_QWORD *)&v37 = -1LL;
      v21(v20, v36);
      v22 = &LocaleName;
      if ( v36[0] )
        v22 = v36[0];
      v23 = InitVariantFromString(v22, a3);
      inited = v23;
      if ( v23 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v23);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
    }
    goto LABEL_34;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v34);
    if ( inited >= 0 )
    {
      v19 = 0;
      (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v34 + 280LL))(v34, &v35);
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v34 + 304LL))(v34)
        && (!v35 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 168LL))(v35)) )
      {
        v19 = 1;
      }
      a3->vt = 11;
      a3->iVal = -(v19 != 0);
      inited = 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    }
    goto LABEL_34;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = *((_DWORD *)this + 30) & 2;
LABEL_57:
    v17 = -(v18 != 0);
    goto LABEL_58;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v17 = -1;
LABEL_58:
    a3->iVal = v17;
LABEL_59:
    v26 = 11;
    goto LABEL_60;
  }
  if ( v11 == 1 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v34);
    if ( inited < 0 )
    {
LABEL_34:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
      return (unsigned int)inited;
    }
    v36[0] = 0LL;
    v36[1] = 0LL;
    *(_QWORD *)&v37 = 0LL;
    v13 = v34;
    v14 = *(int (__fastcall **)(void *, unsigned __int16 **))(*(_QWORD *)v34 + 368LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
    v36[1] = (unsigned __int16 *)-1LL;
    *(_QWORD *)&v37 = -1LL;
    if ( v14(v13, v36) >= 0 )
    {
      v15 = &LocaleName;
      if ( v36[0] )
        v15 = v36[0];
      v16 = InitVariantFromString(v15, a3);
      inited = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v16);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
      goto LABEL_34;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
  }
  return 0LL;
}
