/*
 * XREFs of sub_180007760 @ 0x180007760
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamQueryCallerTerminateReason @ 0x1800072B0 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     sub_1800079B0 @ 0x1800079B0 (sub_1800079B0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     memcpy @ 0x180016A52 (memcpy.c)
 *     memset @ 0x180016A5E (memset.c)
 */

NTSTATUS __fastcall sub_180007760(HANDLE TokenHandle, __int64 a2)
{
  NTSTATUS result; // eax
  void **Heap; // r14
  NTSTATUS TokenHostIdAsUlong64; // ebx
  void *v7; // rbx
  ULONG v8; // eax
  ULONG TokenInformationLength; // [rsp+30h] [rbp-268h] BYREF
  int v10; // [rsp+34h] [rbp-264h] BYREF
  int v11; // [rsp+38h] [rbp-260h] BYREF
  _QWORD v12[70]; // [rsp+40h] [rbp-258h] BYREF

  memset(v12, 0, 0x228uLL);
  v10 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v12, &v10, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    {
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
      if ( Heap )
      {
        TokenHostIdAsUlong64 = NtQueryInformationToken(
                                 TokenHandle,
                                 TokenUser,
                                 Heap,
                                 TokenInformationLength,
                                 &TokenInformationLength);
        if ( TokenHostIdAsUlong64 >= 0 )
        {
          v7 = *Heap;
          memset(&v12[58], 0, 0x44uLL);
          v8 = RtlLengthSid(v7);
          memcpy(&v12[58], v7, v8);
          TokenHostIdAsUlong64 = NtQueryInformationToken(
                                   TokenHandle,
                                   TokenSessionId,
                                   (char *)&v12[66] + 4,
                                   4u,
                                   &TokenInformationLength);
          if ( TokenHostIdAsUlong64 >= 0 )
          {
            TokenHostIdAsUlong64 = PsmQueryBackgroundActivationType(TokenHandle, &v11);
            if ( TokenHostIdAsUlong64 >= 0 )
            {
              LODWORD(v12[67]) = 1 << v11;
              TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v12[68]);
              if ( TokenHostIdAsUlong64 >= 0 )
              {
                sub_1800079B0(v12, &v12[58], HIDWORD(v12[66]), LODWORD(v12[67]), v12[68], a2);
                TokenHostIdAsUlong64 = 0;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return TokenHostIdAsUlong64;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
