/*
 * XREFs of PopPluginUnregisterDevice @ 0x14058D06C
 * Callers:
 *     PopFxUnregisterDevice @ 0x140985FC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginUnregisterDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64 *); // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 96);
  v5 = a2;
  result = v2(4LL, &v5);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
