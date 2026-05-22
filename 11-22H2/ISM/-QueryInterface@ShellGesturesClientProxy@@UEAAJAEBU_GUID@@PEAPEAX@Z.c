/*
 * XREFs of ?QueryInterface@ShellGesturesClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022B70
 * Callers:
 *     ?QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BD10 (-QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BD30 (-QueryInterface@ShellGesturesClientProxy@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BD50 (-QueryInterface@ShellGesturesClientProxy@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BD70 (-QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellGesturesClientProxy::QueryInterface(
        ShellGesturesClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char *v11; // rax
  char *v12; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  if ( v4 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
      if ( v7 )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
        if ( v8 )
        {
          v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data1 )
            v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ecefef40_65f3_7058_da13_a54425d68a4e.Data4;
          if ( v9 )
            goto LABEL_16;
        }
        if ( !this )
        {
LABEL_16:
          *a3 = 0LL;
        }
        else
        {
          *a3 = (char *)this + 8;
          if ( this != (ShellGesturesClientProxy *)-8LL )
          {
            (**(void (__fastcall ***)(ShellGesturesClientProxy *))this)(this);
            return 0LL;
          }
        }
        return 2147500034LL;
      }
      (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
      v12 = (char *)this + 120;
    }
    else
    {
      (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
      v12 = (char *)this + 112;
    }
    if ( !this )
      v12 = 0LL;
    v11 = v12;
  }
  else
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    if ( this )
      v11 = (char *)this + 104;
    else
      v11 = 0LL;
  }
  *a3 = v11;
  return 0LL;
}
