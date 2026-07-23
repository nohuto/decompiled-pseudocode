/*
 * XREFs of sub_1403C2FF8 @ 0x1403C2FF8
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_1403C2378 @ 0x1403C2378 (sub_1403C2378.c)
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403C2FF8(__int64 a1)
{
  _QWORD *v2; // rdx
  _WORD *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  dword_140D33684 = -1;
  byte_140D3368A |= 2u;
  byte_140CF8C45 |= 5u;
  qword_140D31700[0] = (__int64)&dword_140D33680;
  qword_140C2B0F8 = (__int64)&dword_140CF8C40;
  v5 = 0;
  qword_140C2B0E8 = (__int64)&qword_140CF9180;
  dword_140D33680 = 0;
  word_140D33688 = dword_140D0503C;
  word_140C2B0F0 = 1;
  dword_140CF8C40 = 0;
  byte_140CF8C44 = dword_140D0503C;
  qword_140CF8C50 = 0LL;
  word_140CF8C46 = 0;
  memset(&unk_140CF8C80, 0, 0x140uLL);
  word_140CF8D0A = 0;
  word_140CF8D0C = 0;
  word_140CF8D08 = 0;
  qword_140CF8D40 = (__int64)&unk_140CF8DC0;
  byte_140CF8D39 = 8;
  qword_140CF9180 = (__int64)&unk_140CF8C80;
  qword_140D33698 = (__int64)&unk_140CF8C80;
  sub_1403C2638(0, (__int64)&v5);
  sub_1403C2378(a1, (unsigned __int8 *)&v5, 0);
  qword_140CF8D20 |= 1uLL;
  v2 = &unk_140D31708;
  qword_140CF8CD0 |= 1uLL;
  v3 = &unk_140D3DED8;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140D083A0 |= 1uLL;
  do
  {
    *v2++ = v3;
    *v3 = result;
    result = (unsigned int)(result + 1);
    v3 += 140;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
