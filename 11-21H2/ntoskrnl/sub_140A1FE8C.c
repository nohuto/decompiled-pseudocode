/*
 * XREFs of sub_140A1FE8C @ 0x140A1FE8C
 * Callers:
 *     sub_1408074F4 @ 0x1408074F4 (sub_1408074F4.c)
 * Callees:
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1F9F4 @ 0x140A1F9F4 (sub_140A1F9F4.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A1FF3C @ 0x140A1FF3C (sub_140A1FF3C.c)
 */

__int64 __fastcall sub_140A1FE8C(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1408138F0(2LL, L"Exporting store alterations to efi");
  v7[1] = (__int64)v7;
  v7[0] = (__int64)v7;
  v3 = sub_140A1E890(a1, v2, v7);
  if ( v3 < 0 )
    goto LABEL_6;
  v4 = sub_140A1F9F4(a1, v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = v3;
  v3 = sub_140A1FB1C(a1, (__int64)v7);
  if ( v3 < 0 || (v3 = v5, v5 < 0) )
LABEL_6:
    sub_1408138F0(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  sub_140A1FF3C(v7);
  return (unsigned int)v3;
}
