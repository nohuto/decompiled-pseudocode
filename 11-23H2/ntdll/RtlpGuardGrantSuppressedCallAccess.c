/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x18010BA74
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B820 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB50 (RtlpHandleInvalidUserCallTarget.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC74 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A4440 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2)
{
  char v3; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-1h]
  __int64 v5; // [rsp+40h] [rbp+7h]
  __int64 v6; // [rsp+48h] [rbp+Fh]
  char *v7; // [rsp+50h] [rbp+17h]
  _QWORD *v8; // [rsp+58h] [rbp+1Fh]
  __int64 v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  _QWORD v11[2]; // [rsp+70h] [rbp+37h] BYREF

  v5 = 4096LL;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v11[1] = a2;
  v11[0] = a1 & 0xFFF;
  v7 = &v3;
  v9 = 0LL;
  v8 = v11;
  v10 = 0LL;
  v6 = 1LL;
  return ZwSetInformationVirtualMemory();
}
