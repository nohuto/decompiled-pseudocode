/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0216EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C0214F68 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02151E0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C0216170 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C0216B18 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02176C8 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rbx
  void **v4; // rsi
  int v7; // edi
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdi
  int v11; // r8d
  struct tagDDECONV *v12; // rcx
  struct tagINTDDEINFO *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = a3;
  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
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
      43,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, v3, &v13);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  if ( v7 != 2 )
    return v7;
  v10 = *((_QWORD *)v3 + 7);
  if ( (*(_DWORD *)v13 & 0x8000LL) != 0 )
  {
    v11 = *(_DWORD *)(v10 + 64);
    if ( (v11 & 0x400) != 0 )
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
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
          44,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
        v11 = *(_DWORD *)(v10 + 64);
      }
      FreeListAdd(*((PETHREAD ***)v3 + 4), *(void **)(v10 + 40), v11 & 0xFFFFFFFE);
    }
  }
  else
  {
    v12 = (struct tagDDECONV *)WPP_GLOBAL_Control;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        4,
        14,
        45,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
    }
    xxxFreeDDEHandle(v12, *(void **)(v10 + 48), *(_DWORD *)(v10 + 64) & 0xFFFFFFFE);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    return 0;
  PopState(v3);
  return 2;
}
