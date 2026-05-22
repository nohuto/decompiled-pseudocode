/*
 * XREFs of ?RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C024
 * Callers:
 *     ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848 (-RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0 (-SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionIsland *this,
        RTL_SRWLOCK **a2)
{
  int EndpointHost; // ebx
  __int128 v5; // xmm1
  const char *v6; // r9
  _LUID v7; // rax
  __int64 v8; // r14
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _LUID Luid; // [rsp+60h] [rbp+18h] BYREF

  EndpointHost = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
                   this,
                   (struct Windows::UI::Composition::Compositor *)a2);
  if ( EndpointHost < 0 )
  {
    v10 = 80LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)EndpointHost);
    return (unsigned int)EndpointHost;
  }
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 1065353216;
  *((_DWORD *)this + 79) = 1065353216;
  *((_QWORD *)this + 38) = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  *((_DWORD *)this + 78) = 0;
  *((_BYTE *)this + 300) = 0;
  v5 = *((_OWORD *)this + 19);
  *((_OWORD *)this + 20) = *((_OWORD *)this + 18);
  *((_OWORD *)this + 21) = v5;
  Windows::UI::Composition::CompositionIsland::SetEnvironment((RTL_SRWLOCK *)this, a2[149]);
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  if ( AllocateLocallyUniqueId(&Luid) )
  {
    v7 = Luid;
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 107) = 0;
    *((_BYTE *)this + 432) &= ~1u;
    *((_DWORD *)this + 109) = 0;
    *((_LUID *)this + 22) = v7;
    v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 120LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 448);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 440);
    EndpointHost = CoreUICallCreateEndpointHost(v8, (char *)this + 440, (char *)this + 448);
    if ( EndpointHost < 0 )
    {
      v10 = 146LL;
    }
    else
    {
      EndpointHost = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(struct IUnknown *, const void *, int), Windows::UI::Composition::CompositionIsland *, char *))(*(_QWORD *)v8 + 112LL))(
                       v8,
                       Windows::UI::Composition::CompositionIsland::EndpointProc,
                       this,
                       (char *)this + 456);
      if ( EndpointHost >= 0 )
        return 0LL;
      v10 = 151LL;
    }
    goto LABEL_8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x7E,
           (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
           v6);
}
