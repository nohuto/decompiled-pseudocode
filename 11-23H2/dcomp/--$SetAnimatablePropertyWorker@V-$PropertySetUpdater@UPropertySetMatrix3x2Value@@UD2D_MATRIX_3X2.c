/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180076ED4
 * Callers:
 *     ??$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076714 (--$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // rax
  gsl::details *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v21[15]; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  HSTRING_HEADER v23; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v24[10]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-21h]
  __int64 v26; // [rsp+B8h] [rbp-11h]
  char v27; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)a2;
  v8 = *v7 - *(_QWORD *)(v5 + 12);
  if ( *v7 == *(_QWORD *)(v5 + 12) )
  {
    v8 = v7[1] - *(_QWORD *)(v5 + 20);
    if ( !v8 )
      v8 = v7[2] - *(_QWORD *)(v5 + 28);
  }
  if ( v8 )
  {
    v9 = 1;
    *(_OWORD *)v7 = *(_OWORD *)(v5 + 12);
    v7[2] = *(_QWORD *)(v5 + 28);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)a1;
  v20 = 0;
  if ( !(*(__int64 (__fastcall **)(__int64))(v10 + 232))(a1) )
    goto LABEL_7;
  v16 = *(_QWORD *)(a2 + 8);
  hstringHeader.Reserved.Reserved1 = *(PVOID *)a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&hstringHeader, v12);
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)&v23);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v24, v17);
  v18 = *(_QWORD *)a1;
  v27 = v9;
  v24[0] = 104;
  v25 = *(_OWORD *)(v16 + 12);
  v26 = *(_QWORD *)(v16 + 28);
  v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(v18 + 224))(a1, v24, &v20);
  if ( v14 >= 0 )
  {
LABEL_7:
    if ( !v20 )
    {
      if ( *(_QWORD *)(a2 + 8) == -12LL )
      {
        gsl::details::terminate(v11);
        JUMPOUT(0x180077011LL);
      }
      v13 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8) + 12LL;
      hstringHeader.Reserved.Reserved1 = (PVOID)24;
      v14 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              a1,
              v13,
              104,
              &hstringHeader,
              0xFFFFFFFF,
              (unsigned __int64)v21);
      if ( v14 < 0 )
      {
        v19 = 281LL;
        goto LABEL_19;
      }
      if ( v9 || v21[0] )
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          1,
          *(const void **)(a2 + 8),
          0x24uLL);
    }
    return 0LL;
  }
  v19 = 261LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
