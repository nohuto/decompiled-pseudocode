/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EEB0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x14008F418 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(
        struct ATL::CAtlPlex **a1,
        _QWORD *a2)
{
  struct ATL::CAtlPlex *v3; // rsi
  struct ATL::CAtlPlex *v5; // rdx
  struct ATL::CAtlPlex *v6; // rcx
  struct ATL::CAtlPlex *result; // rax
  struct ATL::CAtlPlex *v8; // rax
  int v9; // r8d
  struct ATL::CAtlPlex *i; // rdx

  v3 = *a1;
  if ( !a1[4] )
  {
    v8 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *((_DWORD *)a1 + 10) - 1;
    for ( i = (struct ATL::CAtlPlex *)((char *)v8 + 16 * v9 + 8 * (unsigned int)v9 + 8); v9 >= 0; --v9 )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
      i = (struct ATL::CAtlPlex *)((char *)i - 24);
    }
  }
  v5 = a1[4];
  v6 = *(struct ATL::CAtlPlex **)v5;
  *((_QWORD *)v5 + 2) = *a2;
  a1[4] = v6;
  *((_QWORD *)v5 + 1) = 0LL;
  *(_QWORD *)v5 = v3;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
