/*
 * XREFs of ?QueryInterface@DWMLegacyInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800233F0
 * Callers:
 *     ?QueryInterface@DWMLegacyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E1F0 (-QueryInterface@DWMLegacyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMLegacyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E210 (-QueryInterface@DWMLegacyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMLegacyInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E230 (-QueryInterface@DWMLegacyInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMLegacyInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E250 (-QueryInterface@DWMLegacyInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMLegacyInputTarget::QueryInterface(DWMLegacyInputTarget *this, struct _GUID *a2, void **a3)
{
  DWMLegacyInputTarget *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  DWMLegacyInputTarget *v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMLegacyInputTarget *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      v4 = (DWMLegacyInputTarget *)((char *)v4 + 16);
LABEL_6:
      *a3 = v4;
      return 0LL;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(DWMLegacyInputTarget *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      goto LABEL_6;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4;
    if ( !v8 )
    {
      (*(void (__fastcall **)(DWMLegacyInputTarget *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      v10 = v4;
      v4 = (DWMLegacyInputTarget *)((char *)v4 + 8);
      goto LABEL_22;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4;
    if ( !v9 )
    {
      (*(void (__fastcall **)(DWMLegacyInputTarget *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      *a3 = (char *)v4 + 24;
      return 0LL;
    }
    if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(DWMLegacyInputTarget *))(*(_QWORD *)v4 + 8LL))(v4);
      v10 = v4;
      v4 = (DWMLegacyInputTarget *)((char *)v4 + 32);
LABEL_22:
      if ( !v10 )
        v4 = 0LL;
      goto LABEL_6;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
}
