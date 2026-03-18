/*
 * XREFs of ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00AFA28
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B310 (-s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ @ 0x1C00AFB0C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRecalcProp::PruneRecalcStateList(CRecalcProp *this, struct CRecalcState *a2)
{
  CRecalcState **v2; // rbx
  struct CRecalcState *v3; // rsi
  unsigned int v4; // edi
  int v5; // r8d
  CRecalcState *v6; // rcx
  void (__fastcall **v7)(CRecalcState *, __int64); // rax
  CRecalcState *v8; // r8
  char v9; // r10
  __int64 v10; // rax
  int v11; // r8d

  v2 = (CRecalcState **)((char *)this + 32);
  v3 = a2;
  v4 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    do
    {
      if ( v4 >= 3 )
        break;
      if ( !CRecalcState::ShouldStoreAfterProcessing(*v2) || *v2 == v3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(a2) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v5) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v5) = 0;
        }
        if ( (_BYTE)a2 || (_BYTE)v5 )
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)a2,
            v5,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            23,
            76,
            (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
            *(_DWORD *)(*((_QWORD *)*v2 + 4) + 4LL));
        v6 = *v2;
        *v2 = (CRecalcState *)*((_QWORD *)*v2 + 1);
        v7 = *(void (__fastcall ***)(CRecalcState *, __int64))v6;
        *((_QWORD *)v6 + 1) = 0LL;
        (*v7)(v6, 1LL);
      }
      else
      {
        ++v4;
        v2 = (CRecalcState **)((char *)*v2 + 8);
      }
    }
    while ( *v2 );
    v8 = *v2;
    if ( *v2 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v9 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(a2) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(a2) = 0;
      }
      if ( !v9 && !(_BYTE)a2
        || (v10 = *((_QWORD *)v8 + 4),
            v11 = 77,
            LOBYTE(v11) = (_BYTE)a2,
            LOBYTE(a2) = v9,
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)a2,
              v11,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              23,
              77,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
              *(_DWORD *)(v10 + 4)),
            (v8 = *v2) != 0LL) )
      {
        (**(void (__fastcall ***)(CRecalcState *, __int64))v8)(v8, 1LL);
      }
      *v2 = 0LL;
    }
  }
}
