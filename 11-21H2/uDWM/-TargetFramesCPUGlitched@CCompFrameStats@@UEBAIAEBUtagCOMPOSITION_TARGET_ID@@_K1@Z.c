/*
 * XREFs of ?TargetFramesCPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AEF0
 * Callers:
 *     ?TargetFramesCPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010A9F0 (-TargetFramesCPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetFramesCPUGlitched(
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
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a3;
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v13, &v14);
  v7 = *((_QWORD *)this + 15);
  v8 = *((_QWORD *)this + 14);
  if ( v8 != v7 )
  {
    v9 = v14;
    v10 = v13;
    do
    {
      if ( *(_QWORD *)v8 >= v10 && *(_QWORD *)v8 <= v9 )
      {
        if ( tagCOMPOSITION_TARGET_ID::operator==((_DWORD *)(v8 + 32), a2) )
        {
          v11 = *(_QWORD *)(v8 + 72);
          if ( v11 )
          {
            if ( v11 > *(_QWORD *)(v8 + 8) && v11 - *(_QWORD *)(v8 + 8) >= *(_QWORD *)(v8 + 80) )
              ++v6;
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
