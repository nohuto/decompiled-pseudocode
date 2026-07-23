/*
 * XREFs of IoReadDiskSignature @ 0x1409305C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadDiskSignature(PDEVICE_OBJECT DeviceObject, ULONG BytesPerSector, PDISK_SIGNATURE Signature)
{
  __int64 v4; // r9
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  char *v9; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v12[48]; // [rsp+30h] [rbp-198h] BYREF

  sub_140650C18((__int64)v12);
  v12[47] = 0LL;
  P[0] = 0LL;
  v12[0] = off_140006F60;
  v5 = sub_140930388((__int64)v12, v4);
  if ( v5 >= 0 )
  {
    v8 = sub_140651304((__int64)v12, P, v6, v7);
    v9 = (char *)P[0];
    v5 = v8;
    if ( v8 >= 0 )
    {
      Signature->PartitionStyle = *(_DWORD *)P[0];
      if ( *(_DWORD *)v9 )
      {
        if ( *(_DWORD *)v9 == 1 )
          Signature->4 = *(union _DISK_SIGNATURE::$9D353A9A2948DD7B98BCBBCC4F8D6995 *)(v9 + 8);
        else
          v5 = -1073741637;
      }
      else
      {
        Signature->Mbr.Signature = *((_DWORD *)v9 + 2);
        Signature->Mbr.CheckSum = *((_DWORD *)v9 + 3);
      }
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  v12[0] = off_140006F60;
  sub_140650D38(v12);
  return v5;
}
