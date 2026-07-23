/*
 * XREFs of PopPluginQuerySocSubsystemCount @ 0x140986754
 * Callers:
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984E30 (PopFxInitializeSocSubsystemStaticInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQuerySocSubsystemCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d

  result = PopFxProcessorPlugin;
  if ( PopFxProcessorPlugin )
  {
    result = (*(__int64 (__fastcall **)(__int64))(PopFxProcessorPlugin + 96))(36LL);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( v4 - 1 > 0x3E7 )
        PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, v4);
    }
  }
  return result;
}
