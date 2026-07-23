/*
 * XREFs of sub_140A8D070 @ 0x140A8D070
 * Callers:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     sub_140A808A8 @ 0x140A808A8 (sub_140A808A8.c)
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8D070(__int64 a1, const void *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdi

  result = sub_140AA5A48(a1);
  v7 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 240) )
      sub_1405FFB44(0x310u, a2, (const void *)a1);
    if ( !a3 && (*(_DWORD *)(v7 + 56) & 0x200000) != 0 && (*(_BYTE *)(a1 + 71) & 1) != 0 )
      sub_1405FFB44(0x20Du, a2, (const void *)a1);
    if ( (*(_DWORD *)(a1 + 16) & 8) != 0 || (*(_DWORD *)(v7 + 56) & 0x1000) != 0 )
      sub_1405FFB44(0x311u, a2, (const void *)a1);
    return sub_140AA5BCC(v7);
  }
  return result;
}
