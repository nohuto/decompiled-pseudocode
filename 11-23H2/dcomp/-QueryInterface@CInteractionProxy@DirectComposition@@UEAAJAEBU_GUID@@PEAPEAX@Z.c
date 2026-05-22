/*
 * XREFs of ?QueryInterface@CInteractionProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084570
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionProxy::QueryInterface(
        DirectComposition::CInteractionProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data4;
  if ( v3 )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    *a3 = this;
    result = 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
