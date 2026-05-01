/*
 * XREFs of CrmRegistrationInitialize @ 0x1800053EC
 * Callers:
 *     CrmSrvRegister @ 0x180004F60 (CrmSrvRegister.c)
 *     CrmGlobalsStart @ 0x180043634 (CrmGlobalsStart.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
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
