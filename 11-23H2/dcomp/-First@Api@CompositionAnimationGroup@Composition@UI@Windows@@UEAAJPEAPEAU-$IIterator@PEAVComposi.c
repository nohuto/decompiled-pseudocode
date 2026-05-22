/*
 * XREFs of ?First@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionAnimation@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x180151920
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VCompositionAnimationIterator@Composition@UI@Windows@@V1234@AEAPEAVCompositionAnimationGroup@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationIterator@Composition@UI@Windows@@AEAPEAVCompositionAnimationGroup@456@@Z @ 0x180150ECC (--$MakeAndInitialize2@VCompositionAnimationIterator@Composition@UI@Windows@@V1234@AEAPEAVComposi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationGroup::Api::First(__int64 a1, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionAnimationGroup *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  v9 = (struct Windows::UI::Composition::CompositionAnimationGroup *)(a1 - 152);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    v8 = 0LL;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionAnimationIterator,Windows::UI::Composition::CompositionAnimationIterator,Windows::UI::Composition::CompositionAnimationGroup * &>(
           &v8,
           &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x237u);
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    }
    else
    {
      *a2 = ((unsigned __int64)v8 + 40) & -(__int64)(v8 != 0LL);
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
