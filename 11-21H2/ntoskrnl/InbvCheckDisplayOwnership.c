/*
 * XREFs of InbvCheckDisplayOwnership @ 0x140550BA0
 * Callers:
 *     sub_140417010 @ 0x140417010 (sub_140417010.c)
 *     sub_14050A880 @ 0x14050A880 (sub_14050A880.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 64) )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
