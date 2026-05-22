/*
 * XREFs of ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013A60
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?TargetFrameRate@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4410 (-TargetFrameRate@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

float __fastcall CCompFrameStats::TargetFrameRate(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r8
  unsigned __int64 *v10; // rdx
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = a4;
  v19 = a3;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CCompFrameStats::CalcFrameRange(this, &v19, &v20);
  v9 = (unsigned __int64 *)*((_QWORD *)this + 18);
  v10 = (unsigned __int64 *)*((_QWORD *)this + 17);
  if ( v10 != v9 )
  {
    v11 = v10 + 5;
    do
    {
      if ( *v10 <= v20 && *v10 >= v19 )
      {
        if ( *v10 == v19 )
          v7 = *(v11 - 4);
        if ( *v10 == v20 )
          v8 = *(v11 - 4) + *(v11 - 2);
        if ( *((_DWORD *)v11 - 2) == *(_DWORD *)a2
          && *((_DWORD *)v11 - 1) == *((_DWORD *)a2 + 1)
          && *(_DWORD *)v11 == *((_DWORD *)a2 + 2)
          && *((_DWORD *)v11 + 1) == *((_DWORD *)a2 + 3)
          && *((_DWORD *)v11 + 2) == *((_DWORD *)a2 + 4)
          && *((_DWORD *)v11 + 3) == *((_DWORD *)a2 + 5) )
        {
          v12 = *((_DWORD *)a2 + 6);
          if ( *((_DWORD *)v11 + 4) == v12 || !*((_DWORD *)v11 + 4) || !v12 )
          {
            if ( v11[4] )
              ++v6;
          }
        }
      }
      v10 += 17;
      v11 += 17;
    }
    while ( v10 != v9 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( !v7 || !v8 || v8 <= v7 || !v6 )
    return 0.0;
  v13 = v8 - v7;
  if ( v13 < 0 )
    v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
        + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *((_QWORD *)this + 2);
  if ( v15 < 0 )
  {
    v18 = *((_QWORD *)this + 2) & 1LL | (*((_QWORD *)this + 2) >> 1);
    v16 = (float)(int)v18 + (float)(int)v18;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  return (float)v6 / (float)(v14 / v16);
}
