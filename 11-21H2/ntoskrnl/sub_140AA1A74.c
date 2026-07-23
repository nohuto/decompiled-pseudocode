/*
 * XREFs of sub_140AA1A74 @ 0x140AA1A74
 * Callers:
 *     sub_140AA4854 @ 0x140AA4854 (sub_140AA4854.c)
 * Callees:
 *     sub_14022E9C8 @ 0x14022E9C8 (sub_14022E9C8.c)
 *     sub_140242424 @ 0x140242424 (sub_140242424.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140AA1A74(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // rdi

  if ( (qword_140D068D8 & 0x800000) != 0 && MEMORY[0xFFFFF780000003D8] )
  {
    qword_140D57660 = MEMORY[0xFFFFF780000003D8];
    LODWORD(dword_140D57584) = MEMORY[0xFFFFF780000003E8];
  }
  v2 = (void **)&unk_140D5A2C0;
  v3 = 16LL;
  do
  {
    if ( qword_140D57660 && (int)sub_140242424((__int64)(v2 - 4), a2, dword_140D57584) >= 0 )
    {
      if ( (int)sub_140242424((__int64)v2, a2, dword_140D57584) >= 0 )
      {
        memset(*(v2 - 2), 0, (unsigned int)dword_140D57584);
        memset(v2[2], 0, (unsigned int)dword_140D57584);
        *((_DWORD *)v2 - 11) |= 1u;
      }
      else
      {
        sub_14022E9C8((__int64)v2);
      }
    }
    _InterlockedIncrement(&dword_140D57588);
    v2 += 10;
    --v3;
  }
  while ( v3 );
}
