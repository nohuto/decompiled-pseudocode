/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180009948 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV-$vector@V-$unique_ptr@VCConnectorProcess.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004C16C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD10 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180031730 (--$_Emplace_reallocate@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConne.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  _DWORD *v11; // rdi
  __int64 cbSize; // rbx
  void *v13; // rax
  void *v14; // r14
  int v15; // ebx
  void *v16; // rcx
  _QWORD *v17; // rdx
  void **v18; // rbx
  void *v20; // rcx
  void *v21; // rcx
  int v22[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *(_QWORD *)v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)v22 = v11;
  if ( v11 )
  {
    cbSize = a2->cbSize;
    v13 = CoTaskMemAlloc(cbSize + 18);
    v14 = v13;
    if ( v13 )
    {
      memcpy_0(v13, a2, cbSize + 18);
      v15 = 0;
    }
    else
    {
      v15 = -2147024882;
    }
    v16 = *(void **)v11;
    *(_QWORD *)v11 = v14;
    if ( v16 )
      CoTaskMemFree(v16);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v15);
      v20 = *(void **)v11;
      *(_QWORD *)v11 = 0LL;
      if ( v20 )
        CoTaskMemFree(v20);
      operator delete(v11, 0x20uLL);
      return (unsigned int)v15;
    }
    else
    {
      v11[3] = a3;
      v11[2] = a4;
      v11[4] = a5;
      v11[5] = a6;
      v11[6] = a7;
      v17 = (_QWORD *)*((_QWORD *)this + 3);
      if ( v17 == *((_QWORD **)this + 4) )
      {
        std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorFormatCharacteristics>>(
          (void ****)this + 2,
          v17,
          (__int64 *)v22);
        v18 = *(void ***)v22;
      }
      else
      {
        v18 = 0LL;
        *v17 = v11;
        *((_QWORD *)this + 3) += 8LL;
      }
      if ( v18 )
      {
        v21 = *v18;
        *v18 = 0LL;
        if ( v21 )
          CoTaskMemFree(v21);
        operator delete(v18, 0x20uLL);
      }
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
