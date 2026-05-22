/*
 * XREFs of ?SetExpressionReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@@Z @ 0x18003F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48 (-SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetExpressionReferenceParameter(
        Windows::UI::Composition::CompositionAnimation::Api *this,
        HSTRING a2,
        struct Windows::UI::Composition::IAnimationObject *a3)
{
  Windows::UI::Composition::CompositionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v3 = (Windows::UI::Composition::CompositionAnimation::Api *)((char *)this - 152);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::CompositionAnimation::SetExpressionReferenceParameter(v3, a2, a3);
    v8 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x7D5u);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
