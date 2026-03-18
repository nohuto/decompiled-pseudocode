/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800DD15C
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x18011BEB0 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ @ 0x18011BED0 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ.c)
 * Callees:
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x180079B0C (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800FC044 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckOcclusionState(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  _BYTE *v5; // rbx
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CLegacyRenderTarget *)((char *)this - 18752);
  v3 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2344) + 256LL))((char *)this - 18752, &v11);
  v5 = (char *)this - 50;
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180356BC8, 4u, v3, 0xB8u, 0LL);
  }
  else
  {
    if ( v11 )
      *v5 = 0;
    if ( *v5 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2321) + 264LL))(*((_QWORD *)this - 2321));
      v10 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180356BC8, 4u, v8, 0xC7u, 0LL);
      v6 = CLegacyRenderTarget::CheckForOcclusionChange(v1, v10);
    }
  }
  if ( v6 == -2003304442 )
  {
    if ( *((_QWORD *)this - 2321) )
    {
      CLegacyRenderTarget::ReleaseSwapChain(v1);
    }
    else
    {
      v6 = 142213121;
      *v5 = 1;
    }
  }
  return v6;
}
