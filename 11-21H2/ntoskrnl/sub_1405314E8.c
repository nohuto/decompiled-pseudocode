/*
 * XREFs of sub_1405314E8 @ 0x1405314E8
 * Callers:
 *     sub_1405313B4 @ 0x1405313B4 (sub_1405313B4.c)
 *     sub_1405336FC @ 0x1405336FC (sub_1405336FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405314E8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // eax
  __int64 v5; // rcx

  result = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( *(_DWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a3 + 16) = 0x2000000000000001LL;
    _BitScanForward(&v4, *(_DWORD *)(a2 + 20));
    result = (2LL * (v4 & 0xF)) | 0x2000000000000001LL;
    *(_QWORD *)(a3 + 16) = result;
    v5 = result | *(_QWORD *)a2 & 0xFFFFFFFFFFFC0LL | 0x400000000000000LL;
  }
  else
  {
    v5 = 0x1000000000000020LL;
  }
  *(_QWORD *)(a3 + 16) = v5;
  return result;
}
