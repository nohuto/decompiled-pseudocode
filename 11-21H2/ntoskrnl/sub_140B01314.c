/*
 * XREFs of sub_140B01314 @ 0x140B01314
 * Callers:
 *     sub_1403C09F8 @ 0x1403C09F8 (sub_1403C09F8.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140B01314()
{
  sub_14042A5E0(47LL, 1LL);
  byte_140C44638 = 0;
  if ( byte_140C450C8 )
  {
    dword_140C44634 = 3;
    ExInitializeResourceLite(&stru_140C44540);
    qword_140C44538 = (__int64)&KdDebuggerEnabled + 7;
    *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) = (PBOOLEAN)&KdDebuggerEnabled + 7;
  }
  else
  {
    dword_140C44634 = 0;
  }
  return 0LL;
}
