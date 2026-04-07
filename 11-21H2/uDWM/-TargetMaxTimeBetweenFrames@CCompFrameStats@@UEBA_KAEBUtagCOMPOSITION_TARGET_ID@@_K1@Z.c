/*
 * XREFs of ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009660
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?TargetMaxTimeBetweenFrames@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA40 (-TargetMaxTimeBetweenFrames@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

unsigned __int64 __fastcall CCompFrameStats::TargetMaxTimeBetweenFrames(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a3;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v15, &v16);
  v9 = *((_QWORD *)this + 15);
  v10 = *((_QWORD *)this + 14);
  if ( v10 != v9 )
  {
    v11 = v16;
    v12 = v15;
    do
    {
      if ( *(_QWORD *)v10 >= v12 && *(_QWORD *)v10 <= v11 )
      {
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v10 + 32, a2) )
        {
          v13 = *(_QWORD *)(v10 + 128);
          if ( v13 )
          {
            if ( v8 && v7 && *(_DWORD *)(v10 + 112) > v8 && v13 > v7 && v6 <= v13 - v7 )
              v6 = v13 - v7;
            v8 = *(_DWORD *)(v10 + 112);
            v7 = *(_QWORD *)(v10 + 128);
          }
        }
      }
      v10 += 136LL;
    }
    while ( v10 != v9 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return v6;
}
