/*
 * XREFs of ?RuntimeClassInitialize@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionInteractionSourceCollection@2345@@Z @ 0x1801A21D0
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@V12345@AEAPEAVCompositionInteractionSourceCollection@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@AEAPEAVCompositionInteractionSourceCollection@4567@@Z @ 0x18018FBCC (--$MakeAndInitialize2@VCompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::RuntimeClassInitialize(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator *this,
        struct Microsoft::WRL2::ContextSession **a2)
{
  int v4; // eax
  unsigned int v5; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(this, a2[3]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *((struct Microsoft::WRL2::ContextSession ***)this + 8) != a2 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)a2);
      v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = a2;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourceiterator.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
