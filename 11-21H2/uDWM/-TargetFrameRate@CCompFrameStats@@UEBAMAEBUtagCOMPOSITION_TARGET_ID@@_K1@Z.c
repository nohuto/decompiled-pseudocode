/*
 * XREFs of ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009220
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?TargetFrameRate@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010A9E0 (-TargetFrameRate@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

float __fastcall CCompFrameStats::TargetFrameRate(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rbx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v18, &v19);
  v9 = (unsigned __int64 *)*((_QWORD *)this + 14);
  if ( v9 != *((unsigned __int64 **)this + 15) )
  {
    v10 = v19;
    v11 = v18;
    do
    {
      if ( *v9 >= v11 && *v9 <= v10 )
      {
        if ( *v9 == v11 )
          v7 = v9[1];
        if ( *v9 == v10 )
          v8 = v9[1] + v9[3];
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v9 + 4, a2) && v9[9] )
          ++v6;
      }
      v9 += 17;
    }
    while ( v9 != *((unsigned __int64 **)this + 15) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !v7 || !v8 || v8 <= v7 || !v6 )
    return 0.0;
  v12 = v8 - v7;
  if ( v12 < 0 )
    v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
        + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = *((_QWORD *)this + 2);
  if ( v14 < 0 )
  {
    v17 = *((_QWORD *)this + 2) & 1LL | (*((_QWORD *)this + 2) >> 1);
    v15 = (float)(int)v17 + (float)(int)v17;
  }
  else
  {
    v15 = (float)(int)v14;
  }
  return (float)v6 / (float)(v13 / v15);
}
