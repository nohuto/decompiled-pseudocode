/*
 * XREFs of sub_14022F104 @ 0x14022F104
 * Callers:
 *     sub_140307E90 @ 0x140307E90 (sub_140307E90.c)
 * Callees:
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 */

__int64 __fastcall sub_14022F104(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rax

  result = qword_140C2B7F8;
  if ( qword_140C2B7F8 )
  {
    LOBYTE(a3) = 1;
    sub_14022F440(0LL, 1397707336LL, a3);
    qword_140C2B7F8 = 0LL;
    if ( byte_140D06889 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v4) = 1;
      *((_BYTE *)CurrentPrcb + 37060) &= ~1u;
      return sub_14056D050(v4);
    }
    else
    {
      return sub_14022F4BC();
    }
  }
  return result;
}
