/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180529F80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180528004 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180528B00 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x18052AE88 (-UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z.c)
 *     ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x18052B090 (-UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  LONG left; // ecx
  LONG v5; // edx
  LONG v6; // eax
  unsigned __int64 top; // rcx
  LONG v8; // eax
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64); // r8
  struct tagRECT *v10; // rax
  bool v11; // zf
  struct tagRECT v12; // xmm0
  int updated; // eax
  struct tagPOINT *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  struct tagRECT v20; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct tagRECT v23; // [rsp+60h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    a2);
  if ( *((_BYTE *)this + 168) )
  {
    v20 = *v2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v23, &v20.left);
    left = v23.left;
    v5 = *((_DWORD *)this + 54);
    if ( v23.left < *((_DWORD *)this + 52) )
      left = *((_DWORD *)this + 52);
    v6 = *((_DWORD *)this + 53);
    if ( v5 >= left )
      v5 = left;
    top = (unsigned int)v23.top;
    v23.left = v5;
    if ( v23.top < v6 )
      top = (unsigned int)v6;
    v8 = *((_DWORD *)this + 55);
    if ( v8 >= (int)top )
      v8 = top;
    v23.top = v8;
    if ( v5 != *((_DWORD *)this + 56) || v8 != *((_DWORD *)this + 57) )
    {
      v9 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))*((_QWORD *)this + 14);
      v20 = *v2;
      *((_QWORD *)this + 28) = *(_QWORD *)&v23.left;
      v10 = JointResize::ComputeExtendedViewRect((JointResize *)top, &v21, v9, &v20);
      v11 = *((_QWORD *)this + 12) == 0LL;
      v12 = *v10;
      *v2 = *v10;
      if ( !v11 )
      {
        v20 = v12;
        updated = JointResize::UpdateDropFeedback((JointResize *)((char *)this - 88), &v20);
        if ( updated < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x116,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)updated);
      }
      v20 = *v2;
      v14 = (struct tagPOINT *)JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v23, &v20.left);
      JointResize::UpdateGhostDivider((JointResize *)((char *)this - 88), *v14);
      if ( !*((_BYTE *)this + 368) )
      {
        *((_BYTE *)this + 368) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
          1u,
          v15,
          v16);
        v17 = (_QWORD *)*((_QWORD *)this + 16);
        v18 = (__int64 *)*((_QWORD *)this + 20);
        v19 = *v18;
        if ( 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 17) - (_QWORD)v17) >> 3) == 1 )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v19 + 40))(v18, *((_QWORD *)this + 14), *v17);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD))(v19 + 32))(v18, *((_QWORD *)this + 14));
      }
    }
  }
}
