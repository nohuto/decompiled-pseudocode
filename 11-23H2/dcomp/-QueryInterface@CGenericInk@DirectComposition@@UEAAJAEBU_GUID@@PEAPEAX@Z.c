/*
 * XREFs of ?QueryInterface@CGenericInk@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CGenericInk::QueryInterface(
        DirectComposition::CGenericInk *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c14d9420_71de_4dce_bddf_74b036388c08.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c14d9420_71de_4dce_bddf_74b036388c08.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c14d9420_71de_4dce_bddf_74b036388c08.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_8:
    *a3 = this;
    CMILRefCountImpl::AddReference((DirectComposition::CGenericInk *)((char *)this + 16));
    return 0LL;
  }
}
