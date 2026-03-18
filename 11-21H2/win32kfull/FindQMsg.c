/*
 * XREFs of FindQMsg @ 0x1C0057C00
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 * Callees:
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0004DA4 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     FreeDdeXact @ 0x1C02177D0 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        __int64 **a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // rbx
  __int64 *result; // rax
  __int64 **v10; // rsi
  struct tagTHREADINFO *v11; // r14
  _QWORD *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // r14
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rax
  int v23; // edx
  int v24; // r8d
  _DWORD *v25; // rax
  __int64 *v26; // [rsp+60h] [rbp-48h]

  v6 = *a2;
  result = 0LL;
  v26 = 0LL;
  v10 = a2;
  v11 = a1;
  if ( *a2 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v13 = v6[2];
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v14 = (unsigned __int16)v13;
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v13 * *((_DWORD *)&gSharedInfo + 4);
        v17 = (_QWORD *)HMPkheFromPhe(v15);
        LOWORD(v13) = WORD1(v13) & 0x7FFF;
        if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v15 + 26)
           || (_WORD)v13 == 0x7FFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(v16))
          && (*(_BYTE *)(v15 + 25) & 1) == 0
          && *(_BYTE *)(v15 + 24) == 1 )
        {
          v12 = (_QWORD *)*v17;
          if ( *v17 )
            goto LABEL_9;
        }
        v10 = a2;
        v11 = a1;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v11, v10);
        v21 = *((_QWORD *)v11 + 54);
        if ( *(__int64 **)(v21 + 72) == v6 && *(struct tagTHREADINFO **)(v21 + 64) == v11 )
        {
          EtwTraceInputQueueUnLocked();
          LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              18,
              21,
              (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
              *((_QWORD *)v11 + 54),
              gptiCurrent,
              *(_QWORD *)(*((_QWORD *)v11 + 54) + 64LL));
          }
          *(_QWORD *)(*((_QWORD *)v11 + 54) + 64LL) = 0LL;
        }
        goto LABEL_46;
      }
LABEL_9:
      if ( a6 )
      {
        v20 = a3 ? *a3 : 0LL;
        if ( v20 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(v14) = 11;
          v25 = (_DWORD *)HMValidateHandleNoRip(v6[5], v14);
          if ( v25 && (v25[16] & 0x200) != 0 )
          {
            FreeDdeXact(v25);
            v10 = a2;
            v11 = a1;
LABEL_46:
            DelQEntry(v10, v6, 1LL);
            v6 = *v10;
            goto LABEL_18;
          }
        }
      }
      if ( a3 && a3 != v12 && (a3 != (_QWORD *)1 || v12) )
      {
        if ( v12 )
        {
          while ( (*(_BYTE *)(v12[5] + 31LL) & 0xC0) == 0x40 )
          {
            v12 = (_QWORD *)v12[13];
            if ( a3 == v12 )
            {
              v19 = 1;
              goto LABEL_28;
            }
            if ( !v12 )
              break;
          }
        }
        v19 = 0;
LABEL_28:
        if ( !v19 )
          goto LABEL_17;
      }
      v18 = *((_DWORD *)v6 + 6);
      if ( v18 + 2147482655 <= 7 )
        v18 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_35;
LABEL_16:
        if ( v18 <= a5 )
          goto LABEL_35;
        goto LABEL_17;
      }
      if ( a4 <= a5 )
      {
        if ( v18 < a4 )
          goto LABEL_17;
        goto LABEL_16;
      }
      if ( v18 < a5 || v18 > a4 )
      {
LABEL_35:
        if ( !a6 )
          return v6;
        v22 = v26;
        if ( !v26 )
          v22 = v6;
        v26 = v22;
      }
LABEL_17:
      v6 = (__int64 *)*v6;
      v10 = a2;
      v11 = a1;
LABEL_18:
      if ( !v6 )
        return v26;
    }
  }
  return result;
}
