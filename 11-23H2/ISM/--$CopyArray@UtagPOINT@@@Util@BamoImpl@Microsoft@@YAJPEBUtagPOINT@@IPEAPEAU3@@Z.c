/*
 * XREFs of ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x18011DE50
 * Callers:
 *     ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x1801352E0 (-UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 *     ?UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x180135488 (-UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::CopyArray<tagPOINT>(
        void *Src,
        unsigned int a2,
        _QWORD *a3,
        const char *a4)
{
  void *v4; // rbx
  SIZE_T v7; // rdi
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( Src )
  {
    v7 = 8LL * a2;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7);
    v4 = v9;
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoUtil.h",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    memcpy_0(v9, Src, v7);
  }
  else if ( a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7A,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoUtil.h",
      a4);
  }
  *a3 = v4;
  return 0LL;
}
