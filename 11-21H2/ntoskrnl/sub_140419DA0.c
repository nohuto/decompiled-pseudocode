/*
 * XREFs of sub_140419DA0 @ 0x140419DA0
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140659230 (PsRegisterSyscallProvider.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140419DA0(__int64 a1, void *a2, __int128 *a3, __int64 a4)
{
  __int128 v8; // xmm0
  __int64 result; // rax

  memset((void *)a1, 0, 0x60uLL);
  v8 = *a3;
  *(_QWORD *)(a1 + 32) = a2;
  *(_OWORD *)(a1 + 16) = v8;
  ObfReferenceObjectWithTag(a2, 0x63537350u);
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = 1LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 56));
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1 + 72;
  *(_QWORD *)(a1 + 80) = a1 + 72;
  *(_QWORD *)(a1 + 72) = a1 + 72;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = -1;
  return result;
}
