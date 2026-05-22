/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180100080
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x180066770 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x180066790 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800FFBCC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180100348 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1801003F8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x18010081C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18013F688 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1801407B0 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char *v7; // r14
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdi
  float *v15; // rax
  float *v16; // rax
  int v17; // edi
  unsigned __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  int v19; // [rsp+38h] [rbp-31h] BYREF
  int v20; // [rsp+40h] [rbp-29h] BYREF
  void *v21; // [rsp+48h] [rbp-21h]
  _OWORD v22[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v19);
  if ( (v19 & *(_DWORD *)a2) == 0 && v19 )
    return 2147549443LL;
  v7 = (char *)this + 80;
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( operator==((__int64)this + 80, (__int64)v22, v4, v5) )
    return 0LL;
  InputTraceLogging::ISM::DeliverInput(a2);
  v10 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v11 = DWMInputTarget::AddDwmInputRoutingData(this, a2, v8, v9);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x148,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
      v10 = *(_DWORD *)a2;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 244) = 0LL;
      *(_QWORD *)((char *)a2 + 236) = 1065353216LL;
      *((_QWORD *)a2 + 32) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 276) = 1065353216LL;
      *((_DWORD *)a2 + 74) = 1065353216;
      *((_DWORD *)a2 + 63) = 0;
      *((_QWORD *)a2 + 33) = 0LL;
      *((_DWORD *)a2 + 68) = 0;
      *(_QWORD *)((char *)a2 + 284) = 0LL;
      *((_DWORD *)a2 + 73) = 0;
    }
  }
  if ( v10 == 0x4000 )
  {
    v13 = *((_QWORD *)this + 15);
    if ( v13 )
    {
      if ( !*(_BYTE *)(v13 + 480) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x172,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          v9);
      v14 = v13 + 48;
      *((_QWORD *)a2 + 4) = *((_QWORD *)LegacyInputSinkData::GetCompositionInputQueue(
                                          (LegacyInputSinkData *)(v13 + 48),
                                          1u)
                            + 1);
      LegacyInputSinkData::GetTransform(v14, v22);
      if ( *((_BYTE *)a2 + 60) )
      {
        v18 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 11)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12))).m128_u64[0];
        v15 = (float *)CInputTransform::ScreenPointToRelative(&v20, &v18, v22);
        v18 = __PAIR64__((int)v15[1], (int)*v15);
        *(_QWORD *)((char *)a2 + 52) = v18;
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v18 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
        v16 = (float *)CInputTransform::ScreenPointToRelative(&v20, &v18, v22);
        v18 = __PAIR64__((int)v16[1], (int)*v16);
        *(_QWORD *)((char *)a2 + 52) = v18;
      }
    }
  }
  InputEventPayloadBuffer::InputEventPayloadBuffer(&v20, 5LL, a2);
  v17 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                         + 24LL))(
          NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
          v7,
          v21,
          v20);
  InputETW::InputTarget::DeliverInputReport(a2);
  if ( v17 >= 0 )
  {
    if ( v21 )
      operator delete[](v21);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x198,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)(unsigned int)v17);
  if ( v21 )
    operator delete[](v21);
  return (unsigned int)v17;
}
