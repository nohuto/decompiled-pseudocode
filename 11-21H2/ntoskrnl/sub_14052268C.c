/*
 * XREFs of sub_14052268C @ 0x14052268C
 * Callers:
 *     sub_14052E768 @ 0x14052E768 (sub_14052E768.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140531560 @ 0x140531560 (sub_140531560.c)
 *     sub_140531660 @ 0x140531660 (sub_140531660.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140537770 @ 0x140537770 (sub_140537770.c)
 *     sub_14053799C @ 0x14053799C (sub_14053799C.c)
 *     sub_1405386C4 @ 0x1405386C4 (sub_1405386C4.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140509594 @ 0x140509594 (sub_140509594.c)
 */

void __fastcall sub_14052268C(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(v4) = 0;
  if ( (int)sub_140509594(a2, (bool *)&v4) >= 0 && !(_BYTE)v4 )
    sub_1403B1B5C(v2, v3);
}
