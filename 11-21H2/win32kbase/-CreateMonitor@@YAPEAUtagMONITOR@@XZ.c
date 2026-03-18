/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0068314
 * Callers:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00682EC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rbx

  v0 = (_QWORD *)HMAllocObjectEx(0LL, 0LL, 0xCu, 0x98u, 0);
  v4 = v0;
  if ( v0 )
  {
    *(_DWORD *)(v0[5] + 28LL) = 0;
    *(_DWORD *)(v0[5] + 32LL) = 0;
    *(_DWORD *)(v0[5] + 36LL) = 0;
    *(_DWORD *)(v0[5] + 40LL) = 0;
    *(_DWORD *)(v0[5] + 44LL) = 0;
    *(_DWORD *)(v0[5] + 48LL) = 0;
    *(_DWORD *)(v0[5] + 52LL) = 0;
    *(_DWORD *)(v0[5] + 56LL) = 0;
    v0[14] = 0LL;
    v0[15] = 0LL;
  }
  else
  {
    UserSetLastError(8LL, v1, v2, v3);
  }
  return (struct tagMONITOR *)v4;
}
