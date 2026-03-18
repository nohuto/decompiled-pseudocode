/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C381C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(struct _KTHREAD **this, _QWORD *a2, struct CInputPointerNode *a3)
{
  struct CInputPointerNode *v3; // rbp
  unsigned int v4; // r14d
  PDEVICE_OBJECT v5; // rcx
  char v6; // di
  BOOL v7; // ebx
  const int *v8; // r8
  int v10; // esi
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-30h]

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      57,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v10 = 2;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v11 = *((_DWORD *)v3 + 14) == 1;
      v10 = 3;
LABEL_49:
      v7 = v11;
      goto LABEL_54;
    }
    if ( (v4 & 0x70006) != 0x20002 )
    {
      if ( (v4 & 0x70006) == 0x20006 )
      {
        v10 = 2;
        v11 = *((_DWORD *)v3 + 14) == 2;
      }
      else
      {
        if ( (v4 & 0x70006) == 0x40000 )
        {
          v10 = 3;
        }
        else
        {
          if ( (v4 & 0x70006) != 0x40002 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
              || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(a2) = 0;
            }
            if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_L(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)a2,
                (_DWORD)a3,
                (unsigned int)&WPP_GLOBAL_Control,
                2,
                7,
                58,
                (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
                v4);
            }
            goto LABEL_26;
          }
          v10 = 1;
        }
        v11 = *((_DWORD *)v3 + 14) == 2;
      }
      goto LABEL_49;
    }
    v10 = 1;
  }
  v7 = *((_DWORD *)v3 + 14) <= 1u;
LABEL_54:
  if ( !v7 )
    goto LABEL_27;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
    {
LABEL_26:
      v7 = 0;
      goto LABEL_27;
    }
    v7 = 1;
  }
  if ( (*((_DWORD *)v3 + 75) & 8) != 0 )
  {
    v7 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
LABEL_27:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_LL(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          v14,
          59,
          v15,
          v4,
          *((_DWORD *)v3 + 14));
      }
      goto LABEL_34;
    }
  }
  *((_DWORD *)v3 + 14) = v10;
  if ( v10 == 3 )
  {
    v12 = (_QWORD *)((char *)v3 + 16);
    v13 = *((_QWORD *)v3 + 2);
    if ( (struct CInputPointerNode *)v13 != (struct CInputPointerNode *)((char *)v3 + 16) )
    {
      if ( *(_QWORD **)(v13 + 8) != v12 || (a2 = (_QWORD *)*((_QWORD *)v3 + 3), (_QWORD *)*a2 != v12) )
        __fastfail(3u);
      *a2 = v13;
      *(_QWORD *)(v13 + 8) = a2;
      *((_QWORD *)v3 + 3) = (char *)v3 + 16;
      *v12 = v12;
    }
  }
  *((_DWORD *)v3 + 75) = *((_DWORD *)v3 + 75) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_34:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
  {
    v8 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v8,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      60,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return v7;
}
