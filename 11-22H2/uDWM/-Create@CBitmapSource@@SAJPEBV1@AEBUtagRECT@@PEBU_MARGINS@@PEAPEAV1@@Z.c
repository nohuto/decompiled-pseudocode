/*
 * XREFs of ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18003AAD8
 * Callers:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003ACD0 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x18003AC9C (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        const struct CBitmapSource *a1,
        const struct tagRECT *a2,
        const struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &CBitmapSource::`vftable';
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_DWORD *)(v9 + 80) = 0x80000000;
    *(_DWORD *)(v9 + 88) = 0x80000000;
    *(_DWORD *)(v9 + 84) = 0x80000000;
    *(_DWORD *)(v9 + 92) = 0x80000000;
    wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(v9 + 16, *((_QWORD *)a1 + 2));
    v11 = 0;
    *(struct tagRECT *)(v10 + 80) = *a2;
    if ( *(_DWORD *)(v10 + 88) - *(_DWORD *)(v10 + 80) >= 0 )
      v11 = *(_DWORD *)(v10 + 88) - *(_DWORD *)(v10 + 80);
    *(_DWORD *)(v10 + 24) = v11;
    v12 = 0;
    if ( *(_DWORD *)(v10 + 92) - *(_DWORD *)(v10 + 84) >= 0 )
      v12 = *(_DWORD *)(v10 + 92) - *(_DWORD *)(v10 + 84);
    *(_DWORD *)(v10 + 28) = v12;
    if ( a3 )
      *(struct _MARGINS *)(v10 + 32) = *a3;
    *a4 = (struct CBitmapSource *)v10;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu, 0LL);
  }
  return v8;
}
