/*
 * XREFs of ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013910
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?TargetMaxTimeBetweenFrames@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4470 (-TargetMaxTimeBetweenFrames@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

unsigned __int64 __fastcall CCompFrameStats::TargetMaxTimeBetweenFrames(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned int v9; // r14d
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // r9
  _QWORD *v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r8
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 9);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 9));
  CCompFrameStats::CalcFrameRange((CCompFrameStats *)this, &v16, &v17);
  v10 = this[18];
  v11 = this[17];
  if ( v11 != v10 )
  {
    v12 = v11 + 5;
    do
    {
      if ( *v11 <= v17
        && *v11 >= v16
        && *((_DWORD *)v12 - 2) == *(_DWORD *)a2
        && *((_DWORD *)v12 - 1) == *((_DWORD *)a2 + 1)
        && *(_DWORD *)v12 == *((_DWORD *)a2 + 2)
        && *((_DWORD *)v12 + 1) == *((_DWORD *)a2 + 3)
        && *((_DWORD *)v12 + 2) == *((_DWORD *)a2 + 4)
        && *((_DWORD *)v12 + 3) == *((_DWORD *)a2 + 5) )
      {
        v13 = *((_DWORD *)a2 + 6);
        if ( *((_DWORD *)v12 + 4) == v13 || !*((_DWORD *)v12 + 4) || !v13 )
        {
          v14 = v12[11];
          if ( v14 )
          {
            if ( v9 && v8 && *((_DWORD *)v12 + 18) > v9 && v14 > v8 && v7 <= v14 - v8 )
              v7 = v14 - v8;
            v9 = *((_DWORD *)v12 + 18);
            v8 = v12[11];
          }
        }
      }
      v11 += 17;
      v12 += 17;
    }
    while ( v11 != v10 );
  }
  LeaveCriticalSection(v4);
  return v7;
}
