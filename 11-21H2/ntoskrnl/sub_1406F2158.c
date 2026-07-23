/*
 * XREFs of sub_1406F2158 @ 0x1406F2158
 * Callers:
 *     sub_1407900EC @ 0x1407900EC (sub_1407900EC.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 * Callees:
 *     sub_1406F21DC @ 0x1406F21DC (sub_1406F21DC.c)
 *     sub_140796390 @ 0x140796390 (sub_140796390.c)
 *     sub_1409F4FB4 @ 0x1409F4FB4 (sub_1409F4FB4.c)
 */

__int64 __fastcall sub_1406F2158(__int64 a1, _OWORD *a2, char a3, _QWORD *a4)
{
  _OWORD *v4; // rbx
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // r14d

  v4 = a2;
  LOBYTE(a2) = a3;
  v6 = sub_140796390(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    v10 = v6 + 136;
    v8 = sub_1406F21DC((unsigned int)(v6 + 136), 0LL);
    if ( v8 >= 0 )
    {
      if ( v4 )
      {
        MEMORY[0] = *v4;
        MEMORY[0x10] = v4[1];
        MEMORY[0x20] = v4[2];
        MEMORY[0x30] = v4[3];
        MEMORY[0x40] = v4[4];
        MEMORY[0x50] = v4[5];
        MEMORY[0x60] = v4[6];
        MEMORY[0x70] = *((_QWORD *)v4 + 14);
      }
      MEMORY[0x74] = 1;
      MEMORY[8] = 1;
      MEMORY[4] = v10;
      *a4 = 0LL;
      MEMORY[0x78] = 136LL;
      MEMORY[0x84] = 0x80000000;
      MEMORY[0x80] = v7;
      sub_1409F4FB4((void *)0x88);
    }
  }
  else if ( v4 )
  {
    return (unsigned int)sub_1406F21DC(*((unsigned int *)v4 + 1), v4);
  }
  else
  {
    v8 = sub_1406F21DC(0x78uLL, 0LL);
    if ( v8 >= 0 )
    {
      *a4 = 0LL;
      MEMORY[8] = 1;
      MEMORY[4] = 120;
    }
  }
  return (unsigned int)v8;
}
