/*
 * XREFs of sub_140429620 @ 0x140429620
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveStateForHibernate @ 0x140420460 (KeSaveStateForHibernate.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 */

__int64 __fastcall sub_140429620(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rbp
  bool v2; // zf
  __int64 result; // rax

  if ( !__readgsdword(0x1A4u) )
  {
    v1 = BugCheckParameter3;
    KeSaveStateForHibernate((__int64)&unk_140CF6A70);
    v2 = (unsigned __int8)sub_140A4E0E0() == 0;
    result = 1073742484LL;
    if ( !v2 )
      return result;
    BugCheckParameter3 = v1;
  }
  return sub_140A4B9E0(BugCheckParameter3);
}
