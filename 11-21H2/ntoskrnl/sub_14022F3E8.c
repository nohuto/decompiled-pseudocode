/*
 * XREFs of sub_14022F3E8 @ 0x14022F3E8
 * Callers:
 *     sub_140307E90 @ 0x140307E90 (sub_140307E90.c)
 * Callees:
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14022F670 @ 0x14022F670 (sub_14022F670.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 */

__int64 __fastcall sub_14022F3E8(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8

  qword_140C2B7F8 = a1;
  if ( byte_140D06889 )
    sub_14056CF48((unsigned int)KeGetCurrentPrcb(), a1, 0, 2, 1, 1);
  else
    sub_14022F4BC();
  v4 = sub_14022F670(a1, a2);
  LOBYTE(v5) = 1;
  return sub_14022F440(v4, 1397707336LL, v5);
}
