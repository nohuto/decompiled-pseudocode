/*
 * XREFs of _anonymous_namespace_::SetMonitorDockThresholds @ 0x1C011CD80
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C0079F24 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SetMonitorDockThresholds(
        unsigned int a1,
        int a2,
        unsigned __int8 (__fastcall *a3)(PDEVICE_OBJECT, _QWORD, void *, void *))
{
  __int64 v3; // r14
  unsigned __int8 (__fastcall *v4)(PDEVICE_OBJECT, _QWORD, void *, void *); // r12
  unsigned int v5; // ebx
  PDEVICE_OBJECT v7; // rcx
  void *v8; // r9
  int *v9; // rdi
  unsigned int v10; // ebp
  unsigned int *v11; // rsi
  int v12; // r15d
  void *v13; // rdx
  __int64 v14; // rax
  char v15; // dl

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( (a1 & 0xFFFFFF00) == 0 )
    return 0LL;
  v7 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v8 = &WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dD(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (unsigned int)&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids);
  v9 = (int *)&unk_1C02F4DF0;
  v10 = v5;
  v11 = (unsigned int *)&unk_1C02F4DF0;
  while ( 1 )
  {
    v12 = *v11;
    LOBYTE(v7) = v10;
    if ( !v4(v7, *v11, a3, v8) )
      break;
    v10 >>= 8;
    a3 = (unsigned __int8 (__fastcall *)(PDEVICE_OBJECT, _QWORD, void *, void *))&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids;
    if ( ++v11 == (unsigned int *)&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids )
    {
      do
      {
        v13 = &unk_1C032CF48;
        v14 = 4 * v3 + *v9++;
        *((_BYTE *)&unk_1C032CF48 + v14) = v5;
        v5 >>= 8;
      }
      while ( v9 != (int *)&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids );
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v13,
          (_DWORD)a3,
          12,
          4,
          1,
          12,
          (__int64)&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids);
      }
      return 1LL;
    }
  }
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      3u,
      1u,
      0xBu,
      (__int64)&WPP_eb5e55fa809c3f7dceefc61aadc2caa0_Traceguids,
      v3,
      v12);
  return 2LL;
}
