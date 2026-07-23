/*
 * XREFs of sub_14025C930 @ 0x14025C930
 * Callers:
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140A8142C @ 0x140A8142C (sub_140A8142C.c)
 * Callees:
 *     sub_14059A814 @ 0x14059A814 (sub_14059A814.c)
 */

__int64 __fastcall sub_14025C930(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 32);
  if ( v1 > (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    return 1LL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    return 1LL;
  if ( (unsigned __int16)v1 > 1u )
    return 1LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
    return 1LL;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return 1LL;
  result = sub_14059A814();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
