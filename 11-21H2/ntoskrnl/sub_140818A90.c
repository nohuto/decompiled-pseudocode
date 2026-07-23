/*
 * XREFs of sub_140818A90 @ 0x140818A90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_140807EA4 @ 0x140807EA4 (sub_140807EA4.c)
 *     sub_140817BC8 @ 0x140817BC8 (sub_140817BC8.c)
 *     sub_140818BFC @ 0x140818BFC (sub_140818BFC.c)
 *     sub_140818D14 @ 0x140818D14 (sub_140818D14.c)
 *     sub_1408603A8 @ 0x1408603A8 (sub_1408603A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140818A90(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rcx
  int v5; // eax
  char v6; // di
  const wchar_t *v7; // rdx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C166E0, 0LL);
  if ( !(unsigned int)sub_140818BFC() )
    goto LABEL_32;
  if ( dword_140C166E8 != v1 - 1 )
  {
    switch ( v1 )
    {
      case 3:
        if ( dword_140C166E8 == 1 )
          goto LABEL_14;
        break;
      case 7:
LABEL_11:
        sub_140807EA4();
        v4 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
LABEL_12:
        v5 = sub_140817BC8((__int64)v4);
        goto LABEL_13;
      case 5:
LABEL_31:
        v4 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        goto LABEL_12;
    }
    if ( v1 < dword_140C166E8 )
    {
      v1 = dword_140C166E8;
      goto LABEL_14;
    }
    goto LABEL_32;
  }
  if ( v1 == 1 )
  {
    v4 = L"Diagnostics\\Performance\\BootCKCLSettings";
    goto LABEL_12;
  }
  v3 = (unsigned int)(v1 - 2);
  if ( v1 == 2 )
  {
    v7 = L"WaitingForLogonEnableKernelFlags";
LABEL_19:
    v5 = sub_1408603A8(v3, v7);
LABEL_13:
    if ( v5 >= 0 )
      goto LABEL_14;
LABEL_32:
    dword_140C166E8 = 8;
    goto LABEL_15;
  }
  v3 = (unsigned int)(v1 - 3);
  if ( v1 == 3 )
  {
    v7 = L"EnableKernelFlags";
    goto LABEL_19;
  }
  if ( v1 != 4 )
  {
    if ( v1 != 5 )
    {
      if ( v1 == 6 )
        goto LABEL_8;
      if ( v1 != 7 )
        goto LABEL_14;
      goto LABEL_11;
    }
    goto LABEL_31;
  }
LABEL_8:
  sub_140818D14(0LL, 0LL);
  NtTraceControl(
    EtwStopLoggerCode,
    &InputBufferLength,
    InputBufferLength,
    &InputBufferLength,
    InputBufferLength,
    &ReturnLength);
LABEL_14:
  dword_140C166E8 = v1;
LABEL_15:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C166E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C166E0);
  sub_1402AFC00((ULONG_PTR)&qword_140C166E0);
  sub_1402F9540((__int64)KeGetCurrentThread());
}
