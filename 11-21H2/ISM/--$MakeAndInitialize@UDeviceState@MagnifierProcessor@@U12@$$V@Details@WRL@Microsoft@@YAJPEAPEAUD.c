/*
 * XREFs of ??$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJPEAPEAUDeviceState@MagnifierProcessor@@@Z @ 0x1801AECD0
 * Callers:
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x1801AF8C0 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801AF348 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor::DeviceState,MagnifierProcessor::DeviceState,>(
        __int64 *a1)
{
  MagnifierProcessor::DeviceState *v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  MagnifierProcessor::DeviceState *v7; // [rsp+48h] [rbp+10h]
  MagnifierProcessor::DeviceState *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (MagnifierProcessor::DeviceState *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v2;
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = MagnifierProcessor::DeviceState::DeviceState(v2);
    v6 = v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v6);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
