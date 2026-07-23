/*
 * XREFs of sub_14038F99C @ 0x14038F99C
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_14038F8FC @ 0x14038F8FC (sub_14038F8FC.c)
 * Callees:
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140379950 @ 0x140379950 (sub_140379950.c)
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_14039074C @ 0x14039074C (sub_14039074C.c)
 *     sub_1403908A8 @ 0x1403908A8 (sub_1403908A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14038F99C(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // ebx
  int v13; // r8d
  unsigned int v14; // r13d
  _WORD **v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  unsigned int v20; // [rsp+34h] [rbp-164h]
  _WORD *v21; // [rsp+38h] [rbp-160h]
  _OWORD v22[2]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v23[256]; // [rsp+60h] [rbp-138h] BYREF

  memset(v23, 0, sizeof(v23));
  v4 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1);
  LODWORD(v6) = -1;
  memset(v22, 0, sizeof(v22));
  v7 = sub_1403908A8(a1, v23, 32LL, v5);
  v8 = sub_14039074C(a1, v23, v7, v22);
  v9 = (__int64)(*(_QWORD *)&v22[0] - *(_QWORD *)(a1 + 1032)) >> 1;
  v20 = v8;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && sub_14038770C(*(_QWORD *)(a1 + 800), v9) )
    return (unsigned int)-1073740024;
  v10 = sub_1403790A8(a1, v9, 0, 32);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741739;
  if ( v10 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v12 = sub_14038FC10(a1, v10, v9, v10, v9, a2);
    if ( v12 < 0 )
      goto LABEL_21;
    v14 = 1;
    if ( v8 <= 1 )
    {
LABEL_18:
      v12 = 0;
LABEL_19:
      v4 = 0LL;
    }
    else
    {
      v15 = (_WORD **)v22 + 1;
      while ( 1 )
      {
        v21 = *v15;
        v6 = ((__int64)*v15 - *(_QWORD *)(a1 + 1032)) >> 1;
        if ( _bittest((const signed __int32 *)(a1 + 776), 0x12u) && sub_14038770C(*(_QWORD *)(a1 + 800), v6) )
        {
LABEL_28:
          v12 = -1073740024;
          goto LABEL_19;
        }
        v16 = sub_1403790A8(a1, v6, 0, 32);
        v4 = v16;
        if ( !v16 )
          break;
        if ( v16 == -1 )
          goto LABEL_28;
        if ( _bittest((const signed __int32 *)(a1 + 776), 0x12u) && sub_14038770C(*(_QWORD *)(a1 + 800), v9) )
        {
          v12 = -1073740024;
          goto LABEL_20;
        }
        v12 = sub_14038FC10(a1, v4, v6, v11, v9, a2);
        if ( (*v21 & 0x1FFF) != 0 )
        {
          sub_140379950(a1, v9, v17);
          v11 = v4;
          LODWORD(v9) = v6;
        }
        else
        {
          sub_140379950(a1, v6, v17);
          sub_14039050C(a1, (unsigned int)v6);
        }
        if ( v12 < 0 )
          goto LABEL_19;
        ++v14;
        ++v15;
        if ( v14 >= v20 )
          goto LABEL_18;
      }
      v12 = -1073741739;
    }
LABEL_20:
    if ( v11 )
LABEL_21:
      sub_140379950(a1, v9, v13);
    if ( v4 )
      sub_140379950(a1, v6, v13);
  }
  return (unsigned int)v12;
}
