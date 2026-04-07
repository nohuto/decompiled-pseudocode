/*
 * XREFs of ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009470
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?TargetMaxVBlankGlitchDuration@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA50 (-TargetMaxVBlankGlitchDuration@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetMaxVBlankGlitchDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // edx
  unsigned int v13; // edx
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v14, &v15);
  v7 = *((_QWORD *)this + 15);
  v8 = *((_QWORD *)this + 14);
  if ( v8 != v7 )
  {
    v9 = v15;
    v10 = v14;
    do
    {
      if ( *(_QWORD *)v8 >= v10 && *(_QWORD *)v8 <= v9 )
      {
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v8 + 32, a2) )
        {
          if ( *(_QWORD *)(v8 + 72) )
          {
            v11 = *(_DWORD *)(v8 + 116);
            if ( v11 > *(_DWORD *)(v8 + 92) )
            {
              v13 = v11 - *(_DWORD *)(v8 + 92);
              if ( v6 <= v13 )
                v6 = v13;
            }
          }
        }
      }
      v8 += 136LL;
    }
    while ( v8 != v7 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return v6;
}
