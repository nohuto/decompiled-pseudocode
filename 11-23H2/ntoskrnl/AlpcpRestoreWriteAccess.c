/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1407C31E0
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071EEE0 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *Process; // rsi
  _KPROCESS *v4; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v5; // [rsp+20h] [rbp-48h] BYREF

  memset(&v5, 0, sizeof(v5));
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = *(_KPROCESS **)(a1 + 32);
    if ( v4 != Process )
      KiStackAttachProcess(v4, 0, (__int64)&v5);
    MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess(&v5);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
