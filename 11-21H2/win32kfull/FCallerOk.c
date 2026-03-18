/*
 * XREFs of FCallerOk @ 0x1C00E464C
 * Callers:
 *     xxxSetWindowLong @ 0x1C00E4444 (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C014CF8C (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HANDLE v12; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v4 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v4 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v7 = 0;
  if ( (unsigned __int8)Enforced(v4) )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  if ( *(_DWORD *)(v10 + 780) == *(_DWORD *)(v11 + 780) )
    return *(_DWORD *)(v10 + 784) == *(_DWORD *)(v11 + 784);
  return v7;
}
