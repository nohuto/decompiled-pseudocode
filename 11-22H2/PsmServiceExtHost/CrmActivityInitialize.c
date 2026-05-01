/*
 * XREFs of CrmActivityInitialize @ 0x18002C728
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002C340 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x1800438F0 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall CrmActivityInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0xF0uLL);
  *(_QWORD *)(a1 + 40) = -1LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  result = RtlInitializeSRWLock(a1 + 80);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 168) = -1LL;
  *(_QWORD *)(a1 + 176) = -1LL;
  *(_QWORD *)(a1 + 216) = -1LL;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_QWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 124) = 4;
  *(_DWORD *)(a1 + 184) = 3;
  return result;
}
