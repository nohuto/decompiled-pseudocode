/*
 * XREFs of PnpInitializeNotifyEntry @ 0x14068840C
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140863E4C (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x1402BCA70 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwOpenSession @ 0x14041D790 (ZwOpenSession.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  HANDLE v7; // rsi
  unsigned int v11; // r14d
  NTSTATUS v12; // ebx
  struct _ERESOURCE *Pool2; // rax
  unsigned int SessionId; // eax
  HANDLE SessionHandle; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE SessionHandle_8[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+50h] [rbp-B8h]
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t Dst[256]; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)&v19 = 0LL;
  v7 = 0LL;
  DWORD2(v19) = 0;
  SessionHandle = 0LL;
  *(_OWORD *)SessionHandle_8 = 0LL;
  v18 = 0LL;
  v11 = 0;
  DestinationString_8 = 0LL;
  v12 = 0;
  if ( !MmIsSessionAddress(a3) )
    goto LABEL_2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString_8, Dst);
  SessionHandle_8[1] = 0LL;
  *(_QWORD *)&v18 = &DestinationString_8;
  LODWORD(SessionHandle_8[0]) = 48;
  DWORD2(v18) = 512;
  v19 = 0LL;
  v12 = ZwOpenSession(&SessionHandle, 0, (POBJECT_ATTRIBUTES)SessionHandle_8);
  if ( v12 < 0 || (v7 = SessionHandle) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_2:
    *(_QWORD *)(a1 + 48) = a5;
    *(_QWORD *)(a1 + 8) = a1;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_QWORD *)a1 = a1;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1450208848LL);
    *(_QWORD *)(a1 + 72) = Pool2;
    if ( Pool2 )
      ExInitializeResourceLite(Pool2);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
