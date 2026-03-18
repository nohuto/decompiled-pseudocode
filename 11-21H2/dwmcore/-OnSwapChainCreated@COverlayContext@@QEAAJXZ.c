/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x1801CA040 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIConversionSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001DE40 (--1-$com_ptr_t@VIConversionSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18001DFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180066F20 (-IsXbox@CD3DDevice@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?IsIntelFullDesktopClipRequired@@YA_NI@Z @ 0x1801039C8 (-IsIntelFullDesktopClipRequired@@YA_NI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  bool IsXbox; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // al
  int v12; // r9d
  int v13; // r8d
  int v14; // eax
  int updated; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8);
  *((_DWORD *)this + 2) = *(_DWORD *)((**v3)(v3, v20) + 4);
  v4 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 12LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  IsXbox = CD3DDevice::IsXbox((CD3DDevice *)v5);
  v7 = *(_QWORD *)this;
  v19 = 0LL;
  COverlayContext::s_bXbox |= IsXbox;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7);
  v9 = v8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v9 + 8))(
         v9 + 8,
         &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91,
         &v19) >= 0 )
  {
    *((_BYTE *)this + 11297) = 1;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)this;
    *((_BYTE *)this + 11297) = 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 176LL))(v10);
  }
  *((_BYTE *)this + 11308) = v11;
  v12 = 32902;
  v13 = *(_DWORD *)(v5 + 588);
  *((_DWORD *)this + 2821) = v13;
  *((_BYTE *)this + 11299) = 0;
  v14 = *(_DWORD *)(v5 + 856);
  if ( v14 == 32902 )
  {
    if ( *(__int64 *)(v5 + 592) <= 0x140013000F112DLL )
      *((_BYTE *)this + 11298) = 1;
    *((_BYTE *)this + 11299) = IsIntelFullDesktopClipRequired(*(_DWORD *)(v5 + 860));
  }
  else if ( v14 == 1297040209 && *(_DWORD *)(v5 + 860) == 1177957426 && *(__int64 *)(v5 + 592) <= 0xB001204360026LL )
  {
    *((_BYTE *)this + 11300) = 1;
  }
  if ( CCommonRegistryData::m_customRefreshRateMode == 1
    && v13 >= 2200
    && (*(_DWORD *)(v5 + 856) != v12 || (unsigned __int16)(*(_WORD *)(v5 + 592) - 7011) > 0x139u) )
  {
    *((_BYTE *)this + 11301) = 1;
  }
  updated = COverlayContext::UpdateMPOCaps(this);
  v17 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x6Eu, 0LL);
  }
  else
  {
    **((_DWORD **)this + 1397) = 0;
    *((_DWORD *)this + 2818) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  }
  wil::com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>::~com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>(&v19);
  return v17;
}
