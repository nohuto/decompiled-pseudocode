/*
 * XREFs of _DelegateCapturePointers @ 0x1C01EAC24
 * Callers:
 *     EditionDelegateCapturePointers @ 0x1C01EA290 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F0678 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1C01EA91C (WPP_RECORDER_AND_TRACE_SF_LHL.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01EB898 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  char v6; // dl
  char v7; // dl
  struct tagWND *v8; // r9
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ebp
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+38h] [rbp-40h]

  v2 = 0;
  if ( a1 )
  {
    v5 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v5 + 116) )
      {
        v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_LHL(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            19LL,
            v15,
            v16,
            0x13u,
            v17);
        v8 = *(struct tagWND **)(v5 + 84);
        v9 = *((_QWORD *)v8 + 2);
        v11 = DeferNotifyDelegateCapture(
                (struct tagTHREADINPUTPOINTERLIST *)(v9 + 1112),
                *(_WORD *)(v5 - 4),
                *(_DWORD *)v5,
                v8);
        if ( v11 )
        {
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v12,
              (unsigned int)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids,
              4,
              19,
              20,
              (__int64)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids);
          }
          SetWakeBit(v9, 0x1000u);
        }
        else
        {
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v12,
              (unsigned int)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids,
              4,
              19,
              21,
              (__int64)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids);
          }
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
            gpTouchProcessor,
            *(_DWORD *)v5,
            *(_WORD *)(v5 - 4),
            0x200000u);
        }
        DelegateDiscardMessages(
          *(struct tagQ **)(v9 + 432),
          v11,
          (struct tagDELEGATEPOINTERMAP *)(a2 + ((unsigned __int64)v2 << 7)),
          v13);
      }
      else
      {
        v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_LHL(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v6,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            18LL,
            v15,
            v16,
            0x12u,
            v17);
      }
      ++v2;
      v5 += 128LL;
    }
    while ( v2 < a1 );
  }
  return 1LL;
}
