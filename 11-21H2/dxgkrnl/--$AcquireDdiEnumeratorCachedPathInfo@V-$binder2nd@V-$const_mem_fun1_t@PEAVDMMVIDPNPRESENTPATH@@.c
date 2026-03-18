/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0189510
 * Callers:
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01896D0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C01EC640 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6400 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C006A608 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C01BD054 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r9
  _DWORD *v17; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v19; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  unsigned __int64 v24; // rbp
  void *v25; // rax
  void *v26; // r14

  v4 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    if ( !v11 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = a2;
      return 3223192359LL;
    }
    v14 = operator new[](0x178uLL, 0x4E506456u, 256LL, v12);
    v15 = v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = 305419896;
      *(_QWORD *)(v14 + 8) = v11;
      memset((void *)(v14 + 16), 0, 0x168uLL);
      operator delete(0LL);
      v17 = (_DWORD *)(v15 + 16);
      *(_DWORD *)(v15 + 28) = *(_DWORD *)(v11 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v11);
      else
        ContentRotationHw = *(_DWORD *)(v11 + 116);
      *(_DWORD *)(v15 + 36) = ContentRotationHw;
      *(_DWORD *)(v15 + 24) = *(_DWORD *)(v11 + 104);
      *v17 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
      *(_DWORD *)(v15 + 20) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
      *(_DWORD *)(v15 + 80) = *(_DWORD *)(v11 + 164);
      v19 = *(_DWORD *)(v11 + 172);
      *(_DWORD *)(v15 + 84) = v19;
      *(_DWORD *)(v15 + 348) = *(_DWORD *)(v11 + 168);
      if ( v19 == 2 )
        MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v11);
      else
        MacroVisionTriggerBits = 0;
      *(_DWORD *)(v15 + 88) = MacroVisionTriggerBits;
      if ( v15 == -32 )
        WdLogSingleEntry0(1LL);
      *(_DWORD *)(v15 + 32) = *(_DWORD *)(v11 + 120);
      if ( v15 == -40 )
        WdLogSingleEntry0(1LL);
      *(_DWORD *)(v15 + 40) = *(_DWORD *)(v11 + 124);
      v21 = *(_QWORD *)(v11 + 184);
      if ( v21 )
      {
        v22 = *(_OWORD *)(v21 + 16);
        v23 = *(_QWORD *)(v21 + 32);
      }
      else
      {
        v22 = *(_OWORD *)&g_DefaultGammaRamp.Type;
        v23 = 0LL;
      }
      *(_OWORD *)(v15 + 352) = v22;
      *(_QWORD *)(v15 + 368) = v23;
      if ( !*(_QWORD *)(v15 + 368) )
        goto LABEL_18;
      v24 = *(_QWORD *)(v15 + 360);
      v25 = (void *)operator new[](v24, 0x4E506456u, 256LL, v16);
      v26 = v25;
      if ( v25 )
      {
        memmove(v25, *(const void **)(v15 + 368), v24);
        *(_QWORD *)(v15 + 368) = v26;
LABEL_18:
        *a3 = v17;
        v15 = 0LL;
LABEL_19:
        operator delete((void *)v15);
        return v4;
      }
      WdLogSingleEntry1(6LL, v24);
    }
    else
    {
      v15 = 0LL;
      WdLogSingleEntry1(6LL, a1);
    }
    v4 = -1073741801;
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, a1);
  return 3223192375LL;
}
