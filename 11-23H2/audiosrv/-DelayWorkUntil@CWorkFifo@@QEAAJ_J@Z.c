/*
 * XREFs of ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180134088
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180134C24 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801363D4 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180134EAC (-Initialize@CWorkFifo@@AEAAJXZ.c)
 */

__int64 __fastcall CWorkFifo::DelayWorkUntil(PTP_TIMER *this, __int64 a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // esi
  double v9; // xmm1_8
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(this + 18);
  v5 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 136) )
  {
    v6 = CWorkFifo::Initialize((CWorkFifo *)this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v6);
      _Mtx_unlock(v2);
      return v7;
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v9 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
         + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v9 = (double)(int)g_u64QPCFrequency;
    v10 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v9);
    if ( v10 < a2 )
    {
      PerformanceCount.QuadPart = v10 - a2;
      pftDueTime = (struct _FILETIME)(v10 - a2);
      *((_BYTE *)this + 137) = 1;
      SetThreadpoolTimer(this[1], &pftDueTime, 0, 0);
    }
  }
  _Mtx_unlock(v2);
  return 0LL;
}
