/*
 * XREFs of sub_140A07F10 @ 0x140A07F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A07EC0 @ 0x140A07EC0 (sub_140A07EC0.c)
 */

void __fastcall sub_140A07F10(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( sub_140A07EC0(a1, (__int64 *)&v4) )
  {
    sub_14042A5E0(a1, a2);
    sub_1403614E0(v4);
  }
}
