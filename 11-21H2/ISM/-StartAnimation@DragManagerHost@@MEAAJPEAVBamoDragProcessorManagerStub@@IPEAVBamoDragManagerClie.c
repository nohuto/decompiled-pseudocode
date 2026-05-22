/*
 * XREFs of ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801411F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AFD0 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::StartAnimation(__int64 a1, __int64 a2, unsigned int a3, char *a4, int a5)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a5 )
  {
    if ( a5 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        96LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gmanagerhost.cpp",
        a4);
    EdgyProcessor::StartAnimation(*(EdgyProcessor **)(a1 + 64), a3, (struct BamoDragManagerClientProxy *)a4);
  }
  else
  {
    DragNDropProcessor::StartAnimation(*(DragNDropProcessor **)(a1 + 56), a3, (struct BamoDragManagerClientProxy *)a4);
  }
  return 0LL;
}
