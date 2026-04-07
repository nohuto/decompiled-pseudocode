/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x18000D3A4
 * Callers:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18000D300 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::WrapExistingResource(__int64 a1, __int64 a2, unsigned int a3, CBaseObject **a4)
{
  __int64 v7; // rax
  CBaseObject *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = (CBaseObject *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = &CResource::`vftable';
    *(_QWORD *)(v7 + 16) = a1;
    *(_DWORD *)(v7 + 24) = a3;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x60u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x81u);
      CBaseObject::Release(v8);
    }
    else
    {
      v10 = 0;
      *a4 = v8;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Fu);
  }
  return v10;
}
