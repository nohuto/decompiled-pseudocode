/*
 * XREFs of sub_14068C154 @ 0x14068C154
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

__int64 __fastcall sub_14068C154(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  char v6; // al
  _QWORD *v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  int v13; // r11d
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx

  v5 = a2;
  v6 = sub_14068B144(a3, a2);
  LODWORD(v7) = 0;
  if ( v6 )
  {
    v8 = 0;
    v9 = v5 + a3;
    if ( v9 )
    {
      do
      {
        v10 = sub_140AB44C0(a1, v8);
        v12 = *(_QWORD *)v11;
        v8 = v13 + 4096;
        v14 = v10;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( v12 )
            v12 ^= v11;
          else
            v12 = (unsigned __int64)v7;
        }
        while ( v12 )
        {
          if ( v8 >= *(__int64 *)(v12 + 40) )
          {
            if ( v8 < *(__int64 *)(v12 + 48) )
              break;
            v15 = *(_QWORD *)(v12 + 8);
          }
          else
          {
            v15 = *(_QWORD *)v12;
          }
          if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v15 )
            v12 ^= v15;
          else
            v12 = v15;
        }
        v16 = *(_QWORD *)(v12 + 56) - *(_QWORD *)(v12 + 24);
        *(_QWORD *)v14 = v7;
        *(_DWORD *)(v14 + 16) = 4096;
        *(_QWORD *)(v14 + 8) = (v8 + v16) | 1;
      }
      while ( v8 < v9 );
    }
  }
  else
  {
    LODWORD(v7) = -1073741670;
  }
  return (unsigned int)v7;
}
