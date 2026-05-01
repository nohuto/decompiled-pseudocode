/*
 * XREFs of CrmActivityInitialize @ 0x18003085C
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x1800308F0 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x180048A74 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall CrmActivityInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0xD8uLL);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_OWORD *)(a1 + 72) = 0LL;
  RtlInitializeSRWLock(a1 + 72);
  *(_DWORD *)(a1 + 80) = 0;
  result = -1LL;
  *(_QWORD *)(a1 + 144) = -1LL;
  *(_QWORD *)(a1 + 152) = -1LL;
  *(_QWORD *)(a1 + 192) = -1LL;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 160) = 3;
  return result;
}
