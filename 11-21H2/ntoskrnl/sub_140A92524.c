/*
 * XREFs of sub_140A92524 @ 0x140A92524
 * Callers:
 *     sub_140A9B888 @ 0x140A9B888 (sub_140A9B888.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A92524(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // ebp
  __int64 v5; // rdx

  v2 = 0;
  v3 = a2;
  if ( qword_140D5A228 )
    v2 = sub_14042A5E0(a1, a2);
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (unsigned int)v5 > 0x1B )
    v5 = (unsigned int)((_DWORD)v5 != 255) + 28;
  if ( qword_140D597A8[12 * v5] )
    return (unsigned int)sub_14042A5E0(a1, v3);
  return v2;
}
