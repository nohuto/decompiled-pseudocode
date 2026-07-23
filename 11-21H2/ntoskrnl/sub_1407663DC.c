/*
 * XREFs of sub_1407663DC @ 0x1407663DC
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 */

__int64 __fastcall sub_1407663DC(
        unsigned int **a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  unsigned int v8; // ebx
  _BYTE *v9; // r12
  unsigned int *v13; // rax
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rcx
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = a7;
  v22 = 0LL;
  v23 = 0;
  v13 = *a1;
  v14 = (int)a1;
  *(_BYTE *)a6 = 0;
  *v9 = 0;
  v15 = sub_140767730(a2, 64LL, 8LL * *v13, 1315991120LL);
  if ( v15 )
  {
    *a4 = 0;
    a6 = 1LL;
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)sub_1407667B0(v14, (unsigned int)&a6, (unsigned int)&v22, (unsigned int)&v23, 0LL) )
          goto LABEL_14;
      }
      while ( !v23 && (a2 & 0xFFFFFFFB) != 0 );
      v16 = v22;
      if ( v22 )
        v17 = *(_DWORD **)(*(_QWORD *)(v22 + 312) + 40LL);
      else
        v17 = 0LL;
      if ( a2 != 2 )
      {
        if ( !a2 )
          goto LABEL_20;
        v18 = v17[142];
        if ( v18 == 1 )
        {
          *v7 = 1;
        }
        else if ( v18 )
        {
          *v9 = 1;
        }
        if ( a2 == 4 )
        {
LABEL_20:
          if ( (v17[99] & 0x1000) != 0 )
          {
            v21 = 1LL;
            goto LABEL_24;
          }
          if ( v17[75] == 787 )
          {
            v21 = 5LL;
LABEL_24:
            sub_140950530(a3, v21, v17 + 10);
            v8 = -2147483608;
            goto LABEL_14;
          }
        }
      }
      v19 = (unsigned int)*a4;
      *(_QWORD *)(v15 + 8 * v19) = v16;
      *a4 = v19 + 1;
    }
  }
  v8 = -1073741670;
LABEL_14:
  result = v8;
  *a5 = v15;
  return result;
}
