/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x18011FB64
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x180123410 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C8F7C (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180119D8C (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18011E5E0 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  CEndpointStoreCache *v2; // rcx
  struct _TP_WORK *v3; // rax
  CMonitor::CMonitorNotification *v4; // rcx
  CMonitor::CMonitorNotification *v5; // rcx

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x19u,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 63) )
  {
    v3 = (struct _TP_WORK *)*((_QWORD *)this + 63);
    if ( v2 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)v2 + 2), 0x1Au, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
      v3 = (struct _TP_WORK *)*((_QWORD *)this + 63);
    }
    CloseThreadpoolWork(v3);
    *((_QWORD *)this + 63) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)this + 45);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)this + 39);
  if ( *((_QWORD *)this + 38) )
    ATL::CHandle::Close((void **)this + 38);
  if ( *((_QWORD *)this + 36) )
    ATL::CHandle::Close((void **)this + 36);
  if ( *((_QWORD *)this + 31) )
    ATL::CHandle::Close((void **)this + 31);
  v4 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 30);
  if ( v4 )
    CMonitor::CMonitorNotification::Release(v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 28);
  CoTaskMemFree(*((LPVOID *)this + 27));
  *((_QWORD *)this + 27) = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 24);
  CoTaskMemFree(*((LPVOID *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  v5 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 22);
  if ( v5 )
    CMonitor::CMonitorNotification::Release(v5);
  if ( *((_QWORD *)this + 16) )
    ATL::CHandle::Close((void **)this + 16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 15);
  CoTaskMemFree(*((LPVOID *)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 11);
  CoTaskMemFree(*((LPVOID *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
