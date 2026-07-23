/*
 * XREFs of sub_140218D80 @ 0x140218D80
 * Callers:
 *     sub_140218C94 @ 0x140218C94 (sub_140218C94.c)
 * Callees:
 *     sub_140218EAC @ 0x140218EAC (sub_140218EAC.c)
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_140219C44 @ 0x140219C44 (sub_140219C44.c)
 *     sub_14021A494 @ 0x14021A494 (sub_14021A494.c)
 *     sub_14064A96C @ 0x14064A96C (sub_14064A96C.c)
 *     sub_14064ABF8 @ 0x14064ABF8 (sub_14064ABF8.c)
 *     sub_14064AD1C @ 0x14064AD1C (sub_14064AD1C.c)
 */

__int64 __fastcall sub_140218D80(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned __int16 v13; // di
  unsigned __int16 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  int v18; // eax
  char v19; // al
  int v20; // eax
  _OWORD v21[2]; // [rsp+28h] [rbp-49h] BYREF
  int v22; // [rsp+48h] [rbp-29h]
  __int16 v23; // [rsp+4Ch] [rbp-25h]
  _OWORD v24[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  _WORD v26[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v27; // [rsp+84h] [rbp+13h]
  int v28; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  v22 = 0;
  memset(v21, 0, sizeof(v21));
  v23 = 0;
  v8 = *a1;
  *a3 = 0;
  v24[1] = v4;
  v24[0] = v8;
  v25 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      v10 = sub_140218EAC(a2, v26);
      v12 = v10;
      if ( v10 == -2147483622 )
      {
LABEL_17:
        v12 = 0;
        goto LABEL_16;
      }
      if ( v10 < 0 )
        goto LABEL_18;
      v13 = v24[0];
      if ( LOWORD(v24[0]) == 4 )
      {
        v18 = sub_140218EAC(a2, v21);
        v12 = v18;
        if ( v18 == -2147483622 )
          goto LABEL_17;
        if ( v18 < 0 )
          goto LABEL_18;
        v19 = *((_BYTE *)a2 + 4);
        v28 = 0;
        v14 = *a2;
        v27 = v19;
        v29 = *((_QWORD *)a2 + 2);
        v30 = *((_DWORD *)a2 + 2);
        v31 = *((_QWORD *)a2 + 4) + v9;
        v26[0] = v14;
      }
      else
      {
        v14 = v26[0];
      }
      if ( (unsigned __int8)sub_140219C44(v24) )
        break;
      if ( !a4 )
      {
        v12 = -1073741406;
        goto LABEL_18;
      }
    }
    if ( HIDWORD(v24[0]) == 1 )
      v13 = v14;
    if ( v13 )
    {
      if ( v13 <= 2u )
        goto LABEL_30;
      if ( v13 == 3 )
      {
        LOBYTE(v15) = 0x80;
        v16 = sub_140218F84(v15, v24, a3);
      }
      else
      {
        if ( v13 != 4 )
        {
          switch ( v13 )
          {
            case 5u:
              goto LABEL_28;
            case 6u:
LABEL_30:
              LOBYTE(v15) = 0x80;
              v20 = sub_14064ABF8(v15, v24);
              break;
            case 0x10u:
LABEL_28:
              LOBYTE(v15) = 0x80;
              v20 = sub_14064AD1C(v15, v24);
              break;
            default:
              continue;
          }
          *a3 = v20;
          continue;
        }
        LOBYTE(v15) = 0x80;
        v16 = sub_14064A96C(v15, v24, a3);
      }
      v12 = v16;
      if ( v16 < 0 )
        goto LABEL_18;
    }
  }
  while ( *a3 != 1 );
  if ( v12 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  sub_14021A494(a2, v11);
  return (unsigned int)v12;
}
