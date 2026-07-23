/*
 * XREFs of sub_140398D58 @ 0x140398D58
 * Callers:
 *     sub_1403AD4F0 @ 0x1403AD4F0 (sub_1403AD4F0.c)
 *     sub_1405430C0 @ 0x1405430C0 (sub_1405430C0.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140398D58(__int64 a1, char a2)
{
  char result; // al
  char Context; // [rsp+20h] [rbp-38h] BYREF
  __int16 Context_1; // [rsp+21h] [rbp-37h]
  char Context_3; // [rsp+23h] [rbp-35h]
  int Context_4; // [rsp+24h] [rbp-34h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  ULONG ActiveProcessorCount; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]

  result = 0;
  Context_1 = 0;
  Context_3 = 0;
  v10 = 0LL;
  if ( a1 >= 0 )
  {
    Context_4 = *((_DWORD *)KeGetCurrentPrcb() + 9);
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v9 = a1;
    Context = a2;
    v12 = 1;
    KeIpiGenericCall(BroadcastFunction, (ULONG_PTR)&Context);
    return 1;
  }
  return result;
}
