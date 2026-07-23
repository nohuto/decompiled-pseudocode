/*
 * XREFs of sub_140820094 @ 0x140820094
 * Callers:
 *     sub_14081FF7C @ 0x14081FF7C (sub_14081FF7C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14081F87C @ 0x14081F87C (sub_14081F87C.c)
 *     sub_140820188 @ 0x140820188 (sub_140820188.c)
 */

__int64 __fastcall sub_140820094(int a1, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int v4; // esi
  __int64 v8; // rbp
  char v9; // cl
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 i; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  v4 = 0;
  v11 = 0LL;
  for ( i = 0LL; v3 != (__int64 *)a3; v3 = (__int64 *)*v3 )
  {
    if ( *((_BYTE *)v3 + 17) )
    {
      v8 = *(v3 - 8);
      DWORD2(v11) = 0;
      *(_QWORD *)&i = 0LL;
      sub_140820188(a1, a2, *(v3 - 7), *((_BYTE *)v3 - 72), (__int64)&i, (__int64)&v11 + 8);
      v4 = sub_14042A5E0(*(_QWORD *)(v8 + 8), 0LL);
      if ( v4 < 0 )
      {
        sub_14081F87C((__int64)(v3 - 11), *(_QWORD *)(v8 + 8));
        *((_BYTE *)v3 + 16) |= 2u;
        return (unsigned int)v4;
      }
      v9 = v3[2] & 0xFD;
      *((_BYTE *)v3 + 17) = 0;
      *((_BYTE *)v3 + 16) = v9 | 1;
    }
    else if ( (v3[2] & 2) != 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v4;
}
