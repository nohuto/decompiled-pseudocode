/*
 * XREFs of CcFreeVirtualAddress @ 0x140262710
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1406F5E20 (CcMapAndCopyFromCache.c)
 *     CcPinMappedData @ 0x1406F6060 (CcPinMappedData.c)
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

LONG __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 192);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 552));
  }
  return result;
}
