/*
 * XREFs of sub_14097F0F0 @ 0x14097F0F0
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140976F28 @ 0x140976F28 (sub_140976F28.c)
 *     sub_14097F148 @ 0x14097F148 (sub_14097F148.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14097F0F0(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  if ( qword_140C1B918 )
  {
    result = sub_14042A5E0(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v2;
  return result;
}
