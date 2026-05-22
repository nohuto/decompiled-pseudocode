/*
 * XREFs of ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18003FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::Deliver(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const void *a3,
        int a4)
{
  __int64 v6; // r8
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = *(unsigned int *)a2;
  if ( *(_OWORD *)a2 == 0LL && !*((_QWORD *)a2 + 2) )
  {
    v17 = *((_QWORD *)a2 + 3);
    if ( !v17 )
      v17 = *((_QWORD *)a2 + 4);
    if ( !v17 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)this);
  }
  v8 = *((unsigned int *)a2 + 1);
  v9 = *((_QWORD *)this + 30);
  v10 = *((_QWORD *)this + 28);
  v11 = *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 33) & (v8 | (v6 << 32))) + 8);
  if ( v11 == v10 )
    goto LABEL_15;
  v12 = *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 33) & (v8 | (v6 << 32))));
  while ( 1 )
  {
    if ( __PAIR128__(*((_QWORD *)a2 + 1), __PAIR64__(v8, v6)) == *(_OWORD *)(v11 + 16)
      && *((_QWORD *)a2 + 2) == *(_QWORD *)(v11 + 32) )
    {
      v13 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v11 + 40);
      if ( !v13 )
        v13 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v11 + 48);
      if ( !v13 )
        break;
    }
    if ( v11 == v12 )
      goto LABEL_15;
    v11 = *(_QWORD *)(v11 + 8);
  }
  if ( !v11 )
LABEL_15:
    v11 = *((_QWORD *)this + 28);
  if ( v11 == v10 )
    return 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *))(**((_QWORD **)this + 8) + 64LL))(
          *((_QWORD *)this + 8),
          *(_QWORD *)(v11 + 56),
          HIDWORD(*(_QWORD *)(v11 + 56)),
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
