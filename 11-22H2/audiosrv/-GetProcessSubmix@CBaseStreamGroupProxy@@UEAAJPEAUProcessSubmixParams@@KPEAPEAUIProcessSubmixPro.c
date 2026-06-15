/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000BF30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000AC94 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18000C1AC (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180011C08 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FAF0 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x18004A2A4 (--$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180104AC4 (--4-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        CBaseStreamGroupProxy ***this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  CBaseStreamGroupProxy **i; // rdi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  CBaseStreamGroupProxy **v13; // rdx
  struct IProcessSubmixProxy *v14; // rax
  __int64 v16; // rcx
  CBaseStreamGroupProxy *v17; // rcx
  __int64 v18; // r12
  int v19; // r13d
  int v20; // [rsp+20h] [rbp-148h]
  struct IProcessSubmixProxy *v21; // [rsp+30h] [rbp-138h] BYREF
  CBaseStreamGroupProxy *v22; // [rsp+38h] [rbp-130h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-128h] BYREF
  CBaseStreamGroupProxy *v24; // [rsp+48h] [rbp-120h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-118h] BYREF
  struct IProcessSubmixProxy **v26; // [rsp+58h] [rbp-110h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+60h] [rbp-108h]
  _DWORD v28[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-E8h]
  int v30; // [rsp+88h] [rbp-E0h]
  __int64 v31; // [rsp+90h] [rbp-D8h]
  int v32; // [rsp+98h] [rbp-D0h]
  __int64 v33; // [rsp+A0h] [rbp-C8h]
  __int64 v34; // [rsp+A8h] [rbp-C0h]
  int v35; // [rsp+B0h] [rbp-B8h]
  __int128 v36; // [rsp+B4h] [rbp-B4h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v26 = a4;
  v25 = (__int64 *)a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
  v27 = v6;
  if ( ((unsigned __int8 (__fastcall *)(CBaseStreamGroupProxy ***))(*this)[24])(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x80070057LL,
      v20);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147942487LL;
  }
  else
  {
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes((CBaseStreamGroupProxy *)this);
    v21 = 0LL;
    for ( i = this[27]; i != this[28]; ++i )
    {
      v17 = *i;
      v24 = v17;
      if ( v17 )
        (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v17 + 8LL))(v17);
      v22 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v24, &v22) >= 0 && v22 )
      {
        v23 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v22, &v23) >= 0 )
        {
          v18 = *(_QWORD *)a2;
          v19 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 144LL))(v23);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18) == v19
            && *((_BYTE *)a2 + 8) == (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 160LL))(v23) )
          {
            Microsoft::WRL::ComPtr<IProcessSubmixProxy>::operator=(&v21, &v23);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v22);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
            break;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
    }
    if ( v21 )
      goto LABEL_10;
    memset_0(v28, 0, 0xA8uLL);
    v28[0] = *(_DWORD *)(*((_QWORD *)a2 + 2) + 8LL);
    v28[1] = 0;
    v31 = **((_QWORD **)a2 + 2);
    v28[2] = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 18;
    v29 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v32 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 18;
    v33 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v34 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
    v35 = 0;
    v36 = *(_OWORD *)(*((_QWORD *)a2 + 2) + 32LL);
    v30 = *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + 50LL);
    v24 = (CBaseStreamGroupProxy *)this;
    v23 = v28;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &>(
           (unsigned int)&v21,
           (unsigned int)&v25,
           (unsigned int)&v23,
           (unsigned int)&v24);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v8,
        v20);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v9;
    }
    else
    {
      v22 = 0LL;
      v25 = (__int64 *)&v22;
      v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v25);
      v11 = Microsoft::WRL::AsWeak<IProcessSubmixProxy>(v21, v10);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = this[28];
        if ( v13 == this[29] )
        {
          std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
            (__int64 *)this + 27,
            (__int64)v13,
            (__int64 *)&v22);
        }
        else
        {
          v16 = (__int64)v22;
          *v13 = v22;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          ++this[28];
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
LABEL_10:
        v14 = v21;
        v21 = 0LL;
        *v26 = v14;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
        if ( v6 )
          LeaveCriticalSection(v6);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v11,
        v20);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v12;
    }
  }
}
