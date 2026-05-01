/*
 * XREFs of ___security_init_cookie @ 0x1000713B
 * Callers:
 *     __DllMainCRTStartup@12 @ 0x10006A10 (__DllMainCRTStartup@12.c)
 * Callees:
 *     <none>
 */

void __cdecl __security_init_cookie()
{
  uintptr_t v0; // eax
  uintptr_t v1; // ecx
  LARGE_INTEGER PerformanceCount; // [esp+8h] [ebp-14h] BYREF
  _FILETIME SystemTimeAsFileTime; // [esp+10h] [ebp-Ch] BYREF
  DWORD v4; // [esp+18h] [ebp-4h] BYREF

  SystemTimeAsFileTime.dwLowDateTime = 0;
  SystemTimeAsFileTime.dwHighDateTime = 0;
  v0 = __security_cookie;
  if ( __security_cookie == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
    v4 ^= GetCurrentProcessId();
    v4 ^= GetCurrentThreadId();
    v4 ^= (unsigned int)&v4 ^ GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v0 = v4 ^ PerformanceCount.LowPart ^ PerformanceCount.HighPart;
    v1 = v0;
    if ( v0 == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
    {
      v0 = -1153374641;
      v1 = -1153374641;
    }
    __security_cookie = v1;
  }
  __security_cookie_complement = ~v0;
}
