/*
 * XREFs of sub_140256380 @ 0x140256380
 * Callers:
 *     sub_14050BFD0 @ 0x14050BFD0 (sub_14050BFD0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140256380()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (*((_BYTE *)CurrentPrcb + 34) & 2) != 0 )
  {
    v4 = sub_140303720(qword_140C4E4C8);
    result = sub_14042A5E0(v4, v5);
    *((_BYTE *)CurrentPrcb + 34) &= ~2u;
  }
  else
  {
    v1 = sub_140303720(qword_140C4E4B0);
    return sub_14042A5E0(v1, v2);
  }
  return result;
}
