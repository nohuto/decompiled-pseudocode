/*
 * XREFs of sub_14052CD28 @ 0x14052CD28
 * Callers:
 *     sub_140521F54 @ 0x140521F54 (sub_140521F54.c)
 *     sub_14052CCA8 @ 0x14052CCA8 (sub_14052CCA8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14052CD28(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v5; // r8
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // r8d
  int v11; // eax

  v5 = *(_BYTE *)(a1 + 1);
  v6 = 0;
  switch ( v5 & 0x3F )
  {
    case 0:
      if ( a3 )
      {
        v9 = sub_14042A5E0(*(_QWORD *)(a1 + 24), a2);
        v10 = *(_DWORD *)(a1 + 52);
        v11 = *(_DWORD *)(a1 + 56) & (v9 >> *(_BYTE *)(a1 + 49));
        LOBYTE(v6) = v11 == v10;
        *a3 = v6;
        return v10 != v11 ? 0xC0000001 : 0;
      }
      return (unsigned int)-1073741811;
    case 1:
      if ( a3 )
      {
        *a3 = *(_DWORD *)(a1 + 56) & ((unsigned int)sub_14042A5E0(*(_QWORD *)(a1 + 24), a2) >> *(_BYTE *)(a1 + 49));
        return v6;
      }
      return (unsigned int)-1073741811;
    case 2:
      v7 = *(_DWORD *)(a1 + 56) & *(_DWORD *)(a1 + 52);
      break;
    case 3:
      v7 = a2 & *(_DWORD *)(a1 + 56);
      break;
    default:
      return v6;
  }
  v8 = v7 << *(_BYTE *)(a1 + 49);
  if ( v5 < 0 )
    v8 |= sub_14042A5E0(*(_QWORD *)(a1 + 24), a2) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
  sub_14042A5E0(*(_QWORD *)(a1 + 24), v8);
  return v6;
}
