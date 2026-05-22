/*
 * XREFs of ?SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18014F948
 * Callers:
 *     ?SetMatrix3x2Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@5@@Z @ 0x18014F8B0 (-SetMatrix3x2Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMat.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetMatrix3x2@ParameterEntry@@QEAAXAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z @ 0x18014F83C (-SetMatrix3x2@ParameterEntry@@QEAAXAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetMatrix3x2Parameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a3)
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
    DoStackCaptureDirect(v6, 0x24Au);
  }
  else
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v9, &v10);
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v9, v10);
    ParameterEntry::SetMatrix3x2((volatile signed __int32 **)v9, a3);
    return 0;
  }
  return v7;
}
