/*
 * XREFs of sub_14023AC88 @ 0x14023AC88
 * Callers:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 * Callees:
 *     sub_14023AD38 @ 0x14023AD38 (sub_14023AD38.c)
 *     sub_14023ADA4 @ 0x14023ADA4 (sub_14023ADA4.c)
 *     sub_14023AE58 @ 0x14023AE58 (sub_14023AE58.c)
 *     sub_14023AEE0 @ 0x14023AEE0 (sub_14023AEE0.c)
 */

char __fastcall sub_14023AC88(unsigned __int16 a1, char a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // rdx
  unsigned int v11; // r11d
  __int64 v12; // rax
  int v13; // eax
  __int64 (__fastcall **v14)(); // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  int v17; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)(a5 + a6) > 0x1000 )
    return 0;
  if ( (unsigned __int8)sub_14023ADA4() )
    return 0;
  LOBYTE(v10) = a2;
  v12 = sub_14023AD38(a1, v10, v11);
  if ( !v12 )
    return 0;
  v13 = sub_14023AEE0(v12);
  v14 = off_1400012D0;
  v17 = a6;
  if ( a7 )
    v14 = off_1400012E8;
  sub_14023AE58((_DWORD)v14, v13, a4, a5, v17);
  _InterlockedOr(v16, 0);
  return 1;
}
