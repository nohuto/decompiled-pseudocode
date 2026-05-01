/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180145E3C
 * Callers:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x180145C24 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180145CB4 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180317124 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x18031B3C4 (--1TaskbarLayoutParser@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x18031CC5C (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1803BB8A8 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803BC790 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1803BD3B4 (--1PWSLayoutParser@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x1803BE2B8 (-RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
