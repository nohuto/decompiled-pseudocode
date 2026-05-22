/*
 * XREFs of ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z @ 0x1801785A0
 * Callers:
 *     ?InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUICompositionPath@345@PEAUICompositionEasingFunction@345@@Z @ 0x180178410 (-InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUIC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4 (-AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAl.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 *     ??$_Emplace_reallocate@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@?$vector@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@V?$allocator@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@std@@@std@@QEAAPEAUPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@QEAU23456@$$QEAU23456@@Z @ 0x180177ECC (--$_Emplace_reallocate@UPathSharedAllocation@PathKeyFrameAnimation@Composition@UI@Windows@@@-$ve.c)
 *     ??$emplace_back@AEAPEAVCompositionPath@Composition@UI@Windows@@@?$vector@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?A_TAEAPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180178298 (--$emplace_back@AEAPEAVCompositionPath@Composition@UI@Windows@@@-$vector@V-$RefPtr@VCompositionP.c)
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x1801B2F04 (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::PathKeyFrameAnimation::InsertPathKeyFrame(
        Windows::UI::Composition::PathKeyFrameAnimation *this,
        float a2,
        CPathData **a3,
        struct Windows::UI::Composition::CompositionEasingFunction *a4)
{
  __int64 v7; // rdx
  int inserted; // ebx
  bool v10; // zf
  CPathData *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  char *v14; // rdx
  __int64 v15; // rax
  struct DirectComposition::CSharedAllocation *v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF
  CPathData **v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = a3;
  if ( *((_DWORD *)this + 104) != 11 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(13, (__int64)L"value");
    v7 = 59LL;
LABEL_3:
    inserted = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpathkeyframeanimation.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  v10 = *((_QWORD *)this + 70) == 0LL;
  v11 = a3[8];
  if ( v10 )
  {
    *((_QWORD *)this + 70) = CPathData::GetControlPointCount(v11);
  }
  else if ( CPathData::GetControlPointCount(v11) != *((_QWORD *)this + 70) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(20, (__int64)L"value");
    v7 = 69LL;
    goto LABEL_3;
  }
  v12 = Windows::UI::Composition::CompositionPath::AttachConsumer(
          (Windows::UI::Composition::CompositionPath *)a3,
          *((struct Windows::UI::Composition::Compositor **)this + 3),
          v16,
          &v19);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = (char *)*((_QWORD *)this + 68);
    LODWORD(v16[1]) = v19;
    if ( v14 == *((char **)this + 69) )
    {
      std::vector<Windows::UI::Composition::PathKeyFrameAnimation::PathSharedAllocation>::_Emplace_reallocate<Windows::UI::Composition::PathKeyFrameAnimation::PathSharedAllocation>(
        (__int64)this + 536,
        v14,
        v16);
    }
    else
    {
      *(_OWORD *)v14 = *(_OWORD *)v16;
      *((_QWORD *)this + 68) += 16LL;
    }
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPath>>::emplace_back<Windows::UI::Composition::CompositionPath * &>(
      (__int64)this + 512,
      (Microsoft::WRL2::NestableRuntimeClass **)&v20);
    v17 = 0LL;
    v15 = *((_QWORD *)this + 68) - *((_QWORD *)this + 67);
    *(_OWORD *)v16 = 0LL;
    LODWORD(v16[0]) = 1;
    LODWORD(v16[1]) = (v15 >> 4) - 1;
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                 this,
                 a2,
                 (struct KeyframeValueDefinition *)v16,
                 a4);
    if ( inserted < 0 )
    {
      v7 = 93LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpathkeyframeanimation.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
}
