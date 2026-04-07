/*
 * XREFs of ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x18003ABC8
 * Callers:
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18003984C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180021FEC (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x18003AC9C (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CBitmapSourceProxy>(__int64 a1, CBaseObject **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v10 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CCombinedGeometryProxy::`vftable';
  }
  wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(&v9, v4);
  v5 = v9;
  if ( v9 )
  {
    v6 = CResource::Create(4u, *(_QWORD *)(a1 + 24), (CBaseObject **)v9 + 2);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x10u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x79u, 0LL);
    }
    else
    {
      *a2 = v5;
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77u, 0LL);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
