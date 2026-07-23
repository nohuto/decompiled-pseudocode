/*
 * XREFs of sub_1405F55D8 @ 0x1405F55D8
 * Callers:
 *     sub_1405F56A0 @ 0x1405F56A0 (sub_1405F56A0.c)
 *     sub_1405F58AC @ 0x1405F58AC (sub_1405F58AC.c)
 * Callees:
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405F55D8(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  _QWORD v8[10]; // [rsp+20h] [rbp-78h] BYREF

  v6 = -1073741275;
  if ( (dword_140D01448 & 3) == 3 )
  {
    memset(v8, 0, 0x48uLL);
    LODWORD(v8[2]) = dword_140C090A0;
    v8[3] = off_140C090A8;
    v8[1] = a1;
    v6 = sub_140300374((__int64)v8);
    if ( v6 >= 0 )
    {
      *a2 = *(_DWORD *)v8[6];
      v6 = sub_140300374((__int64)v8);
      if ( v6 >= 0 )
        *a3 = *(_QWORD *)v8[6];
    }
  }
  return (unsigned int)v6;
}
