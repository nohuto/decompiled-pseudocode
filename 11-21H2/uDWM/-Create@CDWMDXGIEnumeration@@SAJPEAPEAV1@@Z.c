/*
 * XREFs of ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18003C7A0
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x18003CB78 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::Create(struct CDWMDXGIEnumeration **a1)
{
  __int64 v2; // rax
  CDWMDXGIEnumeration *v3; // rbx
  int inited; // eax
  unsigned int v5; // edi

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         88LL);
  v3 = (CDWMDXGIEnumeration *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v2 = &CDWMDXGIEnumeration::`vftable';
    *(_DWORD *)(v2 + 8) = 0;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 76) = 0;
    *(_DWORD *)(v2 + 80) = 0;
    ((void (__fastcall *)(__int64))CDWMDXGIEnumeration::`vftable')(v2);
    inited = CDWMDXGIEnumeration::InitDXGI(v3);
    v5 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A384, 1LL, inited, 0x3Cu);
      (*(void (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      *a1 = v3;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A384, 1LL, -2147024882, 0x38u);
  }
  return v5;
}
