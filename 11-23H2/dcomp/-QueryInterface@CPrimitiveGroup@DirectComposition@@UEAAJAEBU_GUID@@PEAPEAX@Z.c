/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FA870
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::QueryInterface(
        DirectComposition::CPrimitiveGroup *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea4d861b_4386_41f2_bb87_74439b7d45f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea4d861b_4386_41f2_bb87_74439b7d45f4.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea4d861b_4386_41f2_bb87_74439b7d45f4.Data4;
  if ( !v4 )
    goto LABEL_9;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  else
  {
LABEL_9:
    *a3 = this;
    v6 = 0;
    CMILRefCountImpl::AddReference((DirectComposition::CPrimitiveGroup *)((char *)this + 16));
  }
  return v6;
}
