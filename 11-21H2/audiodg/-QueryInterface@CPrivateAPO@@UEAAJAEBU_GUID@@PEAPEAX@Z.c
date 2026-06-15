/*
 * XREFs of ?QueryInterface@CPrivateAPO@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400111F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrivateAPO::QueryInterface(CPrivateAPO *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *a3 = 0LL;
  if ( *((_BYTE *)this + 8) )
  {
    v4 = *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 == *(_QWORD *)&a2->Data1 )
      v4 = *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4 - *(_QWORD *)a2->Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 == *(_QWORD *)&a2->Data1 )
        v5 = *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4 - *(_QWORD *)a2->Data4;
      if ( v5 )
      {
        if ( (***((int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) < 0 )
          return (unsigned int)-2147467262;
        return v3;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
          (const char *)0x80004002LL,
          v7);
        return 2147500034LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)0x80004002LL,
        v7);
      return 2147500034LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)0x80004002LL,
      v7);
    return 2147500034LL;
  }
}
