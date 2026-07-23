/*
 * XREFs of KeSaveSupervisorState @ 0x14020E48C
 * Callers:
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     IopLiveDumpCollectPages @ 0x140A9A974 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140A9C170 (IopLiveDumpProcessCorralStateChange.c)
 *     KdEnterDebugger @ 0x140AB0144 (KdEnterDebugger.c)
 * Callees:
 *     RtlXSaveS @ 0x14036E644 (RtlXSaveS.c)
 *     KiSaveIptState @ 0x140573250 (KiSaveIptState.c)
 */

__int64 __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)KiIptMsrMask && (a2 & 0x100) != 0 )
      result = KiSaveIptState(MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + a1 + 64);
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      result = KeEnabledSupervisorXStateFeatures;
      if ( KeEnabledSupervisorXStateFeatures )
      {
        v5 = KeEnabledSupervisorXStateFeatures & v2;
        *(_QWORD *)(a1 + 8) = KeEnabledSupervisorXStateFeatures & v2;
        return RtlXSaveS(a1 - 512, v5);
      }
    }
  }
  return result;
}
