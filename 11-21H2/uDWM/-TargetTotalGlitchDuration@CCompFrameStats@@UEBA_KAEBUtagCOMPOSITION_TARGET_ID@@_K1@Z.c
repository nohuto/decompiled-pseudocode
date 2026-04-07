/*
 * XREFs of ?TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009390
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA70 (-TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetTotalGlitchDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbp
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v14, &v15);
  v7 = (unsigned __int64 *)*((_QWORD *)this + 15);
  v8 = (unsigned __int64 *)*((_QWORD *)this + 14);
  if ( v8 != v7 )
  {
    v9 = v15;
    v10 = v14;
    do
    {
      if ( *v8 >= v10 && *v8 <= v9 )
      {
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v8 + 4, a2) )
        {
          if ( v8[9] )
          {
            v11 = v8[13];
            if ( v11 )
            {
              v12 = v8[16];
              if ( v12 )
              {
                if ( v12 > v11 )
                  v6 += v12 - v11;
              }
            }
          }
        }
      }
      v8 += 17;
    }
    while ( v8 != v7 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return v6;
}
