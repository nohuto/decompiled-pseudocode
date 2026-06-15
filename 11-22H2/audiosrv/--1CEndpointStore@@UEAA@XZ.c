/*
 * XREFs of ??1CEndpointStore@@UEAA@XZ @ 0x18010F090
 * Callers:
 *     ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x18010F210 (--_ECEndpointStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E7928 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

void __fastcall CEndpointStore::~CEndpointStore(CEndpointStore *this)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  void *v4; // rbx
  void *v5; // rbx
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v1 )
  {
    do
    {
      v3 = (_QWORD *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 13);
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CAudioSessionManager::~CAudioSessionManager(*((CAudioSessionManager **)this + 12));
    operator delete(v4);
  }
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 11));
    operator delete(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 5);
  if ( v6 >= 8 )
  {
    v7 = (void *)*((_QWORD *)this + 2);
    v8 = 2 * v6 + 2;
    v9 = v7;
    if ( v8 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v7 = v9;
    }
    operator delete(v7);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 3) = -1073741823;
}
