/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1C01A0020
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, int a2, char *a3, unsigned int a4)
{
  size_t v4; // r15
  struct RIMDEV *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  v4 = a4;
  v7 = (struct RIMDEV *)(a1 + 88);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v8 = *(_QWORD *)(a1 + 424);
  v9 = *(_QWORD *)(a1 + 472);
  if ( !*(_DWORD *)(v9 + 16) )
    *(_DWORD *)(v9 + 16) = 1;
  RIMLockExclusive(v8 + 104);
  if ( !*(_BYTE *)(v8 + 81) )
  {
    if ( a2 && (_DWORD)v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11, v10, v12) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v4] > MmUserProbeAddress || &a3[v4] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(*(void **)(*(_QWORD *)(a1 + 544) + 24LL), a3, v4);
    RIMLockExclusive(v8 + 792);
    *(_DWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 352) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 44LL);
    rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v8, v7, 1);
    *(_QWORD *)(v8 + 800) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 792, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v8 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
