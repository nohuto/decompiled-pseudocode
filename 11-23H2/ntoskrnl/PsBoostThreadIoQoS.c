/*
 * XREFs of PsBoostThreadIoQoS @ 0x14031A99C
 * Callers:
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbThreadUnboostIoPriority @ 0x140318AF4 (KiAbThreadUnboostIoPriority.c)
 *     ExReinitializeResourceLite @ 0x140318C30 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x140319588 (KiAbThreadBoostIoPriority.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A400 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031B35C (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1444));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange(a1, 0LL);
  }
  return result;
}
