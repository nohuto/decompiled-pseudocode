/*
 * XREFs of sub_140A9FCE0 @ 0x140A9FCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B190 @ 0x140A8B190 (sub_140A8B190.c)
 */

__int64 __fastcall sub_140A9FCE0(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140C1B250 )
    sub_140A8B190(retaddr, a1);
  return sub_14042A5E0(a1, a2);
}
