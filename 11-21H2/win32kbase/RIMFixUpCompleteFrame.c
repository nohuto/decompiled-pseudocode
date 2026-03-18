/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C01A675C
 * Callers:
 *     RIMFixUpCompleteFrames @ 0x1C01A6A04 (RIMFixUpCompleteFrames.c)
 *     rimFindOtherQueuedFrames @ 0x1C01A9290 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     traceFrame @ 0x1C01A595C (traceFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  unsigned int i; // ebp
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rbx
  _UNKNOWN **result; // rax

  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( a5 || *(_DWORD *)(a1 + 880) != 1 )
  {
    v9 = 0;
    v10 = 0LL;
  }
  else
  {
    v9 = 1;
    v10 = 1LL;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      58,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  if ( v9 )
    ProbeForWrite((volatile void *)v7, *(unsigned int *)a4, 8u);
  v11 = *(_QWORD *)(v8 + 344);
  if ( v11 )
  {
    *(_QWORD *)(v7 + 32) = v11;
    v5 = 1;
  }
  v12 = a4[27];
  if ( v12 )
    *(_QWORD *)(v7 + 216) = v7 + v12 - (_QWORD)a4;
  v13 = a4[29];
  if ( v13 )
  {
    v14 = v13 - (_QWORD)a4;
    v15 = (_QWORD *)(v14 + v7);
    *(_QWORD *)(v7 + 232) = v14 + v7;
    if ( v5 )
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 24); v15 += 24 )
      {
        if ( v10 )
          ProbeForWrite(v15, 0xC0uLL, 8u);
        ++i;
        v15[4] = *(_QWORD *)(v8 + 344);
      }
    }
    traceFrame(v7, a2, a3);
  }
  v17 = a4[28];
  if ( v17 )
  {
    v18 = v17 - (_QWORD)a4;
    v19 = (_QWORD *)(v18 + v7);
    *(_QWORD *)(v7 + 224) = v18 + v7;
    v20 = a4[28];
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          if ( v10 )
          {
            ProbeForWrite(v19, 0x18uLL, 8u);
            v21 = *(_QWORD *)(v20 + 8);
          }
          v19[1] = v7 + v21 - (_QWORD)a4;
        }
        v22 = (__int64 *)(v20 + 16);
        v23 = *(_QWORD *)(v20 + 16);
        if ( !v23 )
          break;
        if ( v10 )
        {
          ProbeForWrite(v19, 0x18uLL, 8u);
          v23 = *v22;
        }
        v19[2] = v23 - (_QWORD)a4 + v7;
        v19 = (_QWORD *)(v23 - (_QWORD)a4 + v7);
        v20 = *v22;
      }
      while ( *v22 );
    }
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          a2,
                          a3,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          59,
                          (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  }
  return result;
}
