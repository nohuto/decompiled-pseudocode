/*
 * XREFs of PspSetContextState @ 0x1409B81E8
 * Callers:
 *     PspGetSetContextInternal @ 0x140724A70 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x14030D1D0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D250 (RtlGetExtendedContextLength.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlCopyContext @ 0x1407709E0 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, _CONTEXT *a2)
{
  _CONTEXT *v4; // r14
  int v5; // ebx
  __int64 result; // rax
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(ContextLength) = 0;
  v4 = *(_CONTEXT **)(a1 + 1640);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v5 + 0x100000, (PULONG)&ContextLength);
    memset(v4, 0, (unsigned int)ContextLength);
    RtlInitializeExtendedContext(v4, v5 + 0x100000, &ContextLength);
    v4->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (a2->ContextFlags & 0x100040) == 0x100040 )
    v4->ContextFlags |= 0x100040u;
  RtlCopyContext(v4, a2->ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    LODWORD(ContextLength) = _mm_getcsr();
    a2->FltSave.MxCsr = (unsigned int)ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}
