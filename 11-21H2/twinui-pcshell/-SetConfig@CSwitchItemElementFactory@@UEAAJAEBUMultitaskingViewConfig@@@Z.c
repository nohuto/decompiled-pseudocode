/*
 * XREFs of ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180232FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1802311FC (-CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804ACD08 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804ACEB8 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElementFactory::SetConfig(
        CSwitchItemElementFactory *this,
        const struct MultitaskingViewConfig *a2)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rax
  __int64 v6; // rcx
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // r14
  LANGID ThreadUILanguage_0; // ax
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rbx
  int DWriteTextFormat; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+5Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (_OWORD *)((char *)this + 16);
  v5 = (_OWORD *)((char *)a2 + 72);
  v6 = 2LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    *(v4 - 1) = v5[7];
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *v4 = *v5;
  *((_QWORD *)v4 + 2) = *((_QWORD *)v5 + 2);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Instance = CIconLoaderInternal_CreateInstance(
               *((struct IApplicationViewIconLoader **)this + 40),
               v7,
               (void **)this + 41);
  if ( Instance >= 0 )
  {
    v10 = (_QWORD *)((char *)this + 312);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
    Instance = DWriteCreateFactory(0LL, &GUID_0439fc60_ca44_4994_8dee_3a9af7b732ec, (char *)this + 312);
    if ( Instance < 0 )
    {
      v9 = 55LL;
      goto LABEL_5;
    }
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    IsBiDiLocale(ThreadUILanguage_0);
    v12 = (_QWORD *)((char *)this + 304);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
    Instance = MultitaskingViewUtils::LoadDWriteTextFormat(*v10, *((unsigned int *)a2 + 1), 13001LL);
    if ( Instance < 0 )
    {
      v9 = 68LL;
      goto LABEL_5;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 40LL))(*v12, 1LL);
    if ( Instance < 0 )
    {
      v9 = 70LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    v19 = 1;
    v18 = 0LL;
    v13 = *v10;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v10 + 160LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    DWriteTextFormat = v14(v13, *v12, &v18);
    Instance = DWriteTextFormat;
    if ( DWriteTextFormat >= 0 )
    {
      DWriteTextFormat = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*v12 + 72LL))(*v12, &v19, v18);
      Instance = DWriteTextFormat;
      if ( DWriteTextFormat >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
        DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(*v10, L"Segoe MDL2 Assets", 400LL);
        Instance = DWriteTextFormat;
        if ( DWriteTextFormat >= 0 )
        {
LABEL_19:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          return (unsigned int)Instance;
        }
        v16 = 85LL;
      }
      else
      {
        v16 = 75LL;
      }
    }
    else
    {
      v16 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)DWriteTextFormat);
    goto LABEL_19;
  }
  v9 = 54LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
