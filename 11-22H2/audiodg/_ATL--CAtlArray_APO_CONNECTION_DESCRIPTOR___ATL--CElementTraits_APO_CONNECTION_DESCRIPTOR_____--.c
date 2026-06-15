/*
 * XREFs of _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140035187
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x14000FC40 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ?RelocateElements@?$CElementTraitsBase@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@SAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@0_K@Z @ 0x14008F624 (-RelocateElements@-$CElementTraitsBase@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@SAXPEAPEAUAPO_CONNEC.c)
 */

void __fastcall __noreturn ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch_0(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)a2[10];
  ATL::CElementTraitsBase<APO_CONNECTION_DESCRIPTOR *>::RelocateElements(
    *v3 + 8LL * a2[11],
    *v3 + 8 * (a2[11] + 1LL),
    a2[13] - a2[11]);
  ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
    (__int64)v3,
    a2[13]);
  throw;
}
