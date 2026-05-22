/*
 * XREFs of ?TargetFramesPresented@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A9DA0
 * Callers:
 *     ?TargetFramesPresented@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4450 (-TargetFramesPresented@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180003A68 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 */

__int64 __fastcall CCompFrameStats::TargetFramesPresented(
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
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CCompFrameStats::CalcFrameRange(this, &v12, &v13);
  v7 = *((_QWORD *)this + 18);
  v8 = *((_QWORD *)this + 17);
  if ( v8 != v7 )
  {
    v9 = v13;
    v10 = v12;
    do
    {
      if ( *(_QWORD *)v8 >= v10
        && *(_QWORD *)v8 <= v9
        && tagCOMPOSITION_TARGET_ID::operator==((_DWORD *)(v8 + 32), a2)
        && *(_QWORD *)(v8 + 72) )
      {
        ++v6;
      }
      v8 += 136LL;
    }
    while ( v8 != v7 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v6;
}
