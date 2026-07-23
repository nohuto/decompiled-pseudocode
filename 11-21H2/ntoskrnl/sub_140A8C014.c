/*
 * XREFs of sub_140A8C014 @ 0x140A8C014
 * Callers:
 *     sub_140A8D11C @ 0x140A8D11C (sub_140A8D11C.c)
 * Callees:
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8C014(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  int v4; // ecx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) == 0 )
  {
    v3 = sub_140AA5A48(a1);
    v4 = *(_DWORD *)(a1 + 16);
    if ( v3 )
    {
      *(_DWORD *)(a1 + 16) = v4 | 0x40000000;
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 16) = v4 | 0x80000000;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0x40000000 )
    return 0LL;
  v3 = sub_140AA5A48(a1);
LABEL_6:
  if ( *(_QWORD *)(v3 + 240) )
    v1 = 1;
  else
    *(_DWORD *)(v3 + 56) |= 0x80000u;
  sub_140AA5BCC(v3);
  return v1;
}
