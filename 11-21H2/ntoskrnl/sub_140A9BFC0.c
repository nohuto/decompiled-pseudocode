/*
 * XREFs of sub_140A9BFC0 @ 0x140A9BFC0
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8CE34 @ 0x140A8CE34 (sub_140A8CE34.c)
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_14055F1D4 @ 0x14055F1D4 (sub_14055F1D4.c)
 *     sub_140AA5AF8 @ 0x140AA5AF8 (sub_140AA5AF8.c)
 */

PSLIST_ENTRY __fastcall sub_140A9BFC0(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  __int64 v3; // rdx
  PSLIST_ENTRY v4; // rbx

  if ( sub_14055F1D4() )
    return 0LL;
  v2 = sub_140202234((__int64)&unk_140D590C0);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  _InterlockedIncrement(&dword_140C1A918);
  *((_DWORD *)&v2[3].Next + 2) = 0;
  *((_QWORD *)&v2[4].Next + 1) = v2 + 4;
  v2[4].Next = v2 + 4;
  LOBYTE(v2[5].Next) = *(_BYTE *)(a1 + 66);
  v2[6].Next = 0LL;
  *((_BYTE *)&v2[6].Next + 8) = 0;
  v2[7].Next = 0LL;
  *((_WORD *)&v2[11].Next + 4) = 0;
  *((_BYTE *)&v2[11].Next + 10) = 0;
  *((_DWORD *)&v2[11].Next + 3) = 0;
  v2[15].Next = 0LL;
  HIDWORD(v2[5].Next) = 0;
  *((_QWORD *)&v2[5].Next + 1) = 0LL;
  v2[12].Next = 0LL;
  *((_QWORD *)&v2[12].Next + 1) = 0LL;
  LODWORD(v2[13].Next) = 0;
  *((_QWORD *)&v2[13].Next + 1) = 0LL;
  *((_QWORD *)&v2[15].Next + 1) = 0LL;
  v2[14].Next = 0LL;
  *((_DWORD *)&v2[14].Next + 2) = dword_140C29FC0;
  sub_140AA5AF8(a1, v3, v2);
  return v4;
}
