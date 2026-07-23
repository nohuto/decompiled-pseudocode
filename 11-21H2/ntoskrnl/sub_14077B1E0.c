/*
 * XREFs of sub_14077B1E0 @ 0x14077B1E0
 * Callers:
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077B12C @ 0x14077B12C (sub_14077B12C.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_14077B1E0(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  _WORD *v6; // rax
  __int64 v7; // rdx
  unsigned __int16 v8; // r8
  int *v9; // rbx
  __int64 v10; // rdi
  unsigned __int16 v11; // r8
  int v12; // r9d
  unsigned __int16 *v13; // r10
  int v14; // r11d
  unsigned __int64 v15; // rax

  v3 = 0;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  if ( a1 )
  {
    v6 = a1;
    v7 = 0x7FFFLL;
    while ( *v6 )
    {
      ++v6;
      if ( !--v7 )
        return 3221225485LL;
    }
    v8 = 2 * (0x7FFF - v7);
  }
  else
  {
    v8 = 0;
  }
  if ( a2 == 3 && v8 <= 8u )
    return 3221225524LL;
  v9 = (int *)(a3 + 24);
  v10 = *((_QWORD *)sub_140347DB0() + 154);
  if ( v9 )
  {
    v14 = v11 >> 1;
    for ( *v9 = 0; v14; v12 = (unsigned __int16)v15 + 65599 * v12 )
    {
      v15 = *v13++;
      --v14;
      if ( (unsigned int)v15 >= 0x61 )
      {
        if ( (unsigned int)v15 > 0x7A )
        {
          if ( v10 )
          {
            if ( (unsigned __int16)v15 >= 0xC0u )
              LOWORD(v15) = *(_WORD *)(v10
                                     + 2
                                     * ((v15 & 0xF)
                                      + *(unsigned __int16 *)(v10
                                                            + 2LL
                                                            * (((unsigned __int8)v15 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v10 + 2 * (v15 >> 8))))))
                          + v15;
          }
        }
        else
        {
          LOWORD(v15) = v15 - 32;
        }
      }
    }
    *v9 = v12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
