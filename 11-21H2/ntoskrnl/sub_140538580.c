/*
 * XREFs of sub_140538580 @ 0x140538580
 * Callers:
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 * Callees:
 *     sub_14053802C @ 0x14053802C (sub_14053802C.c)
 *     sub_140538108 @ 0x140538108 (sub_140538108.c)
 *     sub_1405383E4 @ 0x1405383E4 (sub_1405383E4.c)
 *     sub_14053842C @ 0x14053842C (sub_14053842C.c)
 *     sub_1405386C4 @ 0x1405386C4 (sub_1405386C4.c)
 *     sub_140538748 @ 0x140538748 (sub_140538748.c)
 *     sub_1405387E8 @ 0x1405387E8 (sub_1405387E8.c)
 */

__int64 __fastcall sub_140538580(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 i; // r8
  unsigned __int16 v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  int v12; // edi
  char *v13; // rax
  __int64 v14; // r11
  char *v15; // rsi
  _WORD *v16; // rax
  _WORD *v17; // rbx

  *(_DWORD *)a3 = 0;
  v3 = (_QWORD **)(a3 + 8);
  v4 = a2;
  *(_QWORD *)(a3 + 16) = a3 + 8;
  *(_QWORD *)(a3 + 8) = a3 + 8;
  v5 = 0LL;
  while ( 1 )
  {
    v16 = (_WORD *)sub_14053842C(a1, v5);
    v17 = v16;
    if ( !v16 )
      break;
    if ( *v16 == 1 )
    {
      v7 = (unsigned __int64)v16 + (unsigned __int16)v16[1];
      for ( i = 0LL; ; i = (unsigned __int64)v15 )
      {
        v13 = (char *)sub_1405383E4((unsigned __int64)(v17 + 12), v7, i);
        v15 = v13;
        if ( !v13 )
          break;
        if ( *v13 == 1 && (!v4 || sub_14053802C(v14, v17[3], v13) == v4) )
        {
          v9 = v17[3];
          v10 = *v3;
          while ( v10 != v3 )
          {
            v11 = (__int64)v10;
            v10 = (_QWORD *)*v10;
            if ( *(_WORD *)(v11 + 32) == v9 && *(_BYTE *)(v11 + 34) == 1 && sub_140538108(v15, (char *)(v11 + 34)) )
              goto LABEL_13;
          }
          v11 = sub_140538748(a3, v9, v15);
LABEL_13:
          if ( !v11 )
          {
            v12 = -1073741670;
LABEL_23:
            sub_1405386C4(a3);
            return (unsigned int)v12;
          }
          v12 = sub_1405387E8(v11, *((_QWORD *)v17 + 1), *((_QWORD *)v17 + 2));
          if ( v12 < 0 )
            goto LABEL_23;
          v4 = a2;
        }
      }
    }
    v5 = (__int64)v17;
    a1 = v14;
  }
  return 0;
}
