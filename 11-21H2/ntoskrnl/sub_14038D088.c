/*
 * XREFs of sub_14038D088 @ 0x14038D088
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038D088(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v4; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)dword_140D31000;
  v4 = dword_140C2B1C0;
  if ( (*((_BYTE *)CurrentPrcb + 34) & 1) != 0 )
  {
    result = sub_14042A5E0(a1, a2);
    *((_BYTE *)CurrentPrcb + 34) &= ~1u;
    *((_BYTE *)CurrentPrcb + 37128) = 0;
  }
  if ( *((_DWORD *)CurrentPrcb + 9) == v4 )
    ++dword_140C2B148;
  if ( *((_BYTE *)CurrentPrcb + 33) )
    *((_BYTE *)CurrentPrcb + 33) = 0;
  return result;
}
