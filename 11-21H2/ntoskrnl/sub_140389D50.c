/*
 * XREFs of sub_140389D50 @ 0x140389D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 */

void __fastcall sub_140389D50(int a1)
{
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  dword_140C20488 = a1;
  sub_14022475C(0);
  byte_140C203E8 = 0;
}
