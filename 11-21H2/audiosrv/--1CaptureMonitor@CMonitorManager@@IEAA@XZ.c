/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1801196B8
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18011E620 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180119D8C (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  struct _TP_WAIT *v2; // rcx
  char *v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  v3 = (char *)this + 200;
  if ( v2 )
  {
    if ( *(_QWORD *)v3 )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 280LL) = 0LL;
      v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
    }
    CloseThreadpoolWait(v2);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 25);
  v4 = *((_QWORD *)this + 23);
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 20), 2 * v4 + 2);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_WORD *)this + 80) = 0;
  v5 = *((_QWORD *)this + 19);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 16), 2 * v5 + 2);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *((_WORD *)this + 64) = 0;
  v6 = *((_QWORD *)this + 14);
  if ( v6 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 11), 2 * v6 + 2);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_WORD *)this + 44) = 0;
  v7 = *((_QWORD *)this + 10);
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 7), 2 * v7 + 2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  if ( *((_QWORD *)this + 4) )
    ATL::CHandle::Close((CMonitorManager::CaptureMonitor *)((char *)this + 32));
}
