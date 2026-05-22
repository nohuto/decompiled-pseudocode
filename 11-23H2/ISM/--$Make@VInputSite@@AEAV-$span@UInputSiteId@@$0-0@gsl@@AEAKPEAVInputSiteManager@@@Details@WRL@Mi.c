/*
 * XREFs of ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x180029950
 * Callers:
 *     ?CreateInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@K@Z @ 0x180002C48 (-CreateInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UI.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180045EB0 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800979BC (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
        _QWORD *a1,
        _OWORD *a2,
        int *a3,
        __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int64 v12; // rbx
  int v13; // r13d
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  char *v17; // rax
  char *v18; // rsi
  void *Src[2]; // [rsp+50h] [rbp-38h]

  *a1 = 0LL;
  v11 = operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v11 )
    return a1;
  v12 = *a4;
  if ( v12 )
    (**(void (__fastcall ***)(__int64))v12)(v12);
  v13 = *a3;
  *(_OWORD *)Src = *a2;
  v11[3] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  v14 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v11 = &InputSite::`vftable';
  *((_QWORD *)v11 + 2) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 4) = 0LL;
  if ( Src[1] > (char *)Src[1] + 16 * (__int64)Src[0] )
  {
    _o_terminate(v14, v8, v9, v10, 3);
    __debugbreak();
    goto LABEL_20;
  }
  v15 = (16 * (__int64)Src[0]) >> 4;
  if ( v15 )
  {
    if ( v15 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v16 = 16 * v15;
      if ( 16 * v15 >= 0x1000 )
      {
        v17 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(16 * v15);
      }
      else if ( v16 )
      {
        v17 = (char *)operator new(16 * v15);
      }
      else
      {
        v17 = 0LL;
      }
      *((_QWORD *)v11 + 2) = v17;
      *((_QWORD *)v11 + 3) = v17;
      *((_QWORD *)v11 + 4) = &v17[v16];
      v18 = (char *)*((_QWORD *)v11 + 2);
      memmove_0(v18, Src[1], 16 * (__int64)Src[0]);
      *((_QWORD *)v11 + 3) = &v18[16 * v15];
      goto LABEL_13;
    }
LABEL_20:
    std::_Xlength_error("vector too long");
  }
LABEL_13:
  v11[10] = v13;
  *((_BYTE *)v11 + 480) = 0;
  *((_QWORD *)v11 + 61) = 0LL;
  *((_QWORD *)v11 + 62) = 0LL;
  *((_QWORD *)v11 + 63) = 0LL;
  *((_QWORD *)v11 + 64) = v12;
  if ( v12 )
  {
    (**(void (__fastcall ***)(__int64))v12)(v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = v11;
  return a1;
}
