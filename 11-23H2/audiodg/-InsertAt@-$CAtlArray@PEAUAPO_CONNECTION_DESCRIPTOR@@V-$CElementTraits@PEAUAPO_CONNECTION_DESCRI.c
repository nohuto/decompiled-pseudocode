/*
 * XREFs of ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000FB7C
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x14000FC40 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@_K@Z @ 0x14000FCA0 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTIO.c)
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // rcx
  errno_t v13; // eax

  v6 = a1[1];
  if ( a2 >= v6 )
  {
    v7 = a2 + 1;
    result = ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
               a1,
               a2 + 1);
    if ( (_BYTE)result )
      goto LABEL_3;
LABEL_24:
    ATL::AtlThrowImpl(-2147024882);
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
                           a1,
                           v6 + 1) )
    goto LABEL_24;
  v7 = a2 + 1;
  v13 = memmove_s((void *const)(*a1 + 8 * (a2 + 1)), 8 * (v6 - a2), (const void *const)(*a1 + 8 * a2), 8 * (v6 - a2));
  if ( v13 )
  {
    if ( v13 == 12 )
      goto LABEL_24;
    if ( v13 == 22 || v13 == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( v13 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  result = ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::CallConstructors();
LABEL_3:
  v9 = a2;
  v10 = v7 - a2;
  if ( a2 < v7 )
  {
    if ( v10 < 2 )
      goto LABEL_12;
    v11 = (unsigned __int64 *)(*a1 + 8 * a2);
    if ( v11 <= a1 && v11 >= a1 )
      goto LABEL_12;
    if ( v11 <= a3 && v11 >= a3 )
      goto LABEL_12;
    v12 = v7 - (v10 & 1);
    do
      v9 += 2LL;
    while ( v9 < v12 );
    result = *a3;
    memset64(v11, *a3, (2 * ((v12 - a2 + 1) >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
    while ( v9 < v7 )
    {
LABEL_12:
      result = *a3;
      *(_QWORD *)(*a1 + 8 * v9++) = *a3;
    }
  }
  return result;
}
