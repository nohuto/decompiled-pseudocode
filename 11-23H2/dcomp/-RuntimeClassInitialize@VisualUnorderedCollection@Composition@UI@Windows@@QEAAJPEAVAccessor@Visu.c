/*
 * XREFs of ?RuntimeClassInitialize@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@PEAVCompositor@234@@Z @ 0x1800088E4
 * Callers:
 *     ??$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionLight@234@PEAVVisualUnorderedCollectionImpl@234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionLight@456@$$QEAPEAVVisualUnorderedCollectionImpl@456@$$QEAPEAVCompositor@456@@Z @ 0x1800087F4 (--$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::RuntimeClassInitialize(
        Windows::UI::Composition::VisualUnorderedCollection *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *a2,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a3,
        struct Windows::UI::Composition::Compositor *a4)
{
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v7 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a4);
    if ( v7 >= 0 )
    {
      *((_QWORD *)this + 20) = a2;
      (*(void (__fastcall **)(struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *))(*(_QWORD *)a2 + 8LL))(a2);
      result = 0LL;
      *((_QWORD *)this + 19) = a3;
      return result;
    }
    v9 = 54LL;
  }
  else
  {
    v7 = -2147024809;
    v9 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollection.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return (unsigned int)v7;
}
