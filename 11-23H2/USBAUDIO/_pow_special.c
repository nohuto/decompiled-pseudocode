/*
 * XREFs of _pow_special @ 0x1C00199E0
 * Callers:
 *     pow @ 0x1C001A030 (pow.c)
 * Callees:
 *     _handle_error @ 0x1C0019898 (_handle_error.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall pow_special(double a1, double a2, double a3, int a4)
{
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+28h] [rbp-40h]
  double v15; // [rsp+30h] [rbp-38h]
  double v16; // [rsp+38h] [rbp-30h]

  v4 = a4 - 2;
  if ( !v4 )
  {
    v11 = 2;
    v16 = a2;
    v15 = a1;
    v14 = 34;
    v13 = 4;
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 || (v8 = v7 - 1) == 0 )
  {
    v11 = 1;
    v16 = a2;
    v15 = a1;
    v14 = 33;
    v13 = 8;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 )
  {
    v11 = 4;
    v16 = a2;
    v15 = a1;
    v14 = 34;
    v13 = 18;
    goto LABEL_13;
  }
  if ( v10 == 1 )
  {
    v11 = 3;
    v16 = a2;
    v15 = a1;
    v14 = 34;
    v13 = 17;
LABEL_13:
    handle_error("pow", 29, *(__int64 *)&a3, v11, v13, v14, v15, v16, 2);
  }
  return *(__m128 *)&a3;
}
