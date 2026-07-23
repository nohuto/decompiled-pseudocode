/*
 * XREFs of sub_140A7471C @ 0x140A7471C
 * Callers:
 *     sub_1405658B4 @ 0x1405658B4 (sub_1405658B4.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A73D80 @ 0x140A73D80 (sub_140A73D80.c)
 * Callees:
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 *     sub_140A748B4 @ 0x140A748B4 (sub_140A748B4.c)
 */

__int64 __fastcall sub_140A7471C(unsigned __int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v8; // rbx
  int v9; // edx
  _DWORD *i; // rcx
  int v11; // eax
  int v12; // eax
  char v14; // si
  int v15; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( ((unsigned __int8)(a3 - 1) & a3) != 0 || a1 >= 0xFFFF800000000000uLL && (a2 != 204 || a3 != 1 || a4) )
    return 0LL;
  v8 = 0LL;
  ++dword_140C33EA0;
  v9 = 0;
  for ( i = &unk_140C33EC0; ; i += 10 )
  {
    v11 = i[8];
    if ( (v11 & 1) != 0 && *(_QWORD *)i == a1 )
      break;
    if ( !v8 && !v11 )
      v8 = i;
    if ( (unsigned int)++v9 >= 0x20 )
    {
      if ( !v8 )
        return 0LL;
      v12 = sub_140A74644((char *)(a1 & ~(unsigned __int64)a4), (__int64)v16, a3, 4);
      *(_QWORD *)v8 = a1;
      *((_BYTE *)v8 + 36) = a3;
      *((_BYTE *)v8 + 37) = a4;
      *((_QWORD *)v8 + 2) = a2;
      if ( v12 < 0 )
      {
        *((_QWORD *)v8 + 1) = *((_QWORD *)KeGetCurrentThread() + 23);
        v8[8] = 3;
        return (unsigned int)(((char *)v8 - (char *)&unk_140C33EC0) / 40) + 1;
      }
      *((_QWORD *)v8 + 3) = v16[0];
      v14 = byte_140C40431;
      *((_QWORD *)v8 + 1) = *((_QWORD *)KeGetCurrentThread() + 23);
      v15 = sub_140A748B4(v8, v16);
      if ( v15 )
      {
        v8[8] = v15;
        return (unsigned int)(((char *)v8 - (char *)&unk_140C33EC0) / 40) + 1;
      }
      byte_140C40431 = v14;
      return 0LL;
    }
  }
  if ( (v11 & 8) == 0 )
    return 0LL;
  i[8] = v11 & 0xFFFFFFF7;
  return (unsigned int)(v9 + 1);
}
