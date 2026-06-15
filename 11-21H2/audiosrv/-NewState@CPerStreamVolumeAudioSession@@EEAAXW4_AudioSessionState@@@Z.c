/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000FDF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18001F8F0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  signed __int64 v4; // r8
  signed __int32 i; // eax
  signed __int64 v6; // rcx
  signed __int32 j; // edx
  signed __int32 v8; // edx
  _RecurringTask *v9; // rsi
  bool v10; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rax

  v4 = *((_QWORD *)this + 7);
  while ( v4 >= 0 )
  {
    if ( (_DWORD)v4 != 0x7FFFFFFF )
    {
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v4 + 1, v4);
      v10 = v4 == v11;
      v4 = v11;
      if ( !v10 )
        continue;
    }
    goto LABEL_5;
  }
  for ( i = *(_DWORD *)(2 * v4 + 0x10); i != 0x7FFFFFFF; i = *(_DWORD *)(2 * v4 + 0x10) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v4 + 16), i + 1, i) )
      break;
  }
LABEL_5:
  CAudioSession::NewState(this, a2);
  if ( a2 == AudioSessionStateExpired )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
    v9 = (_RecurringTask *)*((_QWORD *)this + 123);
    *((_QWORD *)this + 123) = 0LL;
    if ( v9 )
    {
      _RecurringTask::~_RecurringTask(v9);
      operator delete(v9, 0x20uLL);
    }
    if ( this != (CPerStreamVolumeAudioSession *)-936LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
    if ( *((_BYTE *)this + 920) )
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, this);
  }
  v6 = *((_QWORD *)this + 7);
  while ( v6 >= 0 )
  {
    if ( (_DWORD)v6 == 0x7FFFFFFF )
      return;
    v8 = v6 - 1;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v6 - 1, v6);
    v10 = v6 == v12;
    v6 = v12;
    if ( v10 )
      goto LABEL_13;
  }
  for ( j = *(_DWORD *)(2 * v6 + 0x10); j != 0x7FFFFFFF; j = *(_DWORD *)(2 * v6 + 0x10) )
  {
    if ( j == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v6 + 16), j - 1, j) )
      break;
  }
  v8 = j - 1;
LABEL_13:
  if ( !v8 )
  {
    if ( this )
      (*(void (__fastcall **)(CPerStreamVolumeAudioSession *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
