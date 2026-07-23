/*
 * XREFs of ExpRaiseHardError @ 0x140A00F68
 * Callers:
 *     ExRaiseHardError @ 0x140A00C30 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x140A01300 (NtRaiseHardError.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x14042A720 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x14076E8B0 (PsCaptureExceptionPort.c)
 *     LpcSendWaitReceivePort @ 0x1407E64C0 (LpcSendWaitReceivePort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  _KPROCESS **CurrentServerSiloGlobals; // r14
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int v12; // edx
  char v14; // dl
  _KPROCESS *Process; // r10
  int v16; // r11d
  _KPROCESS *v17; // rbx
  char v18; // di
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  int v21; // eax
  const void *v22; // r14
  int v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int64 v31[3]; // [rsp+68h] [rbp-310h] BYREF
  __int128 v32[2]; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp-2D0h]
  __int64 v34; // [rsp+B0h] [rbp-2C8h]
  int v35; // [rsp+B8h] [rbp-2C0h]
  unsigned int v36; // [rsp+BCh] [rbp-2BCh]
  unsigned int v37; // [rsp+C0h] [rbp-2B8h]
  unsigned int v38; // [rsp+C4h] [rbp-2B4h]
  char v39[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  v31[0] = a4;
  v31[1] = (unsigned __int64)a7;
  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( v12 > 0x4D )
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
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v16 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v14) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !v16 && ((Process[1].ActiveProcessors.StaticBitmap[9] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v17 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v17 )
      v18 = 1;
    else
      v17 = CurrentServerSiloGlobals[111];
  }
  if ( v17
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v26 = (Teb[5808] & 0x10) == 0;
    v21 = 0;
    if ( !v26 )
      v21 = -1073741823;
    v22 = (const void *)a4;
    if ( v21 < 0 )
    {
      if ( v18 == 1 )
        ObfDereferenceObject(v17);
      v17 = 0LL;
    }
  }
  else
  {
    v22 = (const void *)a4;
  }
  if ( !v17 )
    goto LABEL_37;
  *(_QWORD *)&v32[0] = 0x900700048LL;
  v33 = a1 & 0xEFFFFFFF;
  v35 = a6;
  v38 = a3;
  v37 = a2;
  if ( v22 )
    memmove(v39, v22, 8LL * a2);
  v34 = MEMORY[0xFFFFF78000000014];
  v31[0] = 688LL;
  v23 = LpcSendWaitReceivePort((__int64)v17, 0x20000, v32, (unsigned __int64)v32, v31, 0LL);
  if ( v18 == 1 )
    ObfDereferenceObject(v17);
  if ( v23 >= 0 )
  {
    v24 = v36;
    v25 = v36;
    if ( v36 > 5 )
    {
      v24 = v36 - 6;
      v26 = v36 == 6;
    }
    else
    {
      if ( v36 == 5 )
      {
LABEL_52:
        *a7 = v25;
        return (unsigned int)v23;
      }
      v26 = v36 == 0;
    }
    if ( !v26 )
    {
      v27 = v24 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 - 1 >= 2 )
            v25 = 0;
        }
      }
    }
    goto LABEL_52;
  }
  return (unsigned int)v23;
}
