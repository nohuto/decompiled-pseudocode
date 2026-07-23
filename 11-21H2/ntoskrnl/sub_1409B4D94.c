/*
 * XREFs of sub_1409B4D94 @ 0x1409B4D94
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 */

__int64 __fastcall sub_1409B4D94(__int64 a1, _CONTEXT *a2)
{
  _CONTEXT *v4; // rsi
  int v5; // ebx
  ULONG ContextFlags; // edx
  __int64 result; // rax
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+8h] BYREF

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
  ContextFlags = a2->ContextFlags;
  if ( (ContextFlags & 0x100040) == 0x100040 )
  {
    v4->ContextFlags |= 0x100040u;
    ContextFlags = a2->ContextFlags;
  }
  RtlCopyContext(v4, ContextFlags, a2);
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
