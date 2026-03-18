/*
 * XREFs of ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00F49F8
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C007FDB0 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 */

bool __fastcall CallShell::xxxDisplayChangedHandler(
        CallShell *this,
        struct _SYNC_DISPLAY_CHANGE_DATA *a2,
        __int64 a3,
        int a4)
{
  bool v4; // r14
  int v5; // edx
  __int64 v6; // r8
  bool v7; // bl
  const char *v8; // rdx
  unsigned __int64 *v10; // r15
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r8d
  __int64 v16; // rax
  const char *v17; // rax
  int v18; // edx
  int v19; // edx
  int v20; // r9d
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]
  __int64 v24; // [rsp+A8h] [rbp+10h] BYREF

  v4 = 0;
  v5 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v6 && *(_QWORD *)(v6 + 280) && (v10 = *(unsigned __int64 **)(*(_QWORD *)(v6 + 8) + 192LL)) != 0LL )
  {
    v11 = 1;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        a4,
        4,
        23,
        34,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
        (char)v10);
    }
    v24 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    ThreadLock((__int64)v10, (__int64 *)&v21);
    if ( xxxSendTransformableMessageTimeout(v10, 0x344u, 0LL, (__int64)this, 2u, 0xC8u, (unsigned __int64 *)&v24, 1, 1) )
    {
      ThreadUnlock1(v13, v12, v14);
      v16 = v24;
    }
    else
    {
      ThreadUnlock1(v13, v12, v14);
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v15,
          v20,
          2,
          23,
          35,
          (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
      }
      v16 = 0LL;
      v24 = 0LL;
    }
    v4 = v16 == 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = "Success";
      if ( !v4 )
        v17 = "Failure";
      v18 = 36;
      LOBYTE(v18) = v11;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        36,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
        (__int64)v17);
    }
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( v6 )
      {
        v8 = "!HasIAMThread";
        if ( *(_QWORD *)(v6 + 280) )
          v8 = "!FPostTray";
      }
      else
      {
        v8 = "null";
      }
      LOBYTE(v8) = v7;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qs(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED);
    }
  }
  return v4;
}
