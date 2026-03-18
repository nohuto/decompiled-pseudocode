/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C0214F68 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02151E0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C0216170 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C0216B18 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0217594 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rdi
  __int64 *v4; // rsi
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  char v12; // dl
  struct tagINTDDEINFO *v13; // rsi
  int v14; // r8d
  struct tagDDECONV *v15; // rcx
  struct tagINTDDEINFO *v16; // [rsp+90h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = a3;
  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      4,
      14,
      32,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, v3, &v16);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  if ( v7 != 2 )
    return v7;
  v11 = *((_QWORD *)v3 + 7);
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v13 = v16;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0xEu,
      0x21u,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      *(_QWORD *)(v11 + 40),
      *(_QWORD *)(v11 + 48),
      *(_QWORD *)v16);
  if ( (*(_DWORD *)v13 & 0x8000LL) == 0 )
  {
    v15 = (struct tagDDECONV *)WPP_GLOBAL_Control;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        36,
        4,
        14,
        36,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        *(_QWORD *)(v11 + 40));
    }
    goto LABEL_50;
  }
  v14 = *(_DWORD *)(v11 + 64);
  if ( (v14 & 0x400) != 0 )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        4,
        14,
        34,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
      v14 = *(_DWORD *)(v11 + 64);
    }
    FreeListAdd(*((PETHREAD ***)v3 + 4), *(void **)(v11 + 48), v14 & 0xFFFFFFFE);
    goto LABEL_52;
  }
  v15 = (struct tagDDECONV *)WPP_GLOBAL_Control;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v10,
      4,
      14,
      35,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      *(_QWORD *)(v11 + 40));
LABEL_50:
    v14 = *(_DWORD *)(v11 + 64);
  }
  xxxFreeDDEHandle(v15, *(void **)(v11 + 40), v14 & 0xFFFFFFFE);
LABEL_52:
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  PopState(v3);
  return 2;
}
