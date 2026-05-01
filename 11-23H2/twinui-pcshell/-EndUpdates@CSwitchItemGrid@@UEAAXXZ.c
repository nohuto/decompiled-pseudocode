/*
 * XREFs of ?EndUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x180578EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180576150 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::EndUpdates(CSwitchItemGrid *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 180, 0xFFFFFFFF) == 1 )
  {
    v2 = (_QWORD *)((char *)this - 208);
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 26) + 304LL))((char *)this - 208)
      && !*((_QWORD *)this - 5) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*v2 + 272LL))(v2, &v3, 0LL, 7LL, 0);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 288LL))(v2);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v3);
    }
    CMultitaskingViewElementBase::_LayoutChildren(v2, 0, 0LL);
  }
}
