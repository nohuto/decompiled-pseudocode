/*
 * XREFs of ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013810
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?TargetMaxVBlankGlitchDuration@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4480 (-TargetMaxVBlankGlitchDuration@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetMaxVBlankGlitchDuration(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  unsigned int v7; // esi
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // r8
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v14; // r9d
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a3;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 9);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 9));
  CCompFrameStats::CalcFrameRange((CCompFrameStats *)this, &v15, &v16);
  v8 = this[18];
  v9 = this[17];
  if ( v9 != v8 )
  {
    v10 = v9 + 5;
    do
    {
      if ( *v9 <= v16
        && *v9 >= v15
        && *((_DWORD *)v10 - 2) == *(_DWORD *)a2
        && *((_DWORD *)v10 - 1) == *((_DWORD *)a2 + 1)
        && *(_DWORD *)v10 == *((_DWORD *)a2 + 2)
        && *((_DWORD *)v10 + 1) == *((_DWORD *)a2 + 3)
        && *((_DWORD *)v10 + 2) == *((_DWORD *)a2 + 4)
        && *((_DWORD *)v10 + 3) == *((_DWORD *)a2 + 5) )
      {
        v11 = *((_DWORD *)a2 + 6);
        if ( *((_DWORD *)v10 + 4) == v11 || !*((_DWORD *)v10 + 4) || !v11 )
        {
          if ( v10[4] )
          {
            v12 = *((_DWORD *)v10 + 19);
            if ( v12 > *((_DWORD *)v10 + 13) )
            {
              v14 = v12 - *((_DWORD *)v10 + 13);
              if ( v7 <= v14 )
                v7 = v14;
            }
          }
        }
      }
      v9 += 17;
      v10 += 17;
    }
    while ( v9 != v8 );
  }
  LeaveCriticalSection(v4);
  return v7;
}
