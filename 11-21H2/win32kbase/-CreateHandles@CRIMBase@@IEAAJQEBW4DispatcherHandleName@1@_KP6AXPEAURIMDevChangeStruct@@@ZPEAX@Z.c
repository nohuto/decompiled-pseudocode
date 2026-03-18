/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C005DB90
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C005DA50 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C005DD08 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C005DFB4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInputEx @ 0x1C005E010 (RIMRegisterForInputEx.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // r15
  int DispatcherHandles; // r14d
  __int64 DispatcherHandleByName; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebp
  int v22; // eax
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // edx

  v5 = a3;
  if ( a3 > 0x11 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v10 >= 0x11 )
        return 3221225485LL;
      if ( dword_1C024F450[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(dword_1C024F450, a2, a3);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v10 + 168),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C024F450[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = 10;
          LOBYTE(v28) = v9;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v28,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            3,
            10,
            (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
            v10);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < v5 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  v16 = DispatcherHandleByName;
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v17 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
  v21 = v17;
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  v22 = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v23 = RIMRegisterForInputEx(
          *((_DWORD *)this + 36),
          v16,
          v21,
          v22,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v23 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v23 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v23 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v23;
}
