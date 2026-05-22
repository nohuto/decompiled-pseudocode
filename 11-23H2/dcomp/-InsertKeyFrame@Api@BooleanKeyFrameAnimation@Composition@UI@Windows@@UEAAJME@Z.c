/*
 * XREFs of ?InsertKeyFrame@Api@BooleanKeyFrameAnimation@Composition@UI@Windows@@UEAAJME@Z @ 0x18007C880
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18007C94C (-ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESS.c)
 */

__int64 __fastcall Windows::UI::Composition::BooleanKeyFrameAnimation::Api::InsertKeyFrame(
        Windows::UI::Composition::BooleanKeyFrameAnimation::Api *this,
        float a2,
        char a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v6; // rdx
  int inserted; // eax
  unsigned int v8; // edi
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (Windows::UI::Composition::BooleanKeyFrameAnimation::Api *)((char *)this - 496);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 59);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  inserted = Windows::UI::Composition::KeyFrameAnimation::ValidateKeyAndOutputType(v3, v6, 17LL);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 764LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)(unsigned int)inserted);
    DoStackCaptureDirect(v8, 0x2Cu);
    goto LABEL_5;
  }
  v12 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v11[0] = 1;
  *(float *)&v11[2] = (float)(a3 != 0);
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
               v3,
               a2,
               (struct KeyframeValueDefinition *)v11,
               0LL);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 771LL;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v8;
}
