/*
 * XREFs of sub_140B2D708 @ 0x140B2D708
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2D708()
{
  NTSTATUS v0; // eax
  NTSTATUS v1; // edi
  _DWORD *Pool2; // rax
  _BYTE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[0] = 1094930505;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v0 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  v1 = v0;
  if ( v0 != -1073741789 )
  {
    v3 = 0LL;
    if ( v0 >= 0 )
      goto LABEL_28;
LABEL_32:
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ReturnLength, 0x206D654Du);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
    goto LABEL_32;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = ReturnLength - 16;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
  if ( v1 < 0 )
    goto LABEL_32;
  if ( v3[24] >= 3u )
    dword_140D06A88 = (unsigned __int8)v3[61];
  if ( (unsigned __int8)sub_14042A5E0(v5, v4) )
    byte_140C5AC3C = 1;
  if ( dword_140D05244 != -1 )
    dword_140D06A88 = dword_140D05244;
  if ( dword_140D050D8 != -1 )
    byte_140C5AC3C = dword_140D050D8 != 0;
  if ( (dword_140D0688C & 2) != 0 )
  {
    v6 = (dword_140D06A28 & 0x10000) != 0 ? 16 : 31;
    if ( (dword_140D068B8 & 0x400) != 0 )
    {
      LOBYTE(v6) = 31;
      if ( (dword_140D0689C & 0x20000000) != 0 )
        LOBYTE(v6) = 23;
    }
    sub_140810E2C(18, v6, 0LL, 0LL);
  }
  if ( byte_140C5AC3C )
  {
    if ( !(_DWORD)InitSafeBootMode && !byte_140C4E508 && !dword_140D06CFC )
      goto LABEL_25;
  }
  else
  {
    sub_140810E2C(19, 32, 0LL, 0LL);
  }
  byte_140C5AC3C = 0;
LABEL_25:
  v7 = dword_140D06A88;
  if ( (unsigned int)dword_140D06A88 > 8 )
  {
    v7 = 0;
    dword_140D06A88 = 0;
  }
  dword_140C5AC38 = v7;
  v1 = 0;
LABEL_28:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x206D654Du);
  return (unsigned int)v1;
}
