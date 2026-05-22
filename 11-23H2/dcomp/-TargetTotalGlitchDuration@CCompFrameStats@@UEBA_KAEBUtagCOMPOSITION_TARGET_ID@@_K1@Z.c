/*
 * XREFs of ?TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A9F30
 * Callers:
 *     ?TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A44A0 (-TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180003A68 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetTotalGlitchDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CCompFrameStats::CalcFrameRange(this, &v14, &v15);
  v7 = *((_QWORD *)this + 18);
  v8 = *((_QWORD *)this + 17);
  if ( v8 != v7 )
  {
    v9 = v15;
    v10 = v14;
    do
    {
      if ( *(_QWORD *)v8 >= v10 && *(_QWORD *)v8 <= v9 )
      {
        if ( tagCOMPOSITION_TARGET_ID::operator==((_DWORD *)(v8 + 32), a2) )
        {
          if ( *(_QWORD *)(v8 + 72) )
          {
            v11 = *(_QWORD *)(v8 + 104);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v8 + 128);
              if ( v12 )
              {
                if ( v12 > v11 )
                  v6 += v12 - v11;
              }
            }
          }
        }
      }
      v8 += 136LL;
    }
    while ( v8 != v7 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v6;
}
