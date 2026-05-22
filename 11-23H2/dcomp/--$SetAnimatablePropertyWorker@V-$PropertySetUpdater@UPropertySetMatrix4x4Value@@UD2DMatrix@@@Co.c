/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18000633C
 * Callers:
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800A8120 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix4x4Value,D2DMatrix>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        Windows::UI::Composition::CompositionObject *this,
        const void **a2,
        __int64 a3)
{
  _OWORD *v3; // rbx
  char *v5; // rsi
  char v8; // si
  gsl::details *v9; // rcx
  int v10; // edx
  int v11; // ebx
  __int128 v13; // xmm1
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-A9h]
  char v19; // [rsp+30h] [rbp-99h] BYREF
  char v20; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v22[10]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v23; // [rsp+88h] [rbp-41h]
  __int128 v24; // [rsp+98h] [rbp-31h]
  __int128 v25; // [rsp+A8h] [rbp-21h]
  __int128 v26; // [rsp+B8h] [rbp-11h]
  char v27; // [rsp+C8h] [rbp-1h]
  _BYTE v28[32]; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v3 = *a2;
  v5 = (char *)a2[1];
  if ( !memcmp_0(*a2, v5 + 12, 0x40uLL) )
  {
    v8 = 0;
  }
  else
  {
    *v3 = *(_OWORD *)(v5 + 12);
    v3[1] = *(_OWORD *)(v5 + 28);
    v3[2] = *(_OWORD *)(v5 + 44);
    v13 = *(_OWORD *)(v5 + 60);
    v8 = 1;
    v3[3] = v13;
  }
  v19 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_4;
  v14 = (char *)a2[1];
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v28, &hstringHeader);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)v28);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v22, v15);
  v16 = *(_QWORD *)this;
  v27 = v8;
  v22[0] = 265;
  v23 = *(_OWORD *)(v14 + 12);
  v24 = *(_OWORD *)(v14 + 28);
  v25 = *(_OWORD *)(v14 + 44);
  v26 = *(_OWORD *)(v14 + 60);
  v11 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(v16 + 224))(
          this,
          v22,
          &v19);
  if ( v11 >= 0 )
  {
LABEL_4:
    if ( !v19 )
    {
      if ( a2[1] == (const void *)-12LL )
      {
        gsl::details::terminate(v9);
        JUMPOUT(0x180006459LL);
      }
      v10 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = (char *)a2[1] + 12;
      hstringHeader.Reserved.Reserved1 = (PVOID)64;
      v11 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (_DWORD)this,
              v10,
              265,
              (unsigned int)&hstringHeader,
              0xFFFFFFFF,
              (bool)&v20);
      if ( v11 < 0 )
      {
        v17 = 281LL;
        goto LABEL_16;
      }
      if ( v8 || v20 )
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
          *((_DWORD *)this + 32),
          1u,
          a2[1],
          0x4CuLL);
    }
    return 0LL;
  }
  v17 = 261LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v11,
    v18);
  return (unsigned int)v11;
}
