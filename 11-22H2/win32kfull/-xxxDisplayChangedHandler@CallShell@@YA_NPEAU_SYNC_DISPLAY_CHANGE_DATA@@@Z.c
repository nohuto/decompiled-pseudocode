/*
 * XREFs of ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C004A5E4
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C004A114 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

bool __fastcall CallShell::xxxDisplayChangedHandler(
        CallShell *this,
        struct _SYNC_DISPLAY_CHANGE_DATA *a2,
        __int64 a3,
        int a4)
{
  bool v4; // bp
  int v5; // edx
  __int64 v6; // r8
  bool v7; // bl
  const char *v8; // rdx
  ULONG_PTR v10; // r14
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  const char *v19; // rax
  int v20; // edx
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  __int64 v24; // [rsp+A8h] [rbp+10h] BYREF

  v4 = 0;
  v5 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v6 && *(_QWORD *)(v6 + 288) && (v10 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 192LL)) != 0 )
  {
    v11 = 1;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
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
        7,
        38,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        v10);
    }
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    ThreadLock(v10, &v22);
    if ( xxxSendTransformableMessageTimeout(v10, 2, 200, (__int64)&v24, 1, 1) )
    {
      ThreadUnlock1(v13, v12, v14);
      v18 = v24;
    }
    else
    {
      ThreadUnlock1(v13, v12, v14);
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          v17,
          2,
          7,
          39,
          (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids);
      }
      v18 = 0LL;
      v24 = 0LL;
    }
    v4 = v18 == 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = "Success";
      if ( !v4 )
        v19 = "Failure";
      v20 = 40;
      LOBYTE(v20) = v11;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v16,
        (_DWORD)gFullLog,
        4,
        7,
        40,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        (__int64)v19);
    }
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( v6 )
      {
        v8 = "!HasIAMThread";
        if ( *(_QWORD *)(v6 + 288) )
          v8 = "!FPostTray";
      }
      else
      {
        v8 = "null";
      }
      v21 = (__int64)v8;
      LOBYTE(v8) = v7;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qs(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v6,
        (_DWORD)gFullLog,
        4,
        7,
        42,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        *(_QWORD *)(gptiCurrent + 456LL),
        v21);
    }
  }
  return v4;
}
