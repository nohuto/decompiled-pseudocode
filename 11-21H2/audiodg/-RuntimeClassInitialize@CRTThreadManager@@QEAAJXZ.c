/*
 * XREFs of ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x14002904C
 * Callers:
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140028F84 (--$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14002909C (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 */

__int64 __fastcall CRTThreadManager::RuntimeClassInitialize(CRTThreadManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RtwqStartup();
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    v4 = CRTThreadManager::InitializeRTOperatingMode(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v4);
      v6 = RtwqShutdown();
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x48,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      *((_BYTE *)this + 96) = 1;
      return 0;
    }
  }
  return v3;
}
