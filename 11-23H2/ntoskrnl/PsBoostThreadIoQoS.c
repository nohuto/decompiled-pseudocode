/*
 * XREFs of PsBoostThreadIoQoS @ 0x14031A70C
 * Callers:
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140317E40 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbThreadUnboostIoPriority @ 0x140318864 (KiAbThreadUnboostIoPriority.c)
 *     ExReinitializeResourceLite @ 0x1403189A0 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x1403192F8 (KiAbThreadBoostIoPriority.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A170 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031B0CC (KeAbProcessEffectiveIoPriorityChange.c)
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
