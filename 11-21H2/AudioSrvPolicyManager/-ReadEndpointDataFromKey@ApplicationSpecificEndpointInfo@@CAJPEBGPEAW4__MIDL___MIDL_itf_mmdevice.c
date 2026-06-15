/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800332A4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180034488 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18003B5A4 (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18003B694 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x18003C378 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        const unsigned __int16 *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v6; // rbx
  volatile signed __int32 *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rsi
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  wchar_t *v18; // rdx
  wchar_t *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v22; // edi
  __int64 v23; // rcx
  wchar_t *v24; // rdx
  unsigned __int16 *v26[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  wchar_t *Str; // [rsp+78h] [rbp+48h] BYREF

  Str = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
          (ATL::CAtlBaseModule *)&Str,
          (__int64)a1) )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
      (void **)&Str,
      (__int64)a1);
  v6 = Str;
  v7 = (volatile signed __int32 *)(Str - 12);
  if ( *((int *)Str - 4) < 0 || (v8 = wcsstr(Str, L"_")) == 0LL || (v9 = v8 - v6, (_DWORD)v9 == -1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    if ( _InterlockedDecrement(v7 + 4) <= 0 )
      (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
    return 2147942487LL;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Left(
    (const void **)&Str,
    (void **)v26,
    v9);
  v10 = v26[0];
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v26[0]) )
  {
    v12 = 674LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    if ( _InterlockedDecrement((volatile signed __int32 *)v10 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3) + 8LL))(*((_QWORD *)v10 - 3));
    if ( _InterlockedDecrement(v7 + 4) > 0 )
      return 2147942487LL;
    v16 = *(__int64 **)v7;
    v17 = **(_QWORD **)v7;
    v18 = (wchar_t *)v7;
LABEL_28:
    (*(void (__fastcall **)(__int64 *, wchar_t *))(v17 + 8))(v16, v18);
    return 2147942487LL;
  }
  *(_DWORD *)_o__errno(v11) = 0;
  if ( *((int *)v10 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((const void **)v26, *((_DWORD *)v10 - 4));
    v10 = v26[0];
  }
  v13 = _o__wtoi(v10);
  if ( *(_DWORD *)_o__errno(v14) )
  {
    v12 = 681LL;
    goto LABEL_14;
  }
  if ( v13 > 8 )
  {
    v12 = 684LL;
    goto LABEL_14;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
    (const void **)&Str,
    v15,
    v9 + 1);
  v19 = Str;
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(Str) )
  {
    v21 = 693LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    if ( _InterlockedDecrement((volatile signed __int32 *)v10 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3) + 8LL))(*((_QWORD *)v10 - 3));
    v18 = Str - 12;
    if ( _InterlockedDecrement((volatile signed __int32 *)Str - 2) > 0 )
      return 2147942487LL;
    v16 = *(__int64 **)v18;
    v17 = **(_QWORD **)v18;
    goto LABEL_28;
  }
  *(_DWORD *)_o__errno(v20) = 0;
  if ( *((int *)v19 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((const void **)&Str, *((_DWORD *)v19 - 4));
    v19 = Str;
  }
  v22 = (unsigned int)_o__wtoi(v19);
  if ( *(_DWORD *)_o__errno(v23) )
  {
    v21 = 699LL;
    goto LABEL_24;
  }
  if ( (unsigned int)v22 > eCapture )
  {
    v21 = 702LL;
    goto LABEL_24;
  }
  *a2 = v22;
  *(_DWORD *)a3 = v13;
  if ( _InterlockedDecrement((volatile signed __int32 *)v10 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3) + 8LL))(*((_QWORD *)v10 - 3));
  v24 = Str - 12;
  if ( _InterlockedDecrement((volatile signed __int32 *)Str - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 8LL))(*(_QWORD *)v24);
  return 0LL;
}
