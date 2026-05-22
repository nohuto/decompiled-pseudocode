/*
 * XREFs of ?OnAppThreadDisconnected@NonBamoInputDeliveryServer@@QEAAJI@Z @ 0x180019460
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x180019450 (-OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadDisconnected(NonBamoInputDeliveryServer *this, int a2)
{
  _QWORD *v2; // rbx
  __int64 *v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rax
  int v8; // eax
  _QWORD **v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 28);
LABEL_2:
  v2 = (_QWORD *)*v2;
  while ( v2 != *((_QWORD **)this + 28) )
  {
    if ( *((_DWORD *)v2 + 14) != a2 )
      goto LABEL_2;
    v5 = (__int64 *)*((_QWORD *)this + 4);
    v6 = *((_OWORD *)v2 + 5);
    *(_OWORD *)v15 = *((_OWORD *)v2 + 4);
    v7 = *v5;
    v17 = v2[12];
    v16 = v6;
    v8 = (*(__int64 (__fastcall **)(__int64 *, int *))(v7 + 40))(v5, v15);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x170,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v8,
        v15[0]);
    v9 = (_QWORD **)v2;
    v10 = *((_QWORD *)this + 30);
    v11 = (unsigned __int64)*((unsigned int *)v2 + 4) << 32;
    v12 = 2 * (*((_QWORD *)this + 33) & (v11 | *((unsigned int *)v2 + 5)));
    if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 33) & (v11 | *((unsigned int *)v2 + 5))) + 8) == v2 )
    {
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 33) & (v11 | *((unsigned int *)v2 + 5)))) == v2 )
      {
        v13 = *((_QWORD *)this + 28);
        *(_QWORD *)(v10 + 8 * v12) = v13;
      }
      else
      {
        v13 = v2[1];
      }
      *(_QWORD *)(v10 + 8 * v12 + 8) = v13;
    }
    else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 33) & (v11 | *((unsigned int *)v2 + 5)))) == v2 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 33) & (v11 | *((unsigned int *)v2 + 5)))) = *v2;
    }
    v2 = (_QWORD *)*v2;
    --*((_QWORD *)this + 29);
    *v9[1] = v2;
    v2[1] = v9[1];
    operator delete(v9, 0x68uLL);
  }
  return 0LL;
}
