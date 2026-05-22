/*
 * XREFs of ?QueryInterface@ShellGesturesClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FC60
 * Callers:
 *     ?QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051060 (-QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051080 (-QueryInterface@ShellGesturesClientProxy@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800510A0 (-QueryInterface@ShellGesturesClientProxy@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800510C0 (-QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellGesturesClientProxy::QueryInterface(
        ShellGesturesClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rdx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  v6 = 0;
  if ( !v4 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = 104LL;
LABEL_13:
    *a3 = (char *)this + v7;
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
  if ( !v8 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = 112LL;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
  if ( !v9 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = 120LL;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v11 )
    goto LABEL_21;
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data4;
  if ( v12 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_21:
    v13 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v13;
    if ( v13 )
    {
      (**(void (__fastcall ***)(ShellGesturesClientProxy *))this)(this);
      return v6;
    }
  }
  return (unsigned int)-2147467262;
}
