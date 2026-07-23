/*
 * XREFs of sub_140A69694 @ 0x140A69694
 * Callers:
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall sub_140A69694(int a1)
{
  _DWORD Context[6]; // [rsp+20h] [rbp-28h] BYREF

  Context[0] = a1;
  Context[1] = HIDWORD(KeGetPcr()[1].LockArray);
  Context[2] = dword_140D06884 - 1;
  Context[3] = dword_140D06884 - 1;
  Context[4] = 0;
  return KeIpiGenericCall(sub_140A69710, (ULONG_PTR)Context);
}
