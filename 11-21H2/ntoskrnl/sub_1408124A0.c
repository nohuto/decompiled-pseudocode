/*
 * XREFs of sub_1408124A0 @ 0x1408124A0
 * Callers:
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 *     sub_14081D368 @ 0x14081D368 (sub_14081D368.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_1403A78AC @ 0x1403A78AC (sub_1403A78AC.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140812540 @ 0x140812540 (sub_140812540.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_1408124A0(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v11; // r8d

  LOBYTE(v2) = sub_1403A7864(a1);
  v3 = v2;
  v4 = sub_14081369C(v2);
  if ( v4 < 0 )
  {
    sub_1408138F0(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)sub_1408127B8(a1, v5, (unsigned int)v4) )
    {
      v6 = sub_1403A78AC(a1) ? 4 : 0;
      if ( (unsigned __int8)sub_140812540() )
        v6 |= 2u;
    }
    else
    {
      v6 = 2;
    }
    sub_1408138F0(2LL, L"Closing store. Flags: 0x%x", v6);
    v7 = sub_140811EB0(a1, v6);
    LOBYTE(v8) = v3;
    v9 = v7;
    sub_1408134D8(v8);
    return v9;
  }
}
