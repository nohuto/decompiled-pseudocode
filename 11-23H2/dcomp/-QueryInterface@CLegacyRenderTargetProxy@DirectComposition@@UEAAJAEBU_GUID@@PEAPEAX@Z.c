/*
 * XREFs of ?QueryInterface@CLegacyRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2E20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetProxy::QueryInterface(
        DirectComposition::CLegacyRenderTargetProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  DirectComposition::CLegacyRenderTargetProxy *v3; // r9
  __int64 v5; // rax
  int InterfaceHelper; // ebx

  v3 = this;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data4;
  if ( !v5 )
  {
    *a3 = this;
    InterfaceHelper = 0;
LABEL_8:
    (*(void (__fastcall **)(DirectComposition::CLegacyRenderTargetProxy *))(*(_QWORD *)this + 8LL))(v3);
    return (unsigned int)InterfaceHelper;
  }
  InterfaceHelper = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( InterfaceHelper >= 0 )
    goto LABEL_8;
  return (unsigned int)InterfaceHelper;
}
