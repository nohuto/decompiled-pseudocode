/*
 * XREFs of sub_18001DBD0 @ 0x18001DBD0
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E7D0 @ 0x18001E7D0 (sub_18001E7D0.c)
 *     sub_18001E83C @ 0x18001E83C (sub_18001E83C.c)
 *     sub_18001F90C @ 0x18001F90C (sub_18001F90C.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 *     sub_180051F3C @ 0x180051F3C (sub_180051F3C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001DBD0(__int64 a1, unsigned __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
}
