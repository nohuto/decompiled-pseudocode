/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003C8C0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18004F200 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x18003CC7C (--$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800466A0 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008D28C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r13
  _DWORD *v13; // r14
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 j; // rbx
  __int64 v25; // rdi
  __int64 v26; // r9
  int v27; // edi
  __int64 (__fastcall **k)(const struct DeviceInfo *); // rbx
  __int64 v29; // r12
  const char *v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rcx
  __int64 v42; // [rsp+20h] [rbp-59h]
  int v43; // [rsp+20h] [rbp-59h]
  int v44; // [rsp+20h] [rbp-59h]
  __int64 v45; // [rsp+28h] [rbp-51h]
  __int64 v46; // [rsp+30h] [rbp-49h] BYREF
  __int128 v47; // [rsp+38h] [rbp-41h] BYREF
  __int64 v48; // [rsp+48h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-29h] BYREF
  LPVOID v50; // [rsp+58h] [rbp-21h] BYREF
  __int64 v51; // [rsp+60h] [rbp-19h] BYREF
  __int64 v52; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v53[3]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v54[72]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+F0h] [rbp+77h] BYREF
  WINBOOL v57; // [rsp+F8h] [rbp+7Fh] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v47 = &`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    DWORD2(v47) = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v47);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    v50 = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v57, &v50) && v57 )
    {
      *(_QWORD *)&v47 = &`InputETW::Instance'::`2'::wrapper;
      v50 = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      DWORD2(v47) = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&v47);
    }
    v40 = *((_QWORD *)v50 + 1);
    if ( *(_DWORD *)v40 > 5u
      && (*(_BYTE *)(v40 + 16) & 1) != 0
      && (*(_QWORD *)(v40 + 24) & 1LL) == *(_QWORD *)(v40 + 24) )
    {
      v51 = *((int *)a2 + 1);
      v52 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v40,
        (unsigned int)&unk_180201683,
        v38,
        v39,
        (__int64)&v52,
        (__int64)&v51);
    }
  }
  if ( !a3 )
    goto LABEL_19;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v7);
  v9 = 2 * (v7 & *((_QWORD *)this + 19));
  v10 = *((_QWORD *)this + 16);
  v11 = *(_QWORD *)(v10 + 16 * (v7 & *((_QWORD *)this + 19)) + 8);
  v12 = (_QWORD *)((char *)this + 112);
  v46 = *((_QWORD *)this + 14);
  if ( v11 == v46 )
  {
LABEL_9:
    if ( *((_QWORD *)this + 15) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v47 = (unsigned __int64)v12;
    v13 = operator new(0x20uLL);
    *((_QWORD *)&v47 + 1) = v13;
    v13[4] = *(_DWORD *)a2;
    *((_QWORD *)v13 + 3) = a3;
    v14 = *((_QWORD *)this + 15);
    v15 = v14 + 1;
    if ( v14 + 1 < 0 )
      v16 = (float)(int)(v15 & 1 | (v15 >> 1)) + (float)(int)(v15 & 1 | (v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *((_QWORD *)this + 20);
    if ( v17 < 0 )
    {
      v36 = *((_QWORD *)this + 20) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v36 + (float)(int)v36;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *((float *)this + 26) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1((char *)this + 104);
      v47 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         (char *)this + 104,
                         v54,
                         v13 + 4,
                         v7,
                         v42,
                         v45);
      v14 = *((_QWORD *)this + 15);
      v19 = v47;
    }
    else
    {
      v19 = v46;
    }
    v20 = *(_QWORD **)(v19 + 8);
    *((_QWORD *)this + 15) = v14 + 1;
    *(_QWORD *)v13 = v19;
    *((_QWORD *)v13 + 1) = v20;
    *v20 = v13;
    *(_QWORD *)(v19 + 8) = v13;
    v21 = *((_QWORD *)this + 16);
    v22 = 2 * (v7 & *((_QWORD *)this + 19));
    v23 = *(_QWORD *)(v21 + 16 * (v7 & *((_QWORD *)this + 19)));
    if ( v23 == *v12 )
    {
      *(_QWORD *)(v21 + 16 * (v7 & *((_QWORD *)this + 19))) = v13;
    }
    else
    {
      if ( v23 == v19 )
      {
        *(_QWORD *)(v21 + 16 * (v7 & *((_QWORD *)this + 19))) = v13;
        goto LABEL_19;
      }
      if ( *(_QWORD **)(v21 + 16 * (v7 & *((_QWORD *)this + 19)) + 8) != v20 )
        goto LABEL_19;
    }
    *(_QWORD *)(v21 + 8 * v22 + 8) = v13;
  }
  else
  {
    while ( *(_DWORD *)a2 != *(_DWORD *)(v11 + 16) )
    {
      if ( v11 == *(_QWORD *)(v10 + 8 * v9) )
      {
        v46 = v11;
        goto LABEL_9;
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    *(_QWORD *)(v11 + 24) = a3;
  }
LABEL_19:
  for ( j = *((_QWORD *)this + 11); j != *((_QWORD *)this + 10); j -= 16LL )
  {
    v25 = *(_QWORD *)(j - 8);
    v48 = v25;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v25 + 32LL))(v25, a2) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v37 = *((_QWORD *)this + 11);
      if ( v37 == *((_QWORD *)this + 12) )
      {
        std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
          (char *)this + 80,
          v37,
          a2,
          &v48);
      }
      else
      {
        *(_DWORD *)v37 = *(_DWORD *)a2;
        *(_QWORD *)(v37 + 8) = v25;
        *((_QWORD *)this + 11) += 16LL;
      }
      goto LABEL_39;
    }
  }
  v46 = 0LL;
  v48 = 0LL;
  v53[2] = 0LL;
  v53[0] = a2;
  v53[1] = (char *)this + 8;
  if ( !a2 || this == (InputStateManager *)-8LL )
    v26 = 2147942487LL;
  else
    v26 = 0LL;
  if ( (int)v26 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)v26,
      v42);
  v27 = 0;
  for ( k = &off_180240020; ; k += 6 )
  {
    v29 = (__int64)*(k - 1);
    if ( !InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( _bittest64(&v29, gdwDeviceFamily)
      && (!*k || (unsigned int)(*k)((const struct DeviceInfo *)v53[0]))
      && ((int (__fastcall *)(_QWORD *, __int64 *))k[1])(v53, &v48) >= 0 )
    {
      break;
    }
    if ( (unsigned int)++v27 >= 0x13 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
        (const char *)0x80070490LL,
        v42);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)0x80070490LL,
        v43);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)0x80070490LL,
        v44);
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v46);
      return 2147943568LL;
    }
  }
  v46 = 0LL;
  v31 = v48;
  *(_QWORD *)&v47 = v48;
  v32 = *((_QWORD *)this + 11);
  if ( v32 == *((_QWORD *)this + 12) )
  {
    std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
      (char *)this + 80,
      v32,
      a2,
      &v47);
  }
  else
  {
    *(_DWORD *)v32 = *(_DWORD *)a2;
    *(_QWORD *)(v32 + 8) = v31;
    *((_QWORD *)this + 11) += 16LL;
  }
  v33 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_39:
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v30);
  if ( *(_DWORD *)ISMScenarios::s_instance )
    return 0LL;
  v34 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2);
  v35 = v34;
  if ( v34 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v34,
    v42);
  return v35;
}
