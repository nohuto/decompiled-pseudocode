/*
 * XREFs of ?QueryInterface@CUIComponentInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180126F80
 * Callers:
 *     ?QueryInterface@CUIComponentInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050980 (-QueryInterface@CUIComponentInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CUIComponentInputObjectProxy@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800509A0 (-QueryInterface@CUIComponentInputObjectProxy@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CUIComponentInputObjectProxy::QueryInterface(
        CUIComponentInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rdx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  v6 = 0;
  if ( !v4 )
  {
    (**(void (__fastcall ***)(CUIComponentInputObjectProxy *))this)(this);
    *a3 = (char *)this + 64;
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
    goto LABEL_12;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ef2daa6b_70a1_714f_af3c_a61437d80866.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ef2daa6b_70a1_714f_af3c_a61437d80866.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ef2daa6b_70a1_714f_af3c_a61437d80866.Data4;
  if ( v9 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_12:
    v10 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v10;
    if ( v10 )
    {
      (**(void (__fastcall ***)(CUIComponentInputObjectProxy *))this)(this);
      return v6;
    }
  }
  return (unsigned int)-2147467262;
}
