/*
 * XREFs of sub_18000AF80 @ 0x18000AF80
 * Callers:
 *     DllEntryPoint @ 0x18000AA80 (DllEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000AF80()
{
  uintptr_t v0; // rax
  uintptr_t v1; // rcx
  __int64 result; // rax
  _FILETIME v3; // [rsp+30h] [rbp+10h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp+18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+20h] BYREF

  SystemTimeAsFileTime = 0LL;
  v0 = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = SystemTimeAsFileTime;
    v3 = (_FILETIME)(GetCurrentProcessId() ^ *(unsigned __int64 *)&v3);
    v3 = (_FILETIME)(GetCurrentThreadId() ^ *(unsigned __int64 *)&v3);
    v3 = (_FILETIME)(((unsigned __int64)GetTickCount() << 24) ^ *(_QWORD *)&v3);
    v3 = (_FILETIME)((unsigned __int64)&v3 ^ *(unsigned __int64 *)&v3 ^ GetTickCount());
    QueryPerformanceCounter(&PerformanceCount);
    v0 = (*(_QWORD *)&v3 ^ PerformanceCount.QuadPart ^ ((unsigned __int64)PerformanceCount.LowPart << 32)) & 0xFFFFFFFFFFFFLL;
    v1 = v0;
    if ( v0 == 0x2B992DDFA232LL )
    {
      v0 = 0x2B992DDFA233LL;
      v1 = 0x2B992DDFA233LL;
    }
    _security_cookie = v1;
  }
  result = ~v0;
  qword_180032150 = result;
  return result;
}
