/*
 * XREFs of NtPlugPlayControl @ 0x1406D4170
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BC8C (PiControlFreeUserModeCallersBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D42A0 (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  __int64 v4; // rdi
  char PreviousMode; // si
  __int64 *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // r9
  NTSTATUS v9; // ebx
  int UserModeCallersCopy; // eax
  int v11; // [rsp+20h] [rbp-28h]
  PVOID v12; // [rsp+58h] [rbp+10h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = PnPControlData;
  v4 = (unsigned int)PnPControlClass;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  if ( (unsigned int)v4 >= 0x18 )
    return -1073741585;
  v6 = &PlugPlayHandlerTable[3 * v4];
  if ( *(_DWORD *)v6 != (_DWORD)v4 )
    return -1073741595;
  if ( !v6 )
    return -1073741585;
  if ( !v6[1] )
    return -1073741822;
  if ( *((_DWORD *)v6 + 1) != PnPControlDataLength )
    return -1073741776;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v6 + 16) )
    return -1073741727;
  v13 = 0LL;
  result = PiControlMakeUserModeCallersCopy(&v13, v12, PnPControlDataLength, 4LL, PreviousMode, 1);
  if ( result >= 0 )
  {
    LOBYTE(v8) = PreviousMode;
    v9 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, __int64))v6[1])(
           (unsigned int)v4,
           v13,
           PnPControlDataLength,
           v8);
    if ( (v9 & 0xC0000000) != 0xC0000000 || v9 == -1073741789 )
    {
      LOBYTE(v11) = PreviousMode;
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v12, v13, PnPControlDataLength, 4LL, v11, 0);
      if ( UserModeCallersCopy < 0 )
        v9 = UserModeCallersCopy;
    }
    if ( v9 == -1073741738 )
      v9 = -1073741810;
    PiControlFreeUserModeCallersBuffer(PreviousMode, v13);
    return v9;
  }
  return result;
}
