/*
 * XREFs of ?StaticWorkerWindowMessageThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1804084B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ULONG __fastcall GamingOverlayExperienceManager::StaticWorkerWindowMessageThread(__m128i *Parameter)
{
  GamingOverlayExperienceManager *v2; // rcx
  __m128i v3; // [rsp+20h] [rbp-38h]
  HWND v4; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( Parameter )
  {
    v3 = *Parameter;
    v4 = (HWND)Parameter[1].m128i_i64[0];
    operator delete(Parameter);
    return GamingOverlayExperienceManager::WorkerWindowMessageThread(v2, (void *)_mm_srli_si128(v3, 8).m128i_i64[0], v4);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E8,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return 0;
  }
}
