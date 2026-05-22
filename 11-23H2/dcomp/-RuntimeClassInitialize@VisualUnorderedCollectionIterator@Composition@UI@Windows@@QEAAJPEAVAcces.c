/*
 * XREFs of ?RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@@Z @ 0x1801A3B04
 * Callers:
 *     ??$MakeAndInitialize2@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@V1234@AEAPEAVAccessor@VisualUnorderedCollectionImpl@234@AEAPEAV6234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollectionIterator@Composition@UI@Windows@@AEAPEAVAccessor@VisualUnorderedCollectionImpl@456@AEAPEAV8456@@Z @ 0x1801A1B98 (--$MakeAndInitialize2@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@V1234@AEAPEAVAc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::RuntimeClassInitialize(
        Windows::UI::Composition::VisualUnorderedCollectionIterator *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *a2,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a3)
{
  struct Microsoft::WRL2::ContextSession *v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v7 = (struct Microsoft::WRL2::ContextSession *)(*(__int64 (__fastcall **)(struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *))(*(_QWORD *)a2 + 24LL))(a2);
    v8 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(this, v7);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_QWORD *)this + 8) = a2;
      (*(void (__fastcall **)(struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *))(*(_QWORD *)a2 + 8LL))(a2);
      *((_QWORD *)this + 7) = a3;
      v10 = *((_DWORD *)a3 + 8);
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 18) = v10;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollectioniterator.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollectioniterator.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
