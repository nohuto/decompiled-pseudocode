/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x18010E6EC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18010EBA0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x1800715D4 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800717D4 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18010F3A0 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18014D738 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  unsigned int v7; // eax
  _OWORD *Transform; // rax
  void *WeakInputSinkHandle; // rax
  _BYTE v11[72]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int16 v13; // [rsp+70h] [rbp+8h]
  int v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 15);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
  if ( !*(_BYTE *)(v4 + 480) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
  v6 = v4 + 48;
  if ( !*(_BYTE *)(v6 + 432) )
    std::_Throw_bad_optional_access();
  v7 = ToCompositionInputType(*(unsigned int *)a2);
  *((_QWORD *)a2 + 8) = *((_QWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)v6, v7) + 1);
  Transform = (_OWORD *)LegacyInputSinkData::GetTransform(v6, v11);
  *(_OWORD *)((char *)a2 + 236) = *Transform;
  *(_OWORD *)((char *)a2 + 252) = Transform[1];
  *(_OWORD *)((char *)a2 + 268) = Transform[2];
  *(_OWORD *)((char *)a2 + 284) = Transform[3];
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v14 = 0;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v6);
    NtQueryCompositionInputIsImplicit(WeakInputSinkHandle, &v14);
    HIBYTE(v13) = 1;
    LOBYTE(v13) = v14 != 0;
    *(_WORD *)(v6 + 24) = v13;
    if ( !*(_BYTE *)(v6 + 25) )
      std::_Throw_bad_optional_access();
  }
  *((_DWORD *)a2 + 18) = *(unsigned __int8 *)(v6 + 24);
  return 0LL;
}
