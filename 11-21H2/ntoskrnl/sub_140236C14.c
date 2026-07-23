/*
 * XREFs of sub_140236C14 @ 0x140236C14
 * Callers:
 *     sub_140236A00 @ 0x140236A00 (sub_140236A00.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

_BOOL8 __fastcall sub_140236C14(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v2 = a1 + *(__int16 *)(a1 + 22);
    v3 = *(_QWORD *)(v2 + 56) + *(_QWORD *)(v2 + 40);
    return v3 < *(_QWORD *)(v2 + 72)
        && (v3 < *(_QWORD *)(v2 + 64)
         || *(_QWORD *)(v2 + 48) + *(_QWORD *)(v2 + 32) >= ((v3 * *(unsigned __int8 *)(v2 + 80)) << 9) / 0x64);
  }
  if ( v1 == 2 )
    return 0LL;
  if ( v1 == 3 )
    return 1LL;
  return sub_140363220(1LL, a1) & 1;
}
