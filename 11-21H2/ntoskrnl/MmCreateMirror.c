/*
 * XREFs of MmCreateMirror @ 0x14096BA60
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE v0; // dl
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int v5; // [rsp+64h] [rbp-Ch]
  int Data; // [rsp+80h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+20h] BYREF

  v5 = 0;
  Type = 0;
  Data = 0;
  ValueName.Buffer = L"Kernel-MemoryMirroringSupported";
  *(_QWORD *)&ValueName.Length = 4194366LL;
  ResultDataSize = 4;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0 || Data != 1 )
    return -1073741206;
  v0 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v0 && !SeSinglePrivilegeCheck(stru_140D3CAB8, v0) )
    return -1073741727;
  if ( (dword_140D051C4 & 1) == 0 )
    return -1073741637;
  v3[0] = off_140C02150[0];
  v3[1] = off_140C02158[0];
  v3[2] = off_140C02160[0];
  v3[3] = (unsigned __int64)off_140C02170 & -(__int64)((dword_140D051C4 & 2) != 0);
  v4 = 2;
  return sub_140A487C0(v3);
}
