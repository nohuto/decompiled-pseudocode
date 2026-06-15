/*
 * XREFs of ?QueryInterface@CPrivateAPO@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018010
 * Callers:
 *     ?QueryInterface@CPrivateAPO@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031090 (-QueryInterface@CPrivateAPO@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPrivateAPO::QueryInterface(CPrivateAPO *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  char *v9; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( !*((_BYTE *)this + 32) )
  {
    v7 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x80004002LL,
      v10);
    return v7;
  }
  v3 = *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 == *(_QWORD *)&a2->Data1 )
    v3 = *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4 - *(_QWORD *)a2->Data4;
  if ( !v3 )
  {
    v7 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x80004002LL,
      v10);
    return v7;
  }
  v4 = *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 == *(_QWORD *)&a2->Data1 )
    v4 = *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4 - *(_QWORD *)a2->Data4;
  if ( !v4 )
  {
    v7 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x80004002LL,
      v10);
    return v7;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v6 )
    {
      v7 = -2147467262;
      if ( (***((int (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5)) >= 0 )
        return 0;
      return v7;
    }
    *a3 = this;
    (*(void (__fastcall **)(CPrivateAPO *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  else
  {
    v9 = (char *)this + 8;
    if ( !this )
      v9 = 0LL;
    *a3 = v9;
    (*(void (__fastcall **)(CPrivateAPO *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
