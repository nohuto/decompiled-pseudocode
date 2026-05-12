/*
 * XREFs of sub_1C005AB08 @ 0x1C005AB08
 * Callers:
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005ABDC @ 0x1C005ABDC (sub_1C005ABDC.c)
 */

char __fastcall sub_1C005AB08(__int64 a1, _DWORD *a2)
{
  char v4; // di
  struct _DEVICE_OBJECT *v5; // rcx
  _DWORD Dst[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp-CCh]
  int v9; // [rsp+40h] [rbp-C8h]
  int InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v11; // [rsp+54h] [rbp-B4h]
  int v12; // [rsp+64h] [rbp-A4h]
  __int128 v13; // [rsp+68h] [rbp-A0h]

  *a2 = -1;
  v4 = 0;
  memset_0(Dst, 0, 0xC0uLL);
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  InputBuffer = 1214866753;
  v11 = xmmword_1C008A4E0;
  v12 = 16;
  v13 = xmmword_1C008A2C8;
  if ( (int)sub_1C005ABDC(v5, &InputBuffer) >= 0 && Dst[0] == 1114596673 && Dst[2] == 1 && !v8 )
  {
    v4 = 1;
    *a2 = v9;
  }
  return v4;
}
