/*
 * XREFs of sub_140A08040 @ 0x140A08040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A07EC0 @ 0x140A07EC0 (sub_140A07EC0.c)
 */

void __fastcall sub_140A08040(__int64 a1)
{
  __int64 v2; // rdx
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( sub_140A07EC0(a1, (__int64 *)&v3) )
  {
    sub_14042A5E0(a1, v2);
    sub_1403614E0(v3);
  }
}
