/*
 * XREFs of ??0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z @ 0x180109910
 * Callers:
 *     ??$Make@VResourceGroupInstance@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Z @ 0x180109488 (--$Make@VResourceGroupInstance@@AEA_KAEAV-$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Details@WRL.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C99C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x18010DE0C (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=2
ResourceGroupInstance *__fastcall ResourceGroupInstance::ResourceGroupInstance(
        ResourceGroupInstance *this,
        __int64 a2,
        struct IUnknown *a3,
        char *a4,
        unsigned int a5)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 3) = a2;
  if ( a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 68, a3);
  *((_DWORD *)this + 4) = a5;
  StringCchCopyW((char *)this + 32, 256LL, a4);
  ResourceGroupInstance::SetAssignedResourceGroup(this, 1);
  return this;
}
