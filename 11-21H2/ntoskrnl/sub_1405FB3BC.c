/*
 * XREFs of sub_1405FB3BC @ 0x1405FB3BC
 * Callers:
 *     sub_1405F9B18 @ 0x1405F9B18 (sub_1405F9B18.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1405FB3BC(REGHANDLE *a1, __int64 a2, __int64 a3, void *a4, char a5, __int64 *a6)
{
  BOOLEAN result; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  REGHANDLE v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-69h] BYREF
  void *v12; // [rsp+48h] [rbp-61h] BYREF
  PHYSICAL_ADDRESS v13; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void **v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+7Ch] [rbp-2Dh]
  PHYSICAL_ADDRESS *v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+88h] [rbp-21h]
  int v20; // [rsp+8Ch] [rbp-1Dh]
  char *v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  __int64 *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  char *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  char *v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]
  __int64 v33; // [rsp+110h] [rbp+67h] BYREF

  v33 = a3;
  v12 = a4;
  v11 = *a6;
  result = EtwEventEnabled(*a1, (PCEVENT_DESCRIPTOR)qword_140038918);
  if ( result )
  {
    UserData.Reserved = 0;
    v17 = 0;
    UserData.Ptr = (ULONGLONG)&v33;
    v15 = &v12;
    UserData.Size = 8;
    v16 = 8;
    PhysicalAddress = MmGetPhysicalAddress(a4);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v10 = *a1;
    v13 = PhysicalAddress;
    v18 = &v13;
    v21 = &a5;
    v24 = &v11;
    v27 = (char *)&v11 + 1;
    v30 = (char *)&v11 + 4;
    v19 = 8;
    v22 = 2;
    v25 = 1;
    v28 = 1;
    v31 = 4;
    return EtwWriteEx(v10, (PCEVENT_DESCRIPTOR)qword_140038918, 0LL, 1u, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
