/*
 * XREFs of ??0CMonitorTransform@@QEAA@XZ @ 0x18001C8D4
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001C6B8 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800FF650 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019C760 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801C9C60 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801E0CD8 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CMonitorTransform *__fastcall CMonitorTransform::CMonitorTransform(CMonitorTransform *this)
{
  char v1; // al
  char v2; // al
  char v3; // al
  CMonitorTransform *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = 1065353216LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *((_QWORD *)this + 6) = 1065353216LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 1065353216LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 1065353216;
  v1 = *((_BYTE *)this + 113);
  *((_BYTE *)this + 112) = 85;
  *((_BYTE *)this + 113) = v1 & 0xC0 | 0x17;
  *(_QWORD *)((char *)this + 116) = 1065353216LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 1065353216LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 156) = 1065353216LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 1065353216;
  v2 = *((_BYTE *)this + 181);
  *((_BYTE *)this + 180) = 85;
  *((_BYTE *)this + 181) = v2 & 0xC0 | 0x17;
  *((_QWORD *)this + 23) = 1065353216LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *(_QWORD *)((char *)this + 204) = 1065353216LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 55) = 0;
  *((_QWORD *)this + 28) = 1065353216LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 1065353216;
  v3 = *((_BYTE *)this + 249) & 0xD7;
  *((_BYTE *)this + 248) = 85;
  *((_BYTE *)this + 249) = v3 | 0x17;
  result = this;
  *((_WORD *)this + 126) = 0;
  *((_BYTE *)this + 254) = 0;
  return result;
}
