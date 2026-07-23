/*
 * XREFs of sub_140329430 @ 0x140329430
 * Callers:
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 *     CcPinMappedData @ 0x1407BEEB0 (CcPinMappedData.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140329430(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 184);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 544));
  }
  return result;
}
