/*
 * XREFs of sub_1C003B630 @ 0x1C003B630
 * Callers:
 *     sub_1C0045D24 @ 0x1C0045D24 (sub_1C0045D24.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C003B630(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v3; // r9
  int v5; // ecx

  v3 = **(_QWORD **)(a1 - 16);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 4596) & 2) == 0
      || *a2 >= *(_WORD *)(v3 + 4598)
      || (v5 = *(unsigned __int8 *)(*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6) + *(_QWORD *)(v3 + 4616)),
          *a3 = v5,
          v5 == 255) )
    {
      *a3 = 0;
    }
    return 0LL;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 34LL, &unk_1C0083210);
    }
    return 3238002694LL;
  }
}
