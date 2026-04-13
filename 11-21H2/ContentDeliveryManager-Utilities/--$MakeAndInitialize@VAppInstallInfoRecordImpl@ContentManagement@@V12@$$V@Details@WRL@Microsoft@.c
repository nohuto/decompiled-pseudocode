/*
 * XREFs of ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppInstallInfoRecordImpl@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180084F6C
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180087C8C (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18004C4B0 (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppInstallInfoRecordImpl,ContentManagement::AppInstallInfoRecordImpl,>(
        volatile signed __int64 **a1)
{
  unsigned int v2; // edi
  volatile signed __int64 *v3; // rcx
  ContentManagement::AppInstallInfoRecordImpl *v4; // rax
  ContentManagement::AppInstallInfoRecordImpl *v5; // rax
  volatile signed __int64 *v6; // r8
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rax
  signed __int32 v10; // eax

  v2 = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v3);
  }
  *a1 = 0LL;
  v4 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                        0x70uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v4);
    v6 = (volatile signed __int64 *)v5;
    if ( v5 )
    {
      v7 = *((_QWORD *)v5 + 8);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v9 = _InterlockedCompareExchange64(v6 + 8, v7 + 1, v7);
          v8 = v7 == v9;
          v7 = v9;
          if ( !v8 )
            continue;
        }
        *a1 = v6;
        goto LABEL_14;
      }
      do
        v10 = *(_DWORD *)(2 * v7 + 0x10);
      while ( v10 != 0x7FFFFFFF
           && v10 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v7 + 16), v10 + 1, v10) );
    }
    *a1 = v6;
    if ( v6 )
LABEL_14:
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
