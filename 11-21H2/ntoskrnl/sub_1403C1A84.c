/*
 * XREFs of sub_1403C1A84 @ 0x1403C1A84
 * Callers:
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1403C1F24 @ 0x1403C1F24 (sub_1403C1F24.c)
 *     sub_1403C1F9C @ 0x1403C1F9C (sub_1403C1F9C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405439E0 (HvlGetApicIdFromLpIndex.c)
 *     sub_140544640 @ 0x140544640 (sub_140544640.c)
 */

__int64 __fastcall sub_1403C1A84(unsigned int a1, _DWORD *a2, _WORD *a3)
{
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax

  if ( a1 < (unsigned int)dword_140D06884 )
  {
    _mm_lfence();
    *a3 = *(_WORD *)(*(_QWORD *)(qword_140D088C0[a1] + 192) + 138LL);
    return 0LL;
  }
  v7 = (unsigned __int16)*a3;
  if ( !qword_140C2B110 )
  {
    if ( a1 >= dword_140D0503C )
      return (unsigned int)-1073741275;
    *a3 = 0;
    v9 = 0;
    goto LABEL_8;
  }
  v8 = sub_14042A5E0(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 == -1073741275 )
    {
      if ( (_WORD)v7 == 0xFFFF || (unsigned __int8)sub_1403C1F9C(qword_140D31700[v7]) )
        return v9;
      v9 = 0;
      *a3 = v7;
    }
  }
  else
  {
    if ( *a3 != 0xFFFF )
      goto LABEL_8;
    v9 = sub_1403C1F24(a3);
  }
  if ( !v9 )
  {
LABEL_8:
    if ( (*(_BYTE *)(qword_140D31700[(unsigned __int16)*a3] + 10) & 2) == 0 )
      v9 = -1073741275;
    if ( *a2 == -1 )
      HvlGetApicIdFromLpIndex(a1, a2);
    if ( (dword_140D0688C & 2) == 0 )
      return v9;
    v10 = sub_140544640((unsigned int)*a2);
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 48) )
        return v9;
    }
    return (unsigned int)-1073741275;
  }
  return v9;
}
