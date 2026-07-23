/*
 * XREFs of sub_14040CE04 @ 0x14040CE04
 * Callers:
 *     sub_14040C1C0 @ 0x14040C1C0 (sub_14040C1C0.c)
 *     sub_14040C3E0 @ 0x14040C3E0 (sub_14040C3E0.c)
 *     sub_14040C640 @ 0x14040C640 (sub_14040C640.c)
 *     sub_14040C740 @ 0x14040C740 (sub_14040C740.c)
 *     sub_14040C9E0 @ 0x14040C9E0 (sub_14040C9E0.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_14040DE40 @ 0x14040DE40 (sub_14040DE40.c)
 *     sub_140412770 @ 0x140412770 (sub_140412770.c)
 */

__int64 __fastcall sub_14040CE04(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((dword_140C094E0 | (unsigned int)sub_140259650()) & 0x181) != 0 )
    return sub_14040DE40(a1, a2, a3);
  else
    return sub_140412770(a1, a2, a3);
}
