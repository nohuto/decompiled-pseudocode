/*
 * XREFs of sub_1409E9F80 @ 0x1409E9F80
 * Callers:
 *     sub_14078FCF8 @ 0x14078FCF8 (sub_14078FCF8.c)
 *     sub_1409E9E48 @ 0x1409E9E48 (sub_1409E9E48.c)
 * Callees:
 *     sub_140634044 @ 0x140634044 (sub_140634044.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409EA2D4 @ 0x1409EA2D4 (sub_1409EA2D4.c)
 *     sub_1409EA3AC @ 0x1409EA3AC (sub_1409EA3AC.c)
 */

__int64 __fastcall sub_1409E9F80(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // r9d
  int v11; // eax

  v7 = sub_140797594(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = sub_14079435C(0x80u, v7);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 12) & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        sub_1409EA2D4(a1, a3, 32 * *(unsigned __int8 *)(v8 + 818) + a1 + 4284, v10, 0LL, 0);
      }
      v11 = *(_DWORD *)(v8 + 816);
      if ( (v11 & 0x800) != 0 )
      {
        sub_1409EA3AC(v8, a3);
        v11 = *(_DWORD *)(v8 + 816);
      }
      if ( (v11 & 0x1000000) != 0 )
        sub_140634044(*(_QWORD *)(v8 + 1008), a1, a3);
    }
    sub_1407981E8((unsigned int *)v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
