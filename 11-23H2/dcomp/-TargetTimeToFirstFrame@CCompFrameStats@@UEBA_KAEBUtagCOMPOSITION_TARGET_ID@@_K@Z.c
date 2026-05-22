/*
 * XREFs of ?TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180003810
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?TargetTimeToFirstFrame@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x1801A4490 (-TargetTimeToFirstFrame@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180003A68 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 */

unsigned __int64 __fastcall CCompFrameStats::TargetTimeToFirstFrame(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // r9
  __int64 v10; // r10

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( !a3 )
    a3 = *((_QWORD *)this + 14);
  v9 = *((_QWORD *)this + 17);
  v10 = *((_QWORD *)this + 18);
  while ( v9 != v10 )
  {
    if ( *(_QWORD *)v9 >= a3 )
    {
      if ( *(_QWORD *)v9 == a3 )
        v6 = *(_QWORD *)(v9 + 8);
      if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v9 + 32, a2) )
      {
        if ( !v8 && *(_QWORD *)(v9 + 72) )
          v8 = *(_DWORD *)(v9 + 88);
        if ( *(_QWORD *)(v9 + 128) && *(_DWORD *)(v9 + 112) >= v8 )
        {
          v7 = *(_QWORD *)(v9 + 128);
          break;
        }
      }
    }
    v9 += 136LL;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v6 && v7 && v7 > v6 )
    return v7 - v6;
  else
    return 0LL;
}
