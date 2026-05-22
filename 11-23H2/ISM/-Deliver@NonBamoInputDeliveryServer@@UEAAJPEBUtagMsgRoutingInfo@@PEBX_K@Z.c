/*
 * XREFs of ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18000F060
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::Deliver(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const void *a3,
        int a4)
{
  __int64 v5; // r8
  const struct tagMsgRoutingInfo *v7; // r9
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18 = 0LL;
  v5 = *(unsigned int *)a2;
  v7 = a2;
  v17 = 0LL;
  if ( !__PAIR64__(*((_DWORD *)a2 + 1), v5)
    && !*((_QWORD *)a2 + 1)
    && !*((_QWORD *)a2 + 2)
    && (unsigned int)IsEqualGUID((char *)a2 + 24, (char *)&v17 + 8, v5, a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)v7);
  }
  v9 = *((_QWORD *)this + 30);
  v10 = *((_QWORD *)this + 28);
  v11 = *((unsigned int *)v7 + 1);
  v12 = *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 33) & (v11 | (v5 << 32))) + 8);
  if ( v12 == v10 )
  {
LABEL_14:
    v12 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      if ( __PAIR128__(*((_QWORD *)v7 + 1), __PAIR64__(v11, v5)) == *(_OWORD *)(v12 + 16)
        && *((_QWORD *)v7 + 2) == *(_QWORD *)(v12 + 32) )
      {
        v13 = *((_QWORD *)v7 + 3) - *(_QWORD *)(v12 + 40);
        if ( !v13 )
          v13 = *((_QWORD *)v7 + 4) - *(_QWORD *)(v12 + 48);
        if ( !v13 )
          break;
      }
      if ( v12 == *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 33) & (v11 | (v5 << 32)))) )
        goto LABEL_14;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    return 0LL;
  if ( v12 == v10 )
    return 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *))(**((_QWORD **)this + 8) + 64LL))(
          *((_QWORD *)this + 8),
          *(_QWORD *)(v12 + 56),
          HIDWORD(*(_QWORD *)(v12 + 56)),
          a3);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
    (const char *)(unsigned int)v14,
    a4);
  return v15;
}
