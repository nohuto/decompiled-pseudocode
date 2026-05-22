/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E71A0
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x18004F760 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x18004F780 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800E6E48 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800E7468 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800E7518 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E7A2C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180124D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18012614C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  char *v5; // r14
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdi
  float *v13; // rax
  float *v14; // rax
  int v15; // edi
  unsigned __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+38h] [rbp-31h] BYREF
  int v18; // [rsp+40h] [rbp-29h] BYREF
  void *v19; // [rsp+48h] [rbp-21h]
  _OWORD v20[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v17);
  if ( (v17 & *(_DWORD *)a2) == 0 && v17 )
    return 2147549443LL;
  v5 = (char *)this + 80;
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( operator==((__int64)this + 80, (__int64)v20) )
    return 0LL;
  InputTraceLogging::ISM::DeliverInput(a2);
  v8 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v9 = DWMInputTarget::AddDwmInputRoutingData(this, a2, v6, v7);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x148,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v8 = *(_DWORD *)a2;
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
  if ( v8 == 0x4000 )
  {
    v11 = *((_QWORD *)this + 15);
    if ( v11 )
    {
      if ( !*(_BYTE *)(v11 + 480) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          370LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          v7);
      v12 = v11 + 48;
      *((_QWORD *)a2 + 4) = *(_QWORD *)(LegacyInputSinkData::GetCompositionInputQueue(v11 + 48, 1u) + 8);
      LegacyInputSinkData::GetTransform(v12, v20);
      if ( *((_BYTE *)a2 + 60) )
      {
        v16 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 11)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12))).m128_u64[0];
        v13 = (float *)CInputTransform::ScreenPointToRelative(&v18, &v16, v20);
        v16 = __PAIR64__((int)v13[1], (int)*v13);
        *(_QWORD *)((char *)a2 + 52) = v16;
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v16 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
        v14 = (float *)CInputTransform::ScreenPointToRelative(&v18, &v16, v20);
        v16 = __PAIR64__((int)v14[1], (int)*v14);
        *(_QWORD *)((char *)a2 + 52) = v16;
      }
    }
  }
  InputEventPayloadBuffer::InputEventPayloadBuffer(&v18, 5LL, a2);
  v15 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                         + 24LL))(
          NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
          v5,
          v19,
          v18);
  InputETW::InputTarget::DeliverInputReport(a2);
  if ( v15 >= 0 )
  {
    if ( v19 )
      operator delete[](v19);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x198,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)(unsigned int)v15);
  if ( v19 )
    operator delete[](v19);
  return (unsigned int)v15;
}
