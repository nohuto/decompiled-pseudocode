/*
 * XREFs of ?AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800E91D4
 * Callers:
 *     ?OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800FF2B8 (-OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV-$DynArrayIANoCtor@PEAUIUnknown@@$0.c)
 * Callees:
 *     ?AddTokenInformation@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800E95C0 (-AddTokenInformation@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEAV-$DynArrayIANoCt.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::AddTokenInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r11d
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 76);
  v8[0] = *(_DWORD *)(a1 + 72);
  v8[1] = v4;
  v8[2] = v8[0] + *(_DWORD *)(a1 + 80) + (v3 & 1) + ((v3 >> 1) & 1);
  v5 = *(_DWORD *)(a1 + 84) + ((v3 >> 2) & 1) + ((v3 >> 3) & 1);
  v6 = *(_QWORD *)(a1 + 64);
  v8[3] = v4 + v5;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, __int64))DirectComposition::CAtlasSurfacePool::AddTokenInformation)(
           v6,
           v8,
           a2,
           a3);
}
