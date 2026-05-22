/*
 * XREFs of ?TargetTotalVSyncsGlitched@CAnimationFrameStats@@QEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18001482C
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

__int64 __fastcall CAnimationFrameStats::TargetTotalVSyncsGlitched(
        unsigned __int64 **this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v7; // rbp
  unsigned __int64 *v8; // r11
  unsigned __int64 *v9; // r9
  _QWORD *v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 9);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 9));
  CCompFrameStats::CalcFrameRange((CCompFrameStats *)this, &v16, &v17);
  v8 = this[18];
  v9 = this[17];
  if ( v9 != v8 )
  {
    v10 = v9 + 5;
    do
    {
      if ( *v9 <= v17
        && *v9 >= v16
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
            v12 = v10[5];
            if ( v12 )
            {
              v13 = v10[8];
              if ( v13 )
              {
                v14 = v10[11];
                if ( v14 )
                {
                  if ( v14 > v13 )
                    v7 += (v14 + (v12 >> 1) - v13) / v12;
                }
              }
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
