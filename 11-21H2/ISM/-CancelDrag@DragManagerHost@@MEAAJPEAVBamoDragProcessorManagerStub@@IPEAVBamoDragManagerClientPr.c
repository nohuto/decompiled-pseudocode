/*
 * XREFs of ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::CancelDrag(__int64 a1, __int64 a2, unsigned int a3, char *a4, int a5)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a5 )
  {
    if ( a5 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        74LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gmanagerhost.cpp",
        a4);
    EdgyProcessor::CancelDrag(*(EdgyProcessor **)(a1 + 64), a3, (struct BamoDragManagerClientProxy *)a4);
  }
  else
  {
    DragNDropProcessor::CancelDrag(*(DragNDropProcessor **)(a1 + 56), a3, (struct BamoDragManagerClientProxy *)a4);
  }
  return 0LL;
}
