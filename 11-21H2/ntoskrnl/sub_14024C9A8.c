/*
 * XREFs of sub_14024C9A8 @ 0x14024C9A8
 * Callers:
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_14024C9A8()
{
  void (__fastcall __noreturn *v0)(); // rcx

  v0 = (void (__fastcall __noreturn *)())*((_QWORD *)KeGetCurrentThread() + 164);
  return v0 == sub_1403C81D0 || (char *)v0 == (char *)sub_14058DE20;
}
