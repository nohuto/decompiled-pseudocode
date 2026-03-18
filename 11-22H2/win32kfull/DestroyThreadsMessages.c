/*
 * XREFs of DestroyThreadsMessages @ 0x1C009CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C00126B0 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0012820 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C009CDF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     DelQEntry @ 0x1C01184CC (DelQEntry.c)
 */

void __fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  struct tagMLIST *v2; // rsi
  struct tagQMSG *v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rbx
  struct tagQMSG *v7; // rbp
  char v8; // r8
  __int64 v9; // rdi

  v2 = (struct tagMLIST *)(a1 + 3);
  v3 = (struct tagQMSG *)a1[3];
  v4 = a2;
  if ( v3 )
  {
    do
    {
      v7 = *(struct tagQMSG **)v3;
      if ( *((_QWORD *)v3 + 13) == v4 )
      {
        if ( (struct tagQMSG *)a1[11] == v3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v8 = 0;
          }
          if ( (_BYTE)a2 || v8 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              v8,
              (_DWORD)gFullLog,
              5,
              18,
              19,
              (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
              (char)a1,
              a1[11]);
          a1[11] = 0LL;
        }
        CleanEventMessage(v3);
        DelQEntry(v2, v3, 1LL);
      }
      v3 = v7;
    }
    while ( v7 );
  }
  v6 = a1[6];
  if ( v6 )
  {
    do
    {
      v9 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 104) == v4 )
      {
        RemoveQMsgFromDeferList(v2, (struct tagQMSG *)v6);
        CleanEventMessage((struct tagQMSG *)v6);
        FreeQEntry((struct tagQMSG *)v6);
      }
      v6 = v9;
    }
    while ( v9 );
  }
}
