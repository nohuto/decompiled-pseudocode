/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1801A22AC
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18019FE88 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ??0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z @ 0x18003A5DC (--0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ContextualProcessorBuffer *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 89LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)v6);
    return v6;
  }
  v9 = (ContextualProcessorBuffer *)RefCountedObject::operator new(0xA8uLL);
  if ( v9 )
    v9 = ContextualProcessorBuffer::ContextualProcessorBuffer(v9, a1, a2);
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 96LL;
    goto LABEL_3;
  }
  *a3 = v9;
  return 0LL;
}
