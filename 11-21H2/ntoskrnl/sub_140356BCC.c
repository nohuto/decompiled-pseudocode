/*
 * XREFs of sub_140356BCC @ 0x140356BCC
 * Callers:
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_140354C00 @ 0x140354C00 (sub_140354C00.c)
 *     sub_140355DFC @ 0x140355DFC (sub_140355DFC.c)
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_140397B04 @ 0x140397B04 (sub_140397B04.c)
 * Callees:
 *     sub_140356CB8 @ 0x140356CB8 (sub_140356CB8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_140356BCC(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  BOOL v8; // ecx
  ULONG_PTR v9; // r10
  int v10; // edx
  __int64 v11; // r9
  _DWORD *v12; // r11
  _DWORD *v13; // rax

  v4 = (int)a3;
  sub_140356CB8(a1, a2, a3);
  v8 = (unsigned int)v4 <= 5 && byte_140002ED0[136 * v4] == 1;
  v9 = a1 + 72;
  if ( !v8 )
    v9 = a2 + 56;
  v10 = 0;
  v11 = 0LL;
  do
  {
    v12 = *(_DWORD **)(v9 + 8 * v11);
    if ( v12 && (*(_DWORD *)&byte_140002ED0[136 * v4 + 16 + 4 * v11] & *v12) != 0 )
      sub_1405CAE6C(0x666uLL, v9, v4, (unsigned int)v10);
    ++v10;
    ++v11;
  }
  while ( v10 < 6 );
  if ( a2 )
    v13 = *(_DWORD **)(a2 + 8 * v4 + 56);
  else
    v13 = *(_DWORD **)(a1 + 8 * v4 + 72);
  *v13 |= 1u;
  v13[1] = a4;
  return sub_14042A5E0(a1, a2);
}
