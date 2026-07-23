/*
 * XREFs of sub_140A146FC @ 0x140A146FC
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AD17C @ 0x1406AD17C (sub_1406AD17C.c)
 *     sub_14075B0E4 @ 0x14075B0E4 (sub_14075B0E4.c)
 *     sub_14075B608 @ 0x14075B608 (sub_14075B608.c)
 *     sub_14075B638 @ 0x14075B638 (sub_14075B638.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 */

__int64 __fastcall sub_140A146FC(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int16 *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-D0h]
  char v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0;
  memset(v16, 0, 0x104uLL);
  v4 = *(const WCHAR **)(a2 + 32);
  v14 = 0LL;
  v15 = 0;
  if ( (int)sub_14075B0E4(v16, v5, v4) >= 0 )
  {
    v6 = sub_14075B638(a1, *(_DWORD *)a2, &v13);
    if ( v6 )
    {
      LODWORD(v7) = *(_DWORD *)(a2 + 16);
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v13 )
          break;
        v8 = *(_QWORD *)(v6 + 12 * v7);
        if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
        {
          sub_14075B608(v8, (__int64)&v14 + 1);
          LOBYTE(v14) = 42;
        }
        else
        {
          sub_14075B608(v8, (__int64)&v14);
          LOBYTE(v15) = 42;
        }
        if ( (unsigned int)sub_1406AD17C((char *)&v14, v16) )
        {
          v9 = *(_DWORD *)(v6 + 12 * v7 + 8);
          v10 = sub_140792CCC(a1, v9, *(_WORD *)(a2 + 12));
          if ( v10 )
          {
            v11 = (__int16 *)sub_140842A24(a1, v10);
            if ( v11 )
            {
              if ( (unsigned int)sub_140851068(v11, *(_WORD **)(a2 + 32)) )
              {
                *(_DWORD *)(a2 + 16) = v7;
                return v9;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
