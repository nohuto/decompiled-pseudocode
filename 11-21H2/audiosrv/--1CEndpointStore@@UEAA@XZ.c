/*
 * XREFs of ??1CEndpointStore@@UEAA@XZ @ 0x180113274
 * Callers:
 *     ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x1801133E0 (--_ECEndpointStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800DF2E0 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

void __fastcall CEndpointStore::~CEndpointStore(CEndpointStore *this)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  void *v4; // rbx
  void *v5; // rbx
  unsigned __int64 v6; // rdx

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
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 13);
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
    std::_Deallocate<16,0>(*((void **)this + 2), 2 * v6 + 2);
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 7LL;
  *((_DWORD *)this + 3) = -1073741823;
}
