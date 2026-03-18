/*
 * XREFs of ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E46A0
 * Callers:
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C01F1AA4 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0095DA0 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C009ED24 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 */

char __fastcall CDesktopInputSink::GetTransform(struct tagINPUT_TRANSFORM *a1)
{
  struct CDesktopInputSink *Instance; // rdi
  int v3; // edx
  int v4; // r8d
  CompositionInputObject *v5; // rcx
  PDEVICE_OBJECT v6; // r10
  bool v7; // bl
  __int16 v8; // cx
  int v10; // edx
  int v11; // r8d
  bool v12; // bl
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  float v15; // xmm1_4
  float v16; // xmm0_4
  char v17; // [rsp+40h] [rbp-18h]

  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v5 = (CompositionInputObject *)*((_QWORD *)Instance + 2);
  if ( !v5 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = 10;
LABEL_19:
    LOBYTE(v3) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      v6->AttachedDevice,
      v3,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      24,
      v8,
      (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids);
LABEL_20:
    CPushLock::ReleaseLock(Instance);
    return 0;
  }
  if ( (int)CompositionInputObject::QueryTransform(v5, a1) < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = 11;
    goto LABEL_19;
  }
  CPushLock::ReleaseLock(Instance);
  v11 = dword_1C029660C;
  if ( !dword_1C029660C )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = v12;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        12,
        (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids);
    }
    return 0;
  }
  v13 = (__m128)LODWORD(FLOAT_1_0);
  v13.m128_f32[0] = 1.0 / (float)((float)dword_1C029660C / 96.0);
  v14 = _mm_shuffle_ps(v13, v13, 0);
  v15 = v14.m128_f32[0] * *((float *)a1 + 5);
  *(__m128 *)a1 = _mm_mul_ps(*(__m128 *)a1, v14);
  *((float *)a1 + 5) = v15;
  *((float *)a1 + 4) = v14.m128_f32[0] * *((float *)a1 + 4);
  v16 = v14.m128_f32[0] * *((float *)a1 + 6);
  v14.m128_f32[0] = v14.m128_f32[0] * *((float *)a1 + 7);
  *((float *)a1 + 6) = v16;
  *((_DWORD *)a1 + 7) = v14.m128_i32[0];
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = v11;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      24,
      14,
      (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids,
      v17);
  }
  return 1;
}
