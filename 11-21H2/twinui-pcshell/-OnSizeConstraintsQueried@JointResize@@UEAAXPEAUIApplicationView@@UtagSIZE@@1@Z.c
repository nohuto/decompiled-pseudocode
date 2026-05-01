/*
 * XREFs of ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800DBE50
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x1805276CC (--$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180527CB8 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 */

void __fastcall JointResize::OnSizeConstraintsQueried(
        JointResize *this,
        struct IUnknown *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  struct IUnknown *v4; // r15
  __int64 v8; // rsi
  __int64 v9; // r14
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  struct tagSIZE v12; // [rsp+80h] [rbp+18h] BYREF
  struct tagSIZE v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    a2);
  v8 = *((_QWORD *)this + 16);
  v9 = *((_QWORD *)this + 17);
  while ( v8 != v9 )
  {
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)v8, v4) )
    {
      v11 = *(_QWORD *)(v8 + 16);
      JointResizeTelemetry::UpdateSizeConstraints<unsigned __int64,long &,long &,long &,long &>(
        (unsigned int)&v11,
        (unsigned int)&v12,
        (unsigned int)&v12.cy,
        (unsigned int)&v13,
        (__int64)&v13.cy);
      v10 = *(_BYTE *)(v8 + 52) == 0;
      *(struct tagSIZE *)(v8 + 44) = a3;
      if ( v10 )
        *(_BYTE *)(v8 + 52) = 1;
      v10 = *(_BYTE *)(v8 + 64) == 0;
      *(struct tagSIZE *)(v8 + 56) = a4;
      if ( v10 )
        *(_BYTE *)(v8 + 64) = 1;
      JointResize::ApplySizeConstraints((JointResize *)((char *)this - 88));
      return;
    }
    v8 += 88LL;
  }
}
