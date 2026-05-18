/*
 * XREFs of sub_180021D80 @ 0x180021D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021D80(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx

  v3 = a2;
  v4 = **(_QWORD **)(a1 + 56);
  if ( !v4
    || v4 <= **(_QWORD **)(a1 + 24)
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(v4 - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( v3 == -1 )
    return 0;
  else
    ***(_BYTE ***)(a1 + 56) = v3;
  return v3;
}
