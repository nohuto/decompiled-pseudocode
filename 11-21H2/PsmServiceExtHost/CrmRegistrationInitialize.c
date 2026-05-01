/*
 * XREFs of CrmRegistrationInitialize @ 0x18003372C
 * Callers:
 *     CrmSrvRegister @ 0x180033624 (CrmSrvRegister.c)
 *     CrmGlobalsStart @ 0x180048884 (CrmGlobalsStart.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall CrmRegistrationInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 16), 0, 0x80uLL);
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  result = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
