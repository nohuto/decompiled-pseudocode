/*
 * XREFs of sub_1402260D0 @ 0x1402260D0
 * Callers:
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 * Callees:
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F374 @ 0x14069F374 (sub_14069F374.c)
 *     sub_14069F3D4 @ 0x14069F3D4 (sub_14069F3D4.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 *     sub_14069F47C @ 0x14069F47C (sub_14069F47C.c)
 *     sub_14069F4C8 @ 0x14069F4C8 (sub_14069F4C8.c)
 *     sub_140921AA8 @ 0x140921AA8 (sub_140921AA8.c)
 *     sub_140921D8C @ 0x140921D8C (sub_140921D8C.c)
 */

__int64 __fastcall sub_1402260D0(__int16 *a1, _DWORD *a2)
{
  _QWORD *v4; // rax
  __int16 v5; // r9
  char v6; // r10
  __int16 v7; // r11
  int v8; // ebx
  int v10; // eax
  int v11; // esi
  int i; // eax
  int j; // eax
  _BYTE v14[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v15[96]; // [rsp+80h] [rbp-39h] BYREF

  memset(v14, 0, 0x58uLL);
  memset(v15, 0, 0x58uLL);
  sub_14069F4C8(v14);
  sub_14069F47C(v15);
  if ( *a1 >= 0 )
  {
    do
      v4 = (_QWORD *)sub_14069F1CC(a1);
    while ( (!v4[2] || !(unsigned int)sub_14069F45C(*v4)) && (__int16)(v5 - 1) >= 0 );
    if ( v7 )
    {
      if ( !v6 )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(sub_14069F1CC(a1) + 16) + 36LL);
        goto LABEL_7;
      }
      if ( v7 > 1 )
      {
        v10 = sub_140921D8C(v14, a1);
        v8 = v10;
        if ( v10 >= 0 )
        {
          v11 = 0;
          for ( i = sub_140921AA8(v14); ; i = sub_140921AA8(v14) )
          {
            v8 = i;
            if ( i == -2147483622 )
              break;
            if ( i < 0 )
              goto LABEL_8;
            ++v11;
          }
LABEL_17:
          *a2 = v11;
          goto LABEL_7;
        }
        if ( v10 != -1073741670 )
          goto LABEL_8;
        sub_14069F374(v14);
        sub_14069F4C8(v14);
      }
      v8 = sub_140200068((__int64)v15, a1);
      if ( v8 < 0 )
        goto LABEL_8;
      v11 = 0;
      for ( j = sub_14065AED8(v15); ; j = sub_14065AED8(v15) )
      {
        v8 = j;
        if ( j == -2147483622 )
          break;
        if ( j < 0 )
          goto LABEL_8;
        ++v11;
      }
      goto LABEL_17;
    }
  }
  *a2 = 0;
LABEL_7:
  v8 = 0;
LABEL_8:
  sub_14069F3D4(v15);
  sub_14069F374(v14);
  return (unsigned int)v8;
}
