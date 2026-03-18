/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140003DC8
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003870 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140003994 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000D12C (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE CurrentProcess; // rax
  int v4; // eax
  __int64 v5; // rdx
  CDwmAppHost *v6; // rcx
  int v7; // r8d
  int started; // eax
  struct HMIL_CONNECTION__ *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  v1 = MilCompositionEngine_Initialize(15, &v10);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x129u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer();
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v4 = DwmClientStartup(&g_dwmAppHost);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x131u);
    }
    else
    {
      started = CDwmAppHost::StartKernelRedirection(v6, v5, v7);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x133u);
      else
        LOBYTE(word_140017C18) = 1;
    }
  }
  return v2;
}
