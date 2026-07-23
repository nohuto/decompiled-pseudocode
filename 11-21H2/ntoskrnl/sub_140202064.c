/*
 * XREFs of sub_140202064 @ 0x140202064
 * Callers:
 *     sub_1406D8260 @ 0x1406D8260 (sub_1406D8260.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140202064(__int64 a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  int v4; // eax
  int v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = RegHandle;
  result = EtwEventEnabled(RegHandle, &stru_14000E478);
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 1088);
    v4 = (*(_DWORD *)(a1 + 2172) >> 26) & 1;
    *(_QWORD *)&UserData.Size = 4LL;
    v5 = v4;
    UserData.Ptr = (ULONGLONG)&v5;
    v8 = &v6;
    v9 = 4LL;
    return EtwWriteEx(v1, &stru_14000E478, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
