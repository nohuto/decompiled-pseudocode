/*
 * XREFs of ProcessDelayedSdc @ 0x1C0135480
 * Callers:
 *     PowerOnGdi @ 0x1C0135390 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

__int64 ProcessDelayedSdc()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-48h]
  char v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]

  if ( *(_DWORD *)(((__int64 (*)(void))SGDGetUserGdiSessionState)() + 16) && !gProtocolType )
  {
    v5 = ((__int64 (*)(void))SGDGetUserGdiSessionState)();
    v8 = 0LL;
    v7 = 0;
    v6 = grpdeskRitInput;
    xxxUserSetDisplayConfig(0LL, 0LL, *(unsigned int *)(v5 + 16), 0LL);
  }
  result = SGDGetUserGdiSessionState(v1, v0, v2, v3, v6, v7, v8);
  *(_DWORD *)(result + 16) = 0;
  return result;
}
