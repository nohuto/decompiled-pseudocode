/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180037BD8
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180021690 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801CB800 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z @ 0x180051D80 (--0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  ContextualProcessorBuffer *v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = (ContextualProcessorBuffer *)RefCountedObject::operator new(0xA8uLL);
    if ( v6 )
      v6 = ContextualProcessorBuffer::ContextualProcessorBuffer(v6, a1, a2);
    if ( v6 )
    {
      *a3 = v6;
      return 0LL;
    }
    v8 = -2147024882;
    v9 = 93LL;
  }
  else
  {
    v8 = -2147024809;
    v9 = 86LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
    (const char *)v8);
  return v8;
}
