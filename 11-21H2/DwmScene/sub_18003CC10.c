/*
 * XREFs of sub_18003CC10 @ 0x18003CC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003CC10(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  unsigned __int64 v4; // rcx

  v3 = a2;
  v4 = **(_QWORD **)(a1 + 56);
  if ( !v4
    || v4 <= **(_QWORD **)(a1 + 24)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v4 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  std::wstreambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( v3 == 0xFFFF )
    return 0;
  else
    ***(_WORD ***)(a1 + 56) = v3;
  return v3;
}
