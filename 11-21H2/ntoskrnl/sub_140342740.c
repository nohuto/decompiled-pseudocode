/*
 * XREFs of sub_140342740 @ 0x140342740
 * Callers:
 *     sub_140342260 @ 0x140342260 (sub_140342260.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140342740(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  char result; // al

  v3 = *(_QWORD *)(a1 + 13072);
  if ( !v3 )
    return 0;
  v5 = -1LL << (*(_DWORD *)(v3 + 4) & 0x1F);
  v6 = a2 & v5;
  v7 = *(_DWORD *)(v3 + 4) >> 5;
  v8 = (a2 & (unsigned __int64)v5) >> 56;
  v9 = (a2 & (unsigned __int64)v5) >> 48;
  v10 = (a2 & (unsigned __int64)v5) >> 40;
  v11 = (a2 & (unsigned __int64)v5) >> 32;
  v12 = a2 & v5;
  v13 = v12 >> 24;
  v14 = v12 >> 16;
  v15 = v12 >> 8;
  if ( v7 )
  {
    v16 = *(_QWORD *)(v3 + 8)
        + 8LL
        * (((_DWORD)v8
          + 37
          * ((unsigned __int8)v9
           + 37
           * ((unsigned __int8)v10
            + 37
            * ((unsigned __int8)v11
             + 37
             * ((unsigned __int8)v13
              + 37 * ((unsigned __int8)v14 + 37 * ((unsigned __int8)v15 + 37 * ((unsigned __int8)v6 + 11623883)))))))) & (unsigned int)(v7 - 1));
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v16 + 8)) )
      {
        v17 = *(_QWORD *)(v16 + 16);
        result = 1;
        *a3 = v17;
        return result;
      }
    }
  }
  return 0;
}
