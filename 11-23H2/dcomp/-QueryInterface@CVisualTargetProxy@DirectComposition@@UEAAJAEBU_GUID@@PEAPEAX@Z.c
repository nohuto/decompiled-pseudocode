/*
 * XREFs of ?QueryInterface@CVisualTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetProxy::QueryInterface(
        DirectComposition::CVisualTargetProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data4;
  if ( !result )
  {
    *a3 = this;
LABEL_6:
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    return result;
  }
  result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
