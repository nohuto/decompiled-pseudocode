/*
 * XREFs of sub_14040B5F0 @ 0x14040B5F0
 * Callers:
 *     sub_14040C930 @ 0x14040C930 (sub_14040C930.c)
 *     sub_14040C9E0 @ 0x14040C9E0 (sub_14040C9E0.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_14040DA70 @ 0x14040DA70 (sub_14040DA70.c)
 *     sub_140411CE0 @ 0x140411CE0 (sub_140411CE0.c)
 */

__int64 __fastcall sub_14040B5F0(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((dword_140C094E0 | (unsigned int)sub_140259650()) & 0x181) != 0 )
    return sub_14040DA70(a1, a2, a3);
  else
    return sub_140411CE0(a1, a2, a3);
}
