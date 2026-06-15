/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180043504
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180043290 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18002BA5C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18003E030 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003FBC0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003FCF0 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x1800422CC (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x1800423A0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800423CC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180042B30 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180042EDC (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        unsigned __int16 *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rdi
  signed int v7; // ebx
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // rcx
  ATL::CStringData *v11; // rcx
  const void *Buffer; // rax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // edx
  unsigned __int16 *v17; // rcx
  int v18; // esi
  int v19; // edi
  int v20; // esi
  ATL::Checked *v21; // rax
  __int64 v22; // rcx
  const void *v23; // rax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v24; // ebx
  __int64 v25; // rcx
  unsigned __int16 *v27[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  wchar_t *Str; // [rsp+78h] [rbp+48h] BYREF

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (const void **)&Str,
    a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A1,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v7 = 0;
    if ( (int)v6 >= 0 )
      v7 = v5 - Str;
    if ( v7 < *((_DWORD *)Str - 4) )
    {
      Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(&Str);
      ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((__int64 *)v27, Str, v7, Manager);
    }
    else
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        v27,
        &Str);
    }
    v9 = v27[0];
    if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v27[0]) )
    {
      *(_DWORD *)_o__errno(v10) = 0;
      Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)v27);
      v13 = _o__wtoi(Buffer);
      if ( *(_DWORD *)_o__errno(v14) )
      {
        v15 = 686LL;
      }
      else if ( v13 <= 8 )
      {
        v16 = 0;
        if ( (int)v6 + 1 >= 0 )
          v16 = v6 + 1;
        v17 = Str;
        v18 = *((_DWORD *)Str - 4);
        if ( 0x7FFFFFFF - v16 < 0 )
          ATL::AtlThrowImpl(-2147024809);
        v19 = *((_DWORD *)Str - 4);
        if ( v16 <= v18 )
          v19 = v16;
        if ( v19 > 0 )
        {
          v20 = v18 - v19;
          v21 = (ATL::Checked *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          ATL::Checked::memmove_s(v21, (void *)(2LL * (v20 + 1)), (char *)v21 + 2 * v19, (void *)(2LL * (v20 + 1)));
          ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v20);
          v17 = Str;
        }
        if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v17) )
        {
          *(_DWORD *)_o__errno(v22) = 0;
          v23 = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          v24 = (unsigned int)_o__wtoi(v23);
          if ( *(_DWORD *)_o__errno(v25) )
          {
            v15 = 704LL;
          }
          else
          {
            if ( (unsigned int)v24 <= eCapture )
            {
              *a2 = v24;
              *(_DWORD *)a3 = v13;
              ATL::CStringData::Release((ATL::CStringData *)(v27[0] - 12));
              ATL::CStringData::Release((ATL::CStringData *)(Str - 12));
              return 0LL;
            }
            v15 = 707LL;
          }
        }
        else
        {
          v15 = 698LL;
        }
      }
      else
      {
        v15 = 689LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x80070057LL);
      v11 = (ATL::CStringData *)(v27[0] - 12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A7,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x80070057LL);
      v11 = (ATL::CStringData *)(v9 - 12);
    }
    ATL::CStringData::Release(v11);
  }
  ATL::CStringData::Release((ATL::CStringData *)(Str - 12));
  return 2147942487LL;
}
