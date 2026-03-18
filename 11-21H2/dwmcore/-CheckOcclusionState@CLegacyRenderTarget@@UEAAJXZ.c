/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800D8694
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180105A30 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ @ 0x180105A50 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BD1A8 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6870 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckOcclusionState(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CLegacyRenderTarget *)((char *)this - 18688);
  v3 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2336) + 256LL))((char *)this - 18688, &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180345B58, 4LL, v3, 0xB3u);
  }
  else
  {
    if ( v10
      || !*((_BYTE *)this - 75)
      && *((struct CComposition **)this - 23) == (struct CComposition *)((char *)GetCurrentFrameId() - 1) )
    {
      return v5;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2314) + 248LL))(*((_QWORD *)this - 2314));
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180345B58, 4LL, v6, 0xBEu);
    v5 = CLegacyRenderTarget::CheckForOcclusionChange(v1, v8);
  }
  if ( v5 == -2003304442 )
  {
    if ( *((_QWORD *)this - 2314) )
    {
      CLegacyRenderTarget::ReleaseSwapChain(v1);
    }
    else
    {
      v5 = 142213121;
      *((_BYTE *)this - 75) = 1;
    }
  }
  return v5;
}
