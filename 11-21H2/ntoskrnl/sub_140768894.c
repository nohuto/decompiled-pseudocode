/*
 * XREFs of sub_140768894 @ 0x140768894
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_1408648F8 @ 0x1408648F8 (sub_1408648F8.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwOpenSession @ 0x14041DDC0 (ZwOpenSession.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140768894(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  HANDLE v7; // rsi
  unsigned int v11; // r14d
  NTSTATUS v12; // ebx
  struct _ERESOURCE *Pool2; // rax
  unsigned int v15; // eax
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
  if ( !sub_140359DE0(a3) )
    goto LABEL_2;
  v15 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  v11 = v15;
  if ( v15 == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", v15);
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
