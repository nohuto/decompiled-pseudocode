/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140A7F670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViKeInjectStatusAlerted @ 0x140A7F778 (ViKeInjectStatusAlerted.c)
 *     ViKeObjectAcquired @ 0x140A96904 (ViKeObjectAcquired.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // rsi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int v13; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v5 = a1;
  LOBYTE(a1) = a4;
  v9 = ViKeInjectStatusAlerted(a1);
  v12 = a5;
  if ( v9 )
  {
    v13 = 257;
  }
  else
  {
    LOBYTE(v11) = a4;
    LOBYTE(v10) = a3;
    v13 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))pXdvKeWaitForSingleObject)(
            v5,
            a2,
            v10,
            v11,
            a5);
  }
  if ( ViDeadlockDetectionEnabled && (v13 & 0xFFFFFF7F) == 0 )
    ViKeObjectAcquired(1LL, &v16, v12, retaddr);
  return v13;
}
