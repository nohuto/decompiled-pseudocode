/*
 * XREFs of ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C01536CC
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01535AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void __fastcall ndisIfIndexAllocatorSubsystemInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  int v3; // ecx
  char v4[4]; // [rsp+28h] [rbp-10h]

  ndisRegisterKnobs(&stru_1C00EB600, 1LL, a3, 0LL);
  v3 = *(_DWORD *)dword_1C00ECB74;
  if ( (unsigned int)(*(_DWORD *)dword_1C00ECB74 - 1) > 0x7FFE )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v4 = *(_DWORD *)dword_1C00ECB74;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xAu,
        (struct _GUID *)&WPP_938dc497801239a3aa49f69f20f6972d_Traceguids,
        *(_DWORD *)v4);
    }
    v3 = 1;
    *(_DWORD *)dword_1C00ECB74 = 1;
  }
  dword_1C00EC620 = 1;
  xmmword_1C00EC628 = 0LL;
  dword_1C00EC624 = v3;
  xmmword_1C00EC640 = 0LL;
  dword_1C00EC638 = v3;
  dword_1C00EC63C = 0xFFFF;
}
