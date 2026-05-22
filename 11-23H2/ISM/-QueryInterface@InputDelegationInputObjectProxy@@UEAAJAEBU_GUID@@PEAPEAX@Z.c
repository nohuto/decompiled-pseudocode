/*
 * XREFs of ?QueryInterface@InputDelegationInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021610
 * Callers:
 *     ?QueryInterface@InputDelegationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067A50 (-QueryInterface@InputDelegationInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputDelegationInputObjectProxy@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067A70 (-QueryInterface@InputDelegationInputObjectProxy@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputDelegationInputObjectProxy@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067A90 (-QueryInterface@InputDelegationInputObjectProxy@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::QueryInterface(
        InputDelegationInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  char *v11; // rbx
  char *v12; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6f9433e_5957_4930_a4c4_4da30644521c.Data4;
  if ( !v4 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    if ( this )
    {
      v11 = (char *)this + 48;
      goto LABEL_18;
    }
LABEL_25:
    v11 = 0LL;
    goto LABEL_18;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v7 )
      goto LABEL_21;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_699c674c_1728_3f00_eb37_62deb026b269.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_699c674c_1728_3f00_eb37_62deb026b269.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_699c674c_1728_3f00_eb37_62deb026b269.Data4;
    if ( v8 )
    {
      *a3 = 0LL;
    }
    else
    {
LABEL_21:
      v9 = 0;
      v12 = (char *)this + 8;
      if ( !this )
        v12 = 0LL;
      *a3 = v12;
      if ( v12 )
      {
        (**(void (__fastcall ***)(InputDelegationInputObjectProxy *))this)(this);
        return v9;
      }
    }
    return (unsigned int)-2147467262;
  }
  (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
  if ( !this )
    goto LABEL_25;
  v11 = (char *)this + 56;
LABEL_18:
  *a3 = v11;
  return 0LL;
}
