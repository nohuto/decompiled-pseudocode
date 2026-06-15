/*
 * XREFs of ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180126588
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801271B4 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180128974 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180127420 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 */

__int64 __fastcall CWorkFifo::DelayWorkUntil(CWorkFifo *this, __int64 a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  double v8; // xmm1_8
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF

  v2 = (CWorkFifo *)((char *)this + 144);
  v5 = _Mtx_lock((CWorkFifo *)((char *)this + 144));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 136) )
    goto LABEL_11;
  v6 = CWorkFifo::Initialize(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v8 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
         + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v8 = (double)(int)g_u64QPCFrequency;
    v9 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v8);
    if ( v9 < a2 )
    {
      PerformanceCount.QuadPart = v9 - a2;
      pftDueTime = (struct _FILETIME)(v9 - a2);
      *((_BYTE *)this + 137) = 1;
      SetThreadpoolTimer(*((PTP_TIMER *)this + 1), &pftDueTime, 0, 0);
    }
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)(unsigned int)v6);
LABEL_12:
  _Mtx_unlock(v2);
  return v7;
}
