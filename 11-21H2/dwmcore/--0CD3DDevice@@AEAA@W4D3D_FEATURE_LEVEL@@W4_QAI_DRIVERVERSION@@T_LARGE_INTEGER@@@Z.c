/*
 * XREFs of ??0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x180022DB8
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x180021A88 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DContext@@IEAA@XZ @ 0x180023020 (--0CD2DContext@@IEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall CD3DDevice::CD3DDevice(__int64 a1)
{
  _QWORD *v2; // rcx
  int v3; // r10d
  int v4; // r8d
  __int64 v5; // r9

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 456) = 0LL;
  CD2DContext::CD2DContext((CD2DContext *)(a1 + 16));
  *(_DWORD *)(a1 + 480) = 1;
  *(_QWORD *)(a1 + 464) = a1 + 496;
  *(_QWORD *)(a1 + 472) = a1 + 496;
  *(_QWORD *)(a1 + 484) = 1LL;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)a1 = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *v2 = &CD3DDevice::`vftable'{for `CD2DContext'};
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 936) = -1LL;
  *(_DWORD *)(a1 + 584) = v3;
  *(_DWORD *)(a1 + 588) = v4;
  *(_QWORD *)(a1 + 592) = v5;
  *(_DWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_QWORD *)(a1 + 992) = 0LL;
  *(_QWORD *)(a1 + 1000) = 0LL;
  *(_QWORD *)(a1 + 1008) = 0LL;
  *(_QWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1080) = 0LL;
  *(_QWORD *)(a1 + 1104) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(a1 + 1176) = 0;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1120));
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1144) = a1 + 1136;
  *(_QWORD *)(a1 + 1136) = a1 + 1136;
  *(_QWORD *)(a1 + 1200) = a1 + 1224;
  *(_QWORD *)(a1 + 1208) = a1 + 1224;
  *(_QWORD *)(a1 + 1216) = a1 + 1448;
  *(_QWORD *)(a1 + 1448) = 0LL;
  *(_QWORD *)(a1 + 1456) = 0LL;
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  *(_QWORD *)(a1 + 1488) = 0LL;
  *(_QWORD *)(a1 + 1496) = 0LL;
  *(_BYTE *)(a1 + 1504) = 0;
  *(_BYTE *)(a1 + 1509) = 0;
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_QWORD *)(a1 + 1520) = 0LL;
  *(_DWORD *)(a1 + 1528) = 0;
  *(_QWORD *)(a1 + 1536) = 0LL;
  *(_QWORD *)(a1 + 1544) = 0LL;
  *(_DWORD *)(a1 + 1552) = 0;
  *(_QWORD *)(a1 + 1560) = 0LL;
  *(_QWORD *)(a1 + 1568) = 0LL;
  *(_DWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1584) = 0LL;
  `vector constructor iterator'(
    (void *)(a1 + 1592),
    8uLL,
    0xCuLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (void *)(a1 + 1688),
    8uLL,
    0x18uLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (void *)(a1 + 1880),
    8uLL,
    0x30uLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (void *)(a1 + 2264),
    8uLL,
    1uLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (void *)(a1 + 2272),
    8uLL,
    4uLL,
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  return a1;
}
