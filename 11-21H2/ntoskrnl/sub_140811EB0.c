/*
 * XREFs of sub_140811EB0 @ 0x140811EB0
 * Callers:
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_1403A7778 @ 0x1403A7778 (sub_1403A7778.c)
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_1408074F4 @ 0x1408074F4 (sub_1408074F4.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_140811EB0(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = sub_14025DBFC(a1);
  v5 = v4;
  if ( (v6 & 4) != 0 && sub_1403A7778(v4) )
  {
    sub_1408138F0(2LL, L"Exporting alterations to firmware.");
    v8 = sub_1408074F4(v5);
    v3 = v8;
    if ( v8 < 0 )
      sub_1408138F0(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      sub_1403A7718(v5, 0);
  }
  if ( (a2 & 2) != 0 )
    sub_140807354(v5, 0);
  else
    sub_1408132F0(v5);
  return v3;
}
