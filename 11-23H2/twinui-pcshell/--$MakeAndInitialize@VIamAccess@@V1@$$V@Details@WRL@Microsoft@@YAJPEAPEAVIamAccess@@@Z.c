/*
 * XREFs of ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x18012F0C8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E28C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile int *v4; // rdx
  const char *v5; // r9
  int LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v2);
    *(_QWORD *)v3 = &IamAccess::`vftable';
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    if ( (unsigned int)AcquireIAMKey()
      || (LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3B,
                        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                        v5),
          LastError >= 0) )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 9), v4);
      LastError = 0;
      *a1 = v3;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)LastError;
}
