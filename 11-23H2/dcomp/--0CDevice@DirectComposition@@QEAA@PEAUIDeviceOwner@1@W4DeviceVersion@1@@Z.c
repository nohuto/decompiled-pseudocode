/*
 * XREFs of ??0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z @ 0x18001DA88
 * Callers:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??0?$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@@std@@QEAA@XZ @ 0x18009A620 (--0-$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U-$less@PEAUID3D11Devic.c)
 */

__int64 __fastcall DirectComposition::CDevice::CDevice(__int64 a1, __int64 a2, int a3)
{
  ULONGLONG TickCount64; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)a1 = &DirectComposition::CDevice::`vftable'{for `IDCompositionDevice'};
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 8) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDevice4'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDesktopDevicePartner6'};
  *(_QWORD *)(a1 + 24) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDesktopDeviceRestricted'};
  *(_QWORD *)(a1 + 32) = &DirectComposition::CDevice::`vftable'{for `IDCompositionHolographicDevicePartner4'};
  *(_QWORD *)(a1 + 40) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDeviceInternal2'};
  *(_QWORD *)(a1 + 48) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDeviceDebug'};
  *(_QWORD *)(a1 + 56) = &DirectComposition::CDevice::`vftable'{for `IDCompositionInkTrailDevice'};
  *(_QWORD *)(a1 + 64) = &DirectComposition::CDevice::`vftable'{for `IDCompositionCaptureTest'};
  *(_QWORD *)(a1 + 72) = &DirectComposition::CDevice::`vftable'{for `IDwmChannelProvider'};
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 200) = a1 + 232;
  *(_DWORD *)(a1 + 216) = 32;
  *(_QWORD *)(a1 + 220) = 32LL;
  *(_QWORD *)(a1 + 208) = a1 + 232;
  if ( a1 != -232 )
    memset_0((void *)(a1 + 232), 0, 0x80uLL);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 624) = a1 + 616;
  *(_QWORD *)(a1 + 616) = a1 + 616;
  *(_DWORD *)(a1 + 368) = a3;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_DWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  std::map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>::map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>(a1 + 720);
  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 736) = TickCount64 + 600000;
  *(_QWORD *)(a1 + 752) = 0LL;
  *(_DWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_DWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0LL;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_QWORD *)(a1 + 816) = 0LL;
  *(_DWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  *(_QWORD *)(a1 + 496) = a1 + 488;
  *(_QWORD *)(a1 + 488) = a1 + 488;
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 560) = a1 + 552;
  *(_QWORD *)(a1 + 552) = a1 + 552;
  *(_QWORD *)(a1 + 544) = a1 + 536;
  *(_QWORD *)(a1 + 536) = a1 + 536;
  *(_QWORD *)(a1 + 592) = a1 + 584;
  *(_QWORD *)(a1 + 584) = a1 + 584;
  *(_QWORD *)(a1 + 576) = a1 + 568;
  *(_QWORD *)(a1 + 568) = a1 + 568;
  result = a1;
  *(_DWORD *)(a1 + 152) = 1;
  return result;
}
