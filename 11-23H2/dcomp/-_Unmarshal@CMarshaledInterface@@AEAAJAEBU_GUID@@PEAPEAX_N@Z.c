/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180118564
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAJPEAPEAUIHolographicCompositor@2Composition@UI@3@@Z @ 0x180116B90 (-Get@-$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Inter.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAJPEAPEAUIHolographicCompositionDisplay@2Composition@UI@3@@Z @ 0x180119C9C (-Get@-$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows.c)
 * Callees:
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A820 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180115798 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v6 = -2147467259;
  if ( *(_QWORD *)this )
  {
    v10 = 0LL;
    if ( *(_DWORD *)(v4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(&v10, this);
      v4 = v10;
    }
    else
    {
      *(_QWORD *)this = 0LL;
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v4 + 24) == 2 )
    {
      if ( !*(_QWORD *)(v4 + 32) )
      {
        v6 = -2147024809;
LABEL_11:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return v6;
      }
      InterfaceAndReleaseStream = Microsoft::WRL::AgileRef::InternalResolve(
                                    (Microsoft::WRL::AgileRef *)(v4 + 32),
                                    a2,
                                    a3);
    }
    else
    {
      v8 = *(IStream **)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v8, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    goto LABEL_11;
  }
  return v6;
}
