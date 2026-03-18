/*
 * XREFs of _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00B6D14 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     IsForegroundLocked @ 0x1C005FED4 (IsForegroundLocked.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall anonymous_namespace_::CheckCanonicalForegroundAccess(char a1)
{
  struct tagTHREADINFO *v2; // rax
  const struct tagPROCESSINFO **v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  int v9; // r8d
  char v11; // di
  char v12; // si
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  PDEVICE_OBJECT v15; // rcx
  bool v16; // bl
  __int16 v17; // ax
  unsigned int ThreadId; // [rsp+40h] [rbp-18h]
  int v19; // [rsp+48h] [rbp-10h]

  v2 = PtiCurrentShared();
  v3 = (const struct tagPROCESSINFO **)((char *)v2 + 424);
  if ( !(unsigned int)IsForegroundLocked(v5, v4, v6, v2)
    || (v8 = gppiInputProvider, v9 = gppiInputProvider, *v3 == (const struct tagPROCESSINFO *)gppiInputProvider) )
  {
    if ( (*(_DWORD *)(v7 + 488) & 0x2C) != 0 )
    {
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = *(_DWORD *)(v7 + 488) & 0x2C;
        ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (__int64)gFullLog,
          4u,
          2u,
          0x17u,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          ThreadId,
          v19);
      }
      return 1;
    }
    if ( CanForceForeground(*v3) )
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gFullLog,
          4,
          2,
          24,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          *((_DWORD *)*v3 + 14));
      }
      return 1;
    }
    if ( gptiForeground
      && *(_DWORD *)(gptiForeground + 632LL) <= 0x400u
      && (*(_DWORD *)(gptiForeground + 648LL) & 0x40) != 0 )
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          v7,
          4,
          2,
          105,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      }
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v14 = 25;
    }
    else
    {
      if ( (a1 & 4) == 0 )
      {
        v15 = WPP_GLOBAL_Control;
        v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v17 = 27;
        goto LABEL_34;
      }
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v14 = 26;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v8,
      v9,
      v7,
      4,
      2,
      v14,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    return 1;
  }
  v15 = WPP_GLOBAL_Control;
  v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0;
  v17 = 22;
LABEL_34:
  LOBYTE(v8) = v16;
  WPP_RECORDER_AND_TRACE_SF_(
    v15->AttachedDevice,
    v8,
    v9,
    v7,
    4,
    2,
    v17,
    (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  return 0;
}
