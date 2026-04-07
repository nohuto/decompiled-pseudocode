/*
 * XREFs of ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x18010006C
 * Callers:
 *     ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x1801000B0 (--_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

void __fastcall CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(CGlobalTimeTrackVisual *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &CGlobalTimeTrackVisual::`vftable';
  v2 = (__int64 *)((char *)this + 288);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
  CRenderDataVisual::~CRenderDataVisual(this);
}
