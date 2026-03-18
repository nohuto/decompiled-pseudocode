/*
 * XREFs of ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C005B640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C005B560 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005D4CC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C0138BF0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ForegroundLaunch::OnDaemonTimerRateChanged(int a1)
{
  int v2; // edx
  __int64 v3; // r8
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // rdx
  int v9; // r9d
  char v10; // dl
  __int64 v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+48h] [rbp-70h]
  __int64 v13; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  int v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+C8h] [rbp+10h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v17, (struct _EX_PUSH_LOCK *)&unk_1C035F3C8);
  byte_1C0359164 = a1 != 2;
  if ( a1 == 2 )
  {
    v4 = (unsigned int *)&unk_1C035E238;
    v5 = 10LL;
    do
    {
      v6 = v4[2];
      if ( (_DWORD)v6 == 4 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 749LL);
        v6 = v4[2];
      }
      if ( *(_QWORD *)v4 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v7 = 0;
        }
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = v4[3];
          LODWORD(v12) = v6;
          LODWORD(v11) = *v4;
          WPP_RECORDER_AND_TRACE_SF_Ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v6,
            4u,
            2u,
            0x20u,
            (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
            v11,
            v12,
            v13);
        }
        if ( v4[3] == 1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v2) = 0;
          }
          if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v2,
              v3,
              (_DWORD)gFullLog,
              4,
              2,
              33,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              *v4);
          }
          v15 = LockProcessByClientId(*(void **)v4, (PEPROCESS *)&Object);
          if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(&Object, v8) )
          {
            PsSetProcessPriorityByClass(Object, 0LL, v3);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              v10 = 0;
            }
            if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v12) = v9;
              LODWORD(v11) = *v4;
              WPP_RECORDER_AND_TRACE_SF_DD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v10,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                2u,
                0x22u,
                (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
                v11,
                v12);
            }
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        *(_OWORD *)v4 = 0LL;
        v16 = 0LL;
        *((_QWORD *)v4 + 2) = 0LL;
      }
      v4 += 6;
      --v5;
    }
    while ( v5 );
  }
  NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v17);
}
