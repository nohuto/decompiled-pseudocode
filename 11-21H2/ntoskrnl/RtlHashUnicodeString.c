/*
 * XREFs of RtlHashUnicodeString @ 0x14078C240
 * Callers:
 *     sub_14025B940 @ 0x14025B940 (sub_14025B940.c)
 *     sub_1402E08A0 @ 0x1402E08A0 (sub_1402E08A0.c)
 *     sub_1406054D0 @ 0x1406054D0 (sub_1406054D0.c)
 *     sub_140696468 @ 0x140696468 (sub_140696468.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_1406EA8C0 @ 0x1406EA8C0 (sub_1406EA8C0.c)
 *     sub_1407460F8 @ 0x1407460F8 (sub_1407460F8.c)
 *     sub_14078A988 @ 0x14078A988 (sub_14078A988.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 *     sub_14078D510 @ 0x14078D510 (sub_14078D510.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 *     sub_14098E64C @ 0x14098E64C (sub_14098E64C.c)
 *     sub_14098E79C @ 0x14098E79C (sub_14098E79C.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v5; // ebx
  char v6; // dl
  __int64 v7; // rdi
  unsigned int v8; // r8d
  _DWORD *v9; // r9
  unsigned __int16 *v10; // r10
  unsigned __int16 *v11; // r11
  int v12; // r10d
  int v13; // r10d
  int v15; // ecx

  v5 = 0;
  v7 = *((_QWORD *)sub_140347DB0() + 154);
  if ( !v10 )
    return -1073741811;
  if ( !v9 )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
  *v9 = 0;
  v12 = *v10 >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
        v5 = sub_1403477B0(v7, *v11) + 65599 * v5;
      while ( v13 != 1 );
    }
    else
    {
      do
      {
        v15 = *v11++;
        v5 = v15 + 65599 * v5;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v5;
  return 0;
}
