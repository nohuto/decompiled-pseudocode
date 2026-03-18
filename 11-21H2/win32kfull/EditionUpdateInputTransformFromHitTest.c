/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C00028B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0002974 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C00029E0 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C016E15E (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqi @ 0x1C01D4380 (WPP_RECORDER_AND_TRACE_SF_qqi.c)
 */

__int64 __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        unsigned __int64 *a4,
        struct tagWND *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  InputTransform *v6; // rdi
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // r15d
  char v12; // si
  int v13; // edx
  void *v14; // r8
  int v15; // r9d
  int v16; // r8d
  int v17; // edx

  v6 = *(InputTransform **)(a1 + 80);
  v7 = 0LL;
  v8 = (int)a4;
  v10 = 0;
  if ( (!a2 || (unsigned int)SetCompositionInputWindowUIOwner(v6, a2)) && !v8 )
  {
    v12 = 1;
    v10 = 1;
    if ( (unsigned int)InputTransform::StoreTransform(v6, a5, a6, a4) )
    {
      if ( !(unsigned int)InputTransform::SetCompositionInput(v6, a3, v14) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v12 = 0;
        }
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 33;
          LOBYTE(v17) = v12;
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v16,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            16,
            33,
            (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
            (char)v6,
            (char)a3);
        }
      }
    }
    else
    {
      v10 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v12 = 0;
      }
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v12;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqi(WPP_GLOBAL_Control->AttachedDevice, v13, (_DWORD)v14, v15);
      }
    }
  }
  if ( v6 )
    v7 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(a3, v7, *(_QWORD *)a6, v10);
}
