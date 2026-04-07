/*
 * XREFs of ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXPEBU_tlgProvider_t@@UtagCOMPOSITION_TARGET_ID@@PEBG222I@Z @ 0x1800075B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800465A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAnimationFrameStats::AnimationLastFrameTelemetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        unsigned int a8)
{
  __int64 v8; // r11
  __int64 v9; // xmm1_8
  int v10; // eax
  __int64 result; // rax

  v8 = a1;
  if ( *(_BYTE *)(a1 - 124) )
  {
    v9 = *(_QWORD *)(a3 + 16);
    v10 = *(_DWORD *)(a3 + 24);
    *(_QWORD *)(a1 + 16) = a2;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 40) = v9;
    *(_DWORD *)(a1 + 48) = v10;
    if ( a4 )
      StringCchCopyW((unsigned __int16 *)(a1 + 52), 0x104uLL, a4);
    if ( a5 )
      StringCchCopyW((unsigned __int16 *)(v8 + 572), 0x104uLL, a5);
    if ( a6 )
      StringCchCopyW((unsigned __int16 *)(v8 + 1092), 0x104uLL, a6);
    if ( a7 )
      StringCchCopyW((unsigned __int16 *)(v8 + 1612), 0x208uLL, a7);
    result = a8;
    *(_DWORD *)(v8 + 2652) = a8;
    *(_BYTE *)(v8 + 8) = 1;
  }
  return result;
}
