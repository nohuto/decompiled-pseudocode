/*
 * XREFs of KeInvalidAccessAllowed @ 0x140230BA0
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402307A0 (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x140230B44 (MiAllowGuardFault.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140279D30 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 * Callees:
 *     KiIsTraceMemoryAccess @ 0x140230C30 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x14024EF40 (KiRspInIstStack.c)
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  __int16 v4; // cx
  char result; // al
  void *v6; // rsi
  __int64 v7; // rdx

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  result = 0;
  if ( v4 != 16 )
  {
    if ( v4 == 51 )
    {
      v6 = (void *)qword_140D071B0;
      goto LABEL_5;
    }
    return 0;
  }
  if ( (*(_DWORD *)(a1 + 376) & 0x200) == 0
    && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(a1 + 384)) || (unsigned int)KiRspInIstStack(2LL, v7)) )
  {
    return 0;
  }
  v6 = &ExpInterlockedPopEntrySListFault;
  result = KiIsTraceMemoryAccess(*(_QWORD *)(a1 + 360));
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return result;
}
