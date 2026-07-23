/*
 * XREFs of sub_140B123CC @ 0x140B123CC
 * Callers:
 *     sub_140B10F48 @ 0x140B10F48 (sub_140B10F48.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140B123CC(__int64 a1, __int64 a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[104]; // [rsp+40h] [rbp-78h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( qword_140D686A8 )
  {
    v4[2] = a2;
    v4[0] = sub_140B24550;
    v4[3] = a1;
    v4[1] = sub_140B25270;
    sub_140232788((__int64)qword_140D686A8, 1LL, (int)v5, (__int64)v4);
  }
}
