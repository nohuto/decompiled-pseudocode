/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EB2A0
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EFAB0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180016F30 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  const struct tagRECT *v6; // rdx
  volatile signed __int32 *v7; // rbx
  CBaseObject *v9; // [rsp+30h] [rbp-28h] BYREF
  __m128i v10; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v4 = CAccent::Create(&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = a1;
    v10.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v7 = (volatile signed __int32 *)v9;
    v10.m128i_i32[0] = 1;
    CAccent::UpdateAccentPolicy(v9, v6, &v10, 0LL);
    *a2 = (struct CAccent *)v7;
    if ( !v7 )
      return v5;
    _InterlockedIncrement(v7 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x1CAu);
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v5;
}
