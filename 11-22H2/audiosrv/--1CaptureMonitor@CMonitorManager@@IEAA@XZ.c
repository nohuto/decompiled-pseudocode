/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18012BD88
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18012E910 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rdx
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  void *v13; // [rsp+48h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 200);
  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  if ( *((_QWORD *)this + 2) )
  {
    if ( *v1 )
      *(_QWORD *)(*v1 + 168) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v1);
  v3 = *((_QWORD *)this + 23);
  if ( v3 >= 8 )
  {
    v4 = (void *)*((_QWORD *)this + 20);
    v12 = 2 * v3 + 2;
    v13 = v4;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v4 = v13;
    }
    operator delete(v4);
  }
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_WORD *)this + 80) = 0;
  v5 = *((_QWORD *)this + 19);
  if ( v5 >= 8 )
  {
    v6 = (void *)*((_QWORD *)this + 16);
    v12 = 2 * v5 + 2;
    v13 = v6;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v6 = v13;
    }
    operator delete(v6);
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *((_WORD *)this + 64) = 0;
  v7 = *((_QWORD *)this + 14);
  if ( v7 >= 8 )
  {
    v8 = (void *)*((_QWORD *)this + 11);
    v12 = 2 * v7 + 2;
    v13 = v8;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v8 = v13;
    }
    operator delete(v8);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_WORD *)this + 44) = 0;
  v9 = *((_QWORD *)this + 10);
  if ( v9 >= 8 )
  {
    v10 = (void *)*((_QWORD *)this + 7);
    v12 = 2 * v9 + 2;
    v13 = v10;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v10 = v13;
    }
    operator delete(v10);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 5);
  v11 = (void *)*((_QWORD *)this + 4);
  if ( v11 )
  {
    CloseHandle(v11);
    *((_QWORD *)this + 4) = 0LL;
  }
}
