/*
 * XREFs of ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ @ 0x1801096C4
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x18011BEF0 (-CheckOcclusionState@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180109730 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::CheckOcclusionState(CRemoteRenderTarget *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = CRemoteRenderTarget::EnsureSwapChain((CRemoteRenderTarget *)((char *)this - 448));
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180356700, 3u, v2, 0x70u, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 34) + 104LL))(*((_QWORD *)this - 34));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180356700, 3u, v5, 0x72u, 0LL);
    else
      *((_BYTE *)this - 55) = v5 == 142213121;
  }
  return v4;
}
