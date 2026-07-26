/*
 * XREFs of ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0163890
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01607AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void __fastcall ndisIfIndexAllocatorSubsystemInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  int v3; // ecx
  char v4[4]; // [rsp+28h] [rbp-10h]

  ndisRegisterKnobs(&stru_1C00F4608, 1LL, a3, 0LL);
  v3 = *(_DWORD *)dword_1C00F5B64;
  if ( (unsigned int)(*(_DWORD *)dword_1C00F5B64 - 1) > 0x7FFE )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v4 = *(_DWORD *)dword_1C00F5B64;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xAu,
        (struct _GUID *)&WPP_938dc497801239a3aa49f69f20f6972d_Traceguids,
        *(_DWORD *)v4);
    }
    v3 = 1;
    *(_DWORD *)dword_1C00F5B64 = 1;
  }
  dword_1C00F5650 = 1;
  xmmword_1C00F5658 = 0LL;
  dword_1C00F5654 = v3;
  BitMapHeader = 0LL;
  dword_1C00F5668 = v3;
  dword_1C00F566C = 0xFFFF;
}
