/*
 * XREFs of ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x1C011A540
 * Callers:
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C011A214 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MakeSizedPoolPtr<RegistryKnobCollection>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, a3, 1651197006);
  if ( Pool2 )
  {
    *a1 = Pool2;
    *(_OWORD *)(Pool2 + 72) = 0LL;
    *(_QWORD *)(Pool2 + 88) = 0LL;
    *(_OWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)Pool2 = &RegistryKnobCollection::`vftable';
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
