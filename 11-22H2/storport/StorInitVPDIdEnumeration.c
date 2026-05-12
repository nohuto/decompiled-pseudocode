/*
 * XREFs of StorInitVPDIdEnumeration @ 0x1C0012DE4
 * Callers:
 *     IsBlankIdPage @ 0x1C0012BC4 (IsBlankIdPage.c)
 *     StorCompareScsiDeviceId @ 0x1C0012C3C (StorCompareScsiDeviceId.c)
 * Callees:
 *     <none>
 */

char __fastcall StorInitVPDIdEnumeration(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  char result; // al

  if ( a2[1] != 0x83 )
    return 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = (unsigned __int8)a2[3];
  *(_QWORD *)a1 = a2;
  v4 = (v3 | ((unsigned __int8)a2[2] << 8)) + 4;
  if ( v4 > 0xFFFF )
    v4 = 0xFFFF;
  result = 1;
  *(_DWORD *)(a1 + 16) = v4;
  return result;
}
