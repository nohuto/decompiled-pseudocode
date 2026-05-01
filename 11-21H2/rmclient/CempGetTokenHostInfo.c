/*
 * XREFs of CempGetTokenHostInfo @ 0x180007FD0
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamQueryCallerTerminateReason @ 0x180007B20 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x180008220 (CempHostInfoInitialize.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180015702 (memcpy_0.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

NTSTATUS __fastcall CempGetTokenHostInfo(HANDLE TokenHandle, unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  void **Heap; // r14
  NTSTATUS v6; // ebx
  void *v7; // rbx
  ULONG v8; // eax
  ULONG TokenInformationLength; // [rsp+30h] [rbp-268h] BYREF
  int v10; // [rsp+34h] [rbp-264h] BYREF
  int v11; // [rsp+38h] [rbp-260h] BYREF
  unsigned __int16 v12[232]; // [rsp+40h] [rbp-258h] BYREF
  _BYTE SourceSid[68]; // [rsp+210h] [rbp-88h] BYREF
  _DWORD TokenInformation[3]; // [rsp+254h] [rbp-44h] BYREF
  __int64 v15; // [rsp+260h] [rbp-38h] BYREF

  memset_0(v12, 0, 0x228uLL);
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
        v6 = NtQueryInformationToken(TokenHandle, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
        if ( v6 >= 0 )
        {
          v7 = *Heap;
          memset_0(SourceSid, 0, sizeof(SourceSid));
          v8 = RtlLengthSid(v7);
          memcpy_0(SourceSid, v7, v8);
          v6 = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &TokenInformationLength);
          if ( v6 >= 0 )
          {
            v6 = PsmQueryBackgroundActivationType(TokenHandle, &v11);
            if ( v6 >= 0 )
            {
              TokenInformation[1] = 1 << v11;
              v6 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v15);
              if ( v6 >= 0 )
              {
                CempHostInfoInitialize(v12, SourceSid, v15, a2);
                v6 = 0;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v6;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
