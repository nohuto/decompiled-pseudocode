/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FF30
 * Callers:
 *     ?QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E050 (-QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E070 (-QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E090 (-QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E0B0 (-QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E0D0 (-QueryInterface@DWMFocusedInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        DWMFocusedInputTarget *this,
        const struct _GUID *a2,
        void **a3,
        __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v7 = (unsigned __int64)this + 16;
LABEL_6:
      this = (DWMFocusedInputTarget *)(v7 & -(__int64)(this != 0LL));
LABEL_7:
      *a3 = this;
      return 0LL;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
    if ( !v9 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v7 = (unsigned __int64)this + 24;
      goto LABEL_6;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v10 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      goto LABEL_7;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4;
    if ( !v11 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v7 = (unsigned __int64)this + 8;
      goto LABEL_6;
    }
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4;
    if ( !v12 )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v7 = (unsigned __int64)this + 32;
      goto LABEL_6;
    }
    if ( (unsigned int)IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a4) )
    {
      (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v7 = (unsigned __int64)this + 40;
      goto LABEL_6;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
      (const char *)0x80070057LL,
      v13);
    return 2147942487LL;
  }
}
