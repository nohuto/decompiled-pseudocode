/*
 * XREFs of sub_1402943C0 @ 0x1402943C0
 * Callers:
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402943C0(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rdi
  __int64 result; // rax
  _DWORD v5[68]; // [rsp+30h] [rbp-128h] BYREF

  v3 = (unsigned int)BugCheckParameter3;
  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx(v5, (unsigned int)v3);
  result = HalRequestIpiSpecifyVector(0LL, v5, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}
