/*
 * XREFs of sub_140510C60 @ 0x140510C60
 * Callers:
 *     sub_140510DA4 @ 0x140510DA4 (sub_140510DA4.c)
 *     sub_140527CD0 @ 0x140527CD0 (sub_140527CD0.c)
 *     sub_140527F70 @ 0x140527F70 (sub_140527F70.c)
 *     sub_140528900 @ 0x140528900 (sub_140528900.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall sub_140510C60(__int64 a1)
{
  unsigned int v2; // ebx
  NTSTATUS DevicePropertyData; // eax
  ULONG v5; // [rsp+50h] [rbp+8h] BYREF
  ULONG v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  v5 = 0;
  v2 = 0;
  DevicePropertyData = IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &stru_140017C08, 0, 0, 4u, &v7, &v6, &v5);
  if ( DevicePropertyData >= 0 && v5 == 7 && v6 == 4 )
  {
    if ( v7 )
    {
      if ( v7 != 1 )
        return v2;
      v2 = 5;
    }
    else
    {
      v2 = 7;
    }
  }
  else
  {
    v2 = 5;
    if ( DevicePropertyData == -1073741772 )
      v2 = 7;
  }
  if ( !byte_140C4BCBC && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL) & 0x180) == 0 )
    v2 &= 0xFFFFFFFA;
  return v2;
}
