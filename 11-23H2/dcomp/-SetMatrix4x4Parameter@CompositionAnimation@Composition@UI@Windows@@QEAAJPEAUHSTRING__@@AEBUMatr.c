/*
 * XREFs of ?SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FB64
 * Callers:
 *     ?SetMatrix4x4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@5@@Z @ 0x18003FAF0 (-SetMatrix4x4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMat.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18003FC24 (-SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetMatrix4x4Parameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct ParameterEntry *v9; // [rsp+30h] [rbp-18h] BYREF
  bool v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0;
  v6 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x270u);
  }
  else
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v9, &v10);
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v9, v10);
    ParameterEntry::SetMatrix4x4(v9, a3);
    return 0;
  }
  return v7;
}
