/*
 * XREFs of ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x18003E560
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180595810 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18059772C (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnMessage(CShellSnapComponent *this, __int64 a2, int a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    a2);
  v5 = a3 - 101;
  if ( !v5 )
  {
    CShellSnapComponent::ToggleSnapFlyout((CShellSnapComponent *)((char *)this - 152));
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v10 = (char *)this - 8;
    v11 = *((_QWORD *)this - 1);
    v12 = 2424841LL;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = (char *)this - 8;
    v11 = *((_QWORD *)this - 1);
    v12 = 2555913LL;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = (char *)this - 8;
    v11 = *((_QWORD *)this - 1);
    v12 = 2490377LL;
    goto LABEL_11;
  }
  if ( v8 == 1 )
  {
    v10 = (char *)this - 8;
    v11 = *((_QWORD *)this - 1);
    v12 = 2621449LL;
LABEL_11:
    (*(void (__fastcall **)(char *, _QWORD, __int64))(v11 + 32))(v10, 0LL, v12);
    CShellSnapComponent::RegisterRawInput((CShellSnapComponent *)((char *)this - 152));
  }
  return 0LL;
}
