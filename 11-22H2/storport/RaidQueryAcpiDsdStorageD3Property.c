/*
 * XREFs of RaidQueryAcpiDsdStorageD3Property @ 0x1C005A498
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C005A56C (RaidQueryAcpiDsdSynchronous.c)
 */

char __fastcall RaidQueryAcpiDsdStorageD3Property(__int64 a1, _DWORD *a2)
{
  char v4; // di
  struct _DEVICE_OBJECT *v5; // rcx
  _DWORD v7[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp-CCh]
  int v9; // [rsp+40h] [rbp-C8h]
  int InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  GUID v11; // [rsp+54h] [rbp-B4h]
  int v12; // [rsp+64h] [rbp-A4h]
  char v13[136]; // [rsp+68h] [rbp-A0h] BYREF

  *a2 = -1;
  v4 = 0;
  memset_0(v7, 0, 0xC0uLL);
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  InputBuffer = 1214866753;
  v11 = GUID_STORAGE_ACPI_DSD_D3_ENABLE;
  v12 = 16;
  strcpy(v13, "StorageD3Enable");
  if ( (int)RaidQueryAcpiDsdSynchronous(v5, &InputBuffer) >= 0 && v7[0] == 1114596673 && v7[2] == 1 && !v8 )
  {
    v4 = 1;
    *a2 = v9;
  }
  return v4;
}
