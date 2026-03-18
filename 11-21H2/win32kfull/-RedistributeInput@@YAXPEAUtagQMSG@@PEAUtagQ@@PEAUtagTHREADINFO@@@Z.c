/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C0001430 (IsHiddenByInputService.c)
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0001458 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0002FC8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C005806C (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00AC168 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsProcessedByInputService @ 0x1C00ADE20 (IsProcessedByInputService.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r11
  struct tagTHREADINFO *v4; // r9
  struct tagQMSG *v6; // rbx
  __int64 v7; // r12
  struct tagQMSG *v8; // r15
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // r10
  struct tagTHREADINFO *v13; // r8
  struct tagTHREADINFO *v14; // rdx
  struct tagTHREADINFO *v15; // rdi
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  struct tagQMSG *v23; // rcx
  int v24; // r9d
  struct tagQMSG *v25; // rcx
  struct tagQMSG *v26; // rdi
  __int64 v27; // r9
  char v28; // dl
  struct tagQMSG *v29; // rax
  struct tagQMSG *v30; // rdi
  struct tagQ *v31; // rdx
  __int64 v32; // r8
  struct tagQ *v33; // rdx
  char v34; // al
  __int64 v35; // r9
  char v36; // r8
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  char v40; // al
  char v41; // dl
  int v43; // edx
  int v44; // r9d
  int v45; // r10d
  __int64 v46; // r9
  __int64 v47; // rdx
  ULONG v48; // [rsp+20h] [rbp-E0h]
  int v49; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v54; // [rsp+84h] [rbp-7Ch] BYREF
  int v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  struct tagTHREADINFO *v57; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  unsigned int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  unsigned int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  unsigned int *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]

  v3 = 0LL;
  v4 = a3;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (struct tagTHREADINFO *)gptiCurrent;
  v10 = 0LL;
  v57 = (struct tagTHREADINFO *)gptiCurrent;
  if ( a1 )
  {
    v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
    do
    {
      v13 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
      v14 = v13;
      if ( v13 )
      {
        if ( (*((_DWORD *)v13 + 314) & 0x20000000) != 0 && IsHiddenByInputService((__int64)v6) )
        {
          *(_DWORD *)(v37 + 1256) = v38 & 0xDFFFFFFF;
          v14 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
        v4 = a3;
      }
      v15 = v14;
      if ( (*((_DWORD *)v9 + 314) & 0x40000) != 0 )
      {
        v16 = *((_DWORD *)v6 + 6);
        if ( v14 == v9 )
        {
          if ( v16 >= 0x100 && v16 <= 0x102 && v4 )
          {
            *((_QWORD *)v6 + 13) = v4;
            v15 = v4;
          }
        }
        else
        {
          if ( v16 == 513 || v16 == 516 )
          {
            v39 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), 1);
            v3 = 0LL;
            v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
            if ( v39 )
            {
              if ( *(struct tagTHREADINFO **)(v39 + 16) == v9 )
                *((_QWORD *)v6 + 13) = v9;
            }
          }
          v15 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 13);
        }
      }
      if ( v6 == *((struct tagQMSG **)a2 + 10) )
      {
        v31 = (struct tagQ *)*((_QWORD *)v15 + 54);
        if ( a2 != v31 && *((_QWORD *)v31 + 8) == v3 )
        {
          v32 = *((_QWORD *)a2 + 8);
          if ( v32 )
          {
            if ( *(struct tagQ **)(v32 + 432) == v31 )
            {
              if ( WPP_GLOBAL_Control == v12
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v40 = v3;
              }
              if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v40,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4u,
                  0x12u,
                  0x21u,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
                v3 = 0LL;
              }
              *(_QWORD *)(*((_QWORD *)v15 + 54) + 64LL) = *((_QWORD *)a2 + 8);
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v41 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v41 = v3;
              }
              if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v41,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4u,
                  0x12u,
                  0x22u,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
                v3 = 0LL;
              }
              *((_QWORD *)a2 + 8) = v3;
            }
          }
        }
      }
      v17 = IsProcessedByInputService(v6);
      v20 = v3;
      v21 = v3;
      if ( *((_DWORD *)v6 + 24) != 4 )
        v20 = (__int64)v15;
      if ( !v17 )
        v21 = v20;
      if ( v21 )
      {
        if ( !v8 || v7 != v21 )
        {
          v22 = *(_QWORD *)(v21 + 432);
          v8 = *(struct tagQMSG **)(v22 + 32);
          if ( v8 && *((_DWORD *)v6 + 12) - *((_DWORD *)v8 + 12) >= 0 )
          {
            v10 = v22 + 24;
          }
          else
          {
            v8 = (struct tagQMSG *)(v22 + 24);
            v10 = v22 + 24;
          }
        }
        v23 = *(struct tagQMSG **)v8;
        if ( *(_QWORD *)v8 )
        {
          do
          {
            if ( *((_DWORD *)v6 + 12) - *((_DWORD *)v23 + 12) < 0 )
              break;
            v8 = v23;
            v23 = *(struct tagQMSG **)v23;
          }
          while ( v23 );
        }
        *((_DWORD *)v6 + 25) &= 0xFFFE1FFF;
        v24 = *((_DWORD *)v6 + 6);
        if ( ((unsigned int)(v24 - 256) <= 9 || InputTraceLogging::IsMouseInputMessage(v24))
          && (unsigned int)dword_1C032BE20 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
          {
            v55 = v44;
            v51 = (unsigned __int16)v45 >> 15;
            v60 = (unsigned int)(v43 - 8);
            v52 = (unsigned int)(v45 << 17) >> 31;
            v53 = (unsigned int)(v45 << 18) >> 31;
            v56 = *((_QWORD *)v6 + 17);
            v69 = &v51;
            v67 = &v52;
            v65 = &v53;
            v63 = &v54;
            v61 = &v55;
            v59 = &v56;
            v54 = (unsigned int)(v45 << 15) >> 31;
            v70 = 4LL;
            v68 = 4LL;
            v66 = 4LL;
            v64 = 4LL;
            v62 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032BE20, (int)&dword_1C02EE49B, 0, 0, v60, &v58);
            v3 = 0LL;
          }
        }
        v25 = v6;
        v26 = v6;
        v6 = *(struct tagQMSG **)v6;
        *(_QWORD *)v25 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v25 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v26;
        }
        else
        {
          *((_QWORD *)v25 + 1) = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v25;
        }
        *(_QWORD *)v8 = v26;
        v8 = v26;
        v27 = (unsigned int)(*(_DWORD *)(v10 + 16) + 1);
        *(_DWORD *)(v10 + 16) = v27;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
          || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v28 = v3;
        }
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v28,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v27,
            v48,
            v49,
            0x24u,
            (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
          v3 = 0LL;
        }
        if ( *((_DWORD *)v26 + 24) != (_DWORD)v3 && (*(_DWORD *)(*(_QWORD *)(v21 + 448) + 8LL) & 0x2000) == 0 )
        {
          SetWakeBit(v21, 0x2040u);
          v3 = 0LL;
        }
        if ( v26 == *((struct tagQMSG **)a2 + 10) )
        {
          v33 = *(struct tagQ **)(v21 + 432);
          if ( a2 != v33 )
          {
            if ( *((_QWORD *)v33 + 10) == v3 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                v34 = v3;
              }
              v35 = *(_QWORD *)(v21 + 432);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                || (v36 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v3) )
              {
                v36 = v3;
              }
              if ( v34 || v36 )
              {
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v34,
                  v36,
                  (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                  5u,
                  0x12u,
                  0x25u,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
                v35 = *(_QWORD *)(v21 + 432);
                v3 = 0LL;
              }
              *(_QWORD *)(v35 + 80) = *((_QWORD *)a2 + 10);
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
              || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v33) = v3;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v3) )
            {
              LOBYTE(v19) = v3;
            }
            if ( (_BYTE)v33 || (_BYTE)v19 )
            {
              WPP_RECORDER_AND_TRACE_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v33,
                v19,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                5,
                18,
                38,
                (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                (char)a2);
              v3 = 0LL;
            }
            *((_QWORD *)a2 + 10) = v3;
          }
        }
        if ( !v6 )
          break;
        *((_QWORD *)v6 + 1) = v3;
        v7 = v21;
      }
      else
      {
        v29 = *(struct tagQMSG **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v29 + 1) = v3;
          v29 = *(struct tagQMSG **)v6;
        }
        v30 = v6;
        v6 = v29;
        if ( v30 == *((struct tagQMSG **)a2 + 10) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v18) = v3;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v3) )
          {
            LOBYTE(v19) = v3;
          }
          if ( (_BYTE)v18 || (_BYTE)v19 )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              18,
              35,
              (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
              (char)a2);
            v3 = 0LL;
          }
          *((_QWORD *)a2 + 10) = v3;
        }
        CleanEventMessage(v30);
        FreeQEntry((unsigned int *)v30);
        v3 = 0LL;
      }
      v9 = v57;
      v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
      v4 = a3;
    }
    while ( v6 );
  }
  v11 = *((_QWORD *)a2 + 6);
  if ( v11 )
  {
    do
    {
      v46 = *(_QWORD *)(v11 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v11 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v11);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v47 + 104) + 432LL) + 24LL), (struct tagQMSG *)v47);
      }
      v11 = v46;
    }
    while ( v46 );
  }
}
