/*
 * XREFs of ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C023DDF8
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C007FDB0 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall xxxShowWindowViaStartupInfo(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  char v5; // di
  char v6; // r10
  bool v7; // dl
  unsigned int v8; // ecx
  bool v9; // dl
  int v10; // edx
  int v11; // r9d
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v12; // r8
  int v13; // r10d
  int v14; // ecx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 result; // rax
  char v19; // [rsp+54h] [rbp-64h]
  __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  int v21; // [rsp+60h] [rbp-58h]
  int v22; // [rsp+64h] [rbp-54h]
  int v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+6Ch] [rbp-4Ch]
  int v25; // [rsp+70h] [rbp-48h]
  int v26; // [rsp+74h] [rbp-44h]
  int v27; // [rsp+78h] [rbp-40h]

  v3 = a3;
  v19 = BYTE4(a2);
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x16u,
      0x11u,
      (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
      a1,
      BYTE4(a2),
      a2);
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qs(WPP_GLOBAL_Control->AttachedDevice, v7, (_DWORD)a3, 18);
  }
  v8 = v3[5] & 0xFFFFFFF8;
  v3[5] = v8;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      (_DWORD)a3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      22,
      19,
      (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
      (char)a1);
    v8 = v3[5];
  }
  v10 = v3[1];
  v11 = v10 + v3[3];
  v12 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)v3[2];
  v13 = (_DWORD)v12 + v3[4];
  v3[5] = v8 & 0xFFFDFFFF;
  v14 = 144;
  if ( v19 == 3 )
  {
    v15 = 1;
    v14 = 148;
  }
  else
  {
    v15 = 0;
  }
  v20 = 0LL;
  v27 = 0;
  v22 = v14;
  v23 = v10;
  v21 = v15;
  v24 = (int)v12;
  v25 = v11;
  v26 = v13;
  AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v20, v12);
  result = a1[80];
  if ( (result & 2) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_q(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v5,
                 v16,
                 v17,
                 4,
                 22,
                 20,
                 (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
                 (char)a1);
    }
    v3[5] |= 0x20000u;
  }
  return result;
}
