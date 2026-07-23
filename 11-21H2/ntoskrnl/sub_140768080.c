/*
 * XREFs of sub_140768080 @ 0x140768080
 * Callers:
 *     sub_140767F88 @ 0x140767F88 (sub_140767F88.c)
 *     sub_14080ED34 @ 0x14080ED34 (sub_14080ED34.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 *     sub_140768200 @ 0x140768200 (sub_140768200.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140942730 @ 0x140942730 (sub_140942730.c)
 */

__int64 __fastcall sub_140768080(__int64 a1)
{
  unsigned int *v2; // r11
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // r12
  char v9; // r13
  __int64 v10; // r11
  _QWORD **v11; // r15
  _QWORD *v12; // rsi
  int v13; // ebx
  char v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    sub_1407756F4(0LL);
    v2 = *(unsigned int **)a1;
    v3 = 0;
    v4 = 0LL;
    if ( !**(_DWORD **)a1 )
      goto LABEL_19;
    do
    {
      v5 = *(_QWORD *)&v2[6 * v4 + 4];
      if ( v5 )
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(v6 + 16);
      v8 = (v7 || (v7 = *(_QWORD *)(v6 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0)
        && sub_140767E88(v2, *(_QWORD *)(v7 + 32), 0LL);
      v9 = 0;
      v11 = (_QWORD **)sub_140775110(v5);
      v12 = *v11;
      if ( *v11 != v11 )
      {
        while ( 1 )
        {
          sub_140942730(v12, &v16, &v15);
          if ( v16 )
          {
            if ( sub_140767E88(*(unsigned int **)a1, v16, 0LL) )
              break;
          }
          v12 = (_QWORD *)*v12;
          if ( v12 == v11 )
            goto LABEL_8;
        }
        v9 = 1;
      }
LABEL_8:
      if ( v8 || v9 )
      {
        *(_DWORD *)(v10 + 24 * v4 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v10 + 24 * v4 + 32) |= 4u;
        ++v3;
      }
      v2 = *(unsigned int **)a1;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < **(_DWORD **)a1 );
    if ( v3 )
    {
      v13 = sub_140768200(a1);
      if ( v13 >= 0 )
        *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
LABEL_19:
      v13 = -1073741823;
    }
    ExReleaseResourceLite(&stru_140C46AC0);
    sub_140775698(0LL);
  }
  return (unsigned int)v13;
}
