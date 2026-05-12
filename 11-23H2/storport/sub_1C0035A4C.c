/*
 * XREFs of sub_1C0035A4C @ 0x1C0035A4C
 * Callers:
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 * Callees:
 *     sub_1C005C8CC @ 0x1C005C8CC (sub_1C005C8CC.c)
 *     sub_1C0078B80 @ 0x1C0078B80 (sub_1C0078B80.c)
 */

NTSTATUS __fastcall sub_1C0035A4C(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  HANDLE *v4; // rsi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1920) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1912), 0);
  v3 = *(unsigned __int8 *)(a1 + 416);
  if ( *(_BYTE *)(a1 + 416) )
  {
    v4 = (HANDLE *)(a1 + 2016);
    do
    {
      if ( v1 >= 0xFF )
        break;
      ZwClose(*v4);
      ++v1;
      ++v4;
    }
    while ( v1 < v3 );
  }
  result = sub_1C0078B80(*(unsigned int *)(a1 + 56));
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    result = sub_1C005C8CC();
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
