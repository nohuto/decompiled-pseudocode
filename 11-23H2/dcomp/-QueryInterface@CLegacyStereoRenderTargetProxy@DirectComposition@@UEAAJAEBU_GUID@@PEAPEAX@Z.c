/*
 * XREFs of ?QueryInterface@CLegacyStereoRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2E90
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CLegacyStereoRenderTargetProxy::QueryInterface(
        DirectComposition::CLegacyStereoRenderTargetProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  DirectComposition::CLegacyStereoRenderTargetProxy *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = this;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data4;
  if ( !v5 )
    goto LABEL_6;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data4;
  if ( v6 )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(
               *(DirectComposition::CResourceProxy **)GUID_20420003_a00c_4f19_ad4d_6e99afd78481.Data4,
               a2,
               a3,
               this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
LABEL_6:
    *a3 = this;
    result = 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  return result;
}
