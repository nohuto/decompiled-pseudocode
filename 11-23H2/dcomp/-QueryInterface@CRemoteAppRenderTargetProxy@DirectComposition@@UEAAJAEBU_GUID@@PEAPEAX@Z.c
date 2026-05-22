/*
 * XREFs of ?QueryInterface@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3130
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::QueryInterface(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data4;
  if ( result )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    *a3 = this;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
