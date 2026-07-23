/*
 * XREFs of sub_14040AE3C @ 0x14040AE3C
 * Callers:
 *     sub_140400CD8 @ 0x140400CD8 (sub_140400CD8.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040B4A4 @ 0x14040B4A4 (sub_14040B4A4.c)
 */

__int64 __fastcall sub_14040AE3C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // r15d
  int v7; // ebx
  int v8; // edi
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 4);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a2;
  v8 = a1;
  _misaligned_access();
  sub_14040B4A4(v8 + 32, v5, v7 + 32, v6, a3 + 32);
  result = (unsigned int)(v6 + v5);
  if ( (unsigned int)result < v3 )
    return sub_1403FDDE8(a3 + 32 + 4LL * (unsigned int)(16 * result), (v3 - v6 - v5) << 6);
  return result;
}
