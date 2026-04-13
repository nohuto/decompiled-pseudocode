/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180096BF0
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x180091278 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18003067C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008FFFC (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = -2147467259;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v10 = 0LL;
    if ( *(_DWORD *)(v6 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(&v10, this);
      v6 = v10;
    }
    else
    {
      *(_QWORD *)this = 0LL;
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v6 + 24) == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v6 + 32), a2, a3);
    }
    else
    {
      v8 = *(IStream **)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v8, a2, a3);
    }
    v5 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
