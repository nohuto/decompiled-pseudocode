/*
 * XREFs of ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXUtagCOMPOSITION_TARGET_ID@@PEBG111I@Z @ 0x18000D750
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAnimationFrameStats::AnimationLastFrameTelemetry(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 v8; // r11
  __int64 v9; // xmm1_8
  int v10; // eax
  __int64 result; // rax

  v8 = a1;
  if ( *(_BYTE *)(a1 - 148) )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 24);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 24) = v9;
    *(_DWORD *)(a1 + 32) = v10;
    if ( a3 )
      StringCchCopyW((unsigned __int16 *)(a1 + 36), 0x104uLL, a3);
    if ( a4 )
      StringCchCopyW((unsigned __int16 *)(v8 + 556), 0x104uLL, a4);
    if ( a5 )
      StringCchCopyW((unsigned __int16 *)(v8 + 1076), 0x104uLL, a5);
    if ( a6 )
      StringCchCopyW((unsigned __int16 *)(v8 + 1596), 0x208uLL, a6);
    result = a7;
    *(_DWORD *)(v8 + 2636) = a7;
    *(_BYTE *)(v8 + 2644) = 1;
  }
  return result;
}
