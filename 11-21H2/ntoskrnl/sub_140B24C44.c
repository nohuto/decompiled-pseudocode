/*
 * XREFs of sub_140B24C44 @ 0x140B24C44
 * Callers:
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 *     sub_140854454 @ 0x140854454 (sub_140854454.c)
 *     sub_140B24D94 @ 0x140B24D94 (sub_140B24D94.c)
 */

bool sub_140B24C44()
{
  PEPROCESS v0; // rbx
  __int64 v1; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al
  ULONG Seed; // [rsp+38h] [rbp+10h] BYREF

  sub_1406D2264((char *)&dword_140C03048, 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  *((_QWORD *)v0 + 141) = sub_14022DB00();
  *((_QWORD *)PsInitialSystemProcess + 288) = MEMORY[0xFFFFF78000000008];
  v1 = sub_1402F5718();
  v2 = qword_140D06940;
  *((_QWORD *)PsInitialSystemProcess + 289) = v1;
  v2[141] = *((_QWORD *)PsInitialSystemProcess + 141);
  v2[288] = *((_QWORD *)PsInitialSystemProcess + 288);
  v2[289] = *((_QWORD *)PsInitialSystemProcess + 289);
  sub_14022DB00();
  qword_140D3CD00 = (unsigned __int64)RtlRandom(&Seed) << 32;
  qword_140D3CD00 = RtlRandom(&Seed) | (unsigned __int64)qword_140D3CD00;
  if ( dword_140D052BC )
  {
    if ( dword_140D052BC == 2 )
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 8;
    else
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 4;
  }
  else
  {
    v3 = MEMORY[0xFFFFF780000002D5] & 0xF3;
  }
  MEMORY[0xFFFFF780000002D5] = v3;
  switch ( dword_140D052B8 )
  {
    case 1:
      v4 = v3 & 0xCF | 0x10;
      break;
    case 2:
      v4 = v3 & 0xCF | 0x20;
      break;
    case -1:
      v4 = v3 | 0x30;
      break;
    default:
      v4 = v3 & 0xCF;
      break;
  }
  MEMORY[0xFFFFF780000002D5] = v4;
  sub_140B24D94();
  return (int)sub_140854454((__int64)&unk_140D32580) >= 0;
}
