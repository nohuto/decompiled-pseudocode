/*
 * XREFs of ExpRaiseHardError @ 0x1406CDFAC
 * Callers:
 *     NtRaiseHardError @ 0x1406CDD90 (NtRaiseHardError.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x14042B7A0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x14079FFE8 (PsCaptureExceptionPort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        int a3,
        void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  int v9; // r8d
  _KPROCESS **CurrentServerSiloGlobals; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char v14; // dl
  _KPROCESS *Process; // r10
  int v16; // r11d
  _KPROCESS *v17; // rdi
  char v18; // si
  int v19; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  bool v23; // zf
  int v24; // eax
  int v25; // r14d
  __int64 v26; // [rsp+20h] [rbp-358h]
  __int64 v29; // [rsp+60h] [rbp-318h] BYREF
  void *Src; // [rsp+68h] [rbp-310h]
  unsigned int *v31; // [rsp+70h] [rbp-308h]
  _DWORD v32[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-2C8h]
  int v34; // [rsp+B8h] [rbp-2C0h]
  unsigned int v35; // [rsp+BCh] [rbp-2BCh]
  unsigned int v36; // [rsp+C0h] [rbp-2B8h]
  int v37; // [rsp+C4h] [rbp-2B4h]
  char v38[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  Src = a4;
  v29 = (__int64)a4;
  v31 = a7;
  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = 0;
  *a7 = 0;
  if ( v13 > 0x4D )
    return 3221225485LL;
  v14 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v14 = 1;
    v9 = a3;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v16 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v14) )
  {
    LOBYTE(v26) = PreviousMode != 0;
    ExpSystemErrorHandler(a1, a2, v9, a5, v26);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
    {
      LOBYTE(v26) = PreviousMode != 0;
      ExpSystemErrorHandler(a1, a2, v9, a5, v26);
    }
    goto LABEL_15;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !v16 && ((Process[1].ActiveProcessors.StaticBitmap[9] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v17 = (_KPROCESS *)PsCaptureExceptionPort(Process);
    if ( v17 )
      v18 = 1;
    else
      v17 = CurrentServerSiloGlobals[111];
  }
  if ( v17
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) == 0)
     && CurrentThread->ApcStateIndex != 1
      ? (Teb = CurrentThread->Teb)
      : (Teb = 0LL),
        Teb) )
  {
    v23 = (Teb[5808] & 0x10) == 0;
    v24 = 0;
    if ( !v23 )
      v24 = -1073741823;
    v19 = a3;
    if ( v24 < 0 )
    {
      if ( v18 == 1 )
        ObfDereferenceObject(v17);
      v17 = 0LL;
    }
  }
  else
  {
    v19 = a3;
  }
  if ( !v17 )
  {
LABEL_15:
    *a7 = 0;
    return 0LL;
  }
  v32[0] = 7340104;
  v32[1] = 9;
  v32[10] = a1 & 0xEFFFFFFF;
  v34 = a6;
  v37 = v19;
  v36 = a2;
  if ( Src )
    memmove(v38, Src, 8LL * a2);
  v33 = MEMORY[0xFFFFF78000000014];
  v29 = 688LL;
  v25 = LpcSendWaitReceivePort((_DWORD)v17, 0x20000, (unsigned int)v32, (unsigned int)v32, (__int64)&v29, 0LL);
  if ( v18 == 1 )
    ObfDereferenceObject(v17);
  if ( v25 >= 0 )
  {
    if ( v35 <= 0xA )
      v12 = v35;
    *a7 = v12;
  }
  return (unsigned int)v25;
}
