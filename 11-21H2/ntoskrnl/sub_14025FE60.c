/*
 * XREFs of sub_14025FE60 @ 0x14025FE60
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_14025FF00 @ 0x14025FF00 (sub_14025FF00.c)
 */

__int64 __fastcall sub_14025FE60(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 *v9; // r14
  unsigned int v11; // ebx

  v4 = sub_14025FF00();
  v6 = *(_DWORD *)(v5 + 16728);
  v7 = 0;
  *a2 = v4;
  v8 = 16;
  if ( !v6 )
    return *a2;
  v9 = (__int64 *)(v5 + 16736);
  do
  {
    if ( (*(_BYTE *)(*v9 + 204) & 0xD0) == 0x80 )
    {
      if ( v8 == 16 || (v11 = sub_14025FD40(*(_QWORD *)(a1 + 8LL * v8 + 16736)), (unsigned int)sub_14025FD40(*v9) > v11) )
        v8 = v7;
    }
    ++v7;
    ++v9;
  }
  while ( v7 < v6 );
  if ( v8 == 16 )
    return *a2;
  return v8;
}
