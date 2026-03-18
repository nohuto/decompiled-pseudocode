/*
 * XREFs of ?GetKernelHandle@CD3DDevice@@QEBAIXZ @ 0x180298FEC
 * Callers:
 *     ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x180298D68 (-CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z.c)
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802990C0 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetKernelHandle(CD3DDevice *this)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ecx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 67);
  v5 = 4;
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, int *, unsigned int *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &`CD3DDevice::GetKernelHandle'::`2'::GUID_KMT_HANDLE,
         &v5,
         &v6);
  v3 = 0;
  if ( v2 >= 0 )
    return v6;
  return v3;
}
