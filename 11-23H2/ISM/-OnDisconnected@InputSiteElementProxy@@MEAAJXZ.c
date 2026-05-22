/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x1800463F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  InputSiteElementProxy **v5; // rcx
  InputSiteElementProxy **i; // rbx
  InputSiteElementProxy **v7; // rdi
  InputSiteElementProxy **v8; // rbx
  InputSiteElementProxy *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v4 = v3;
  v5 = *(InputSiteElementProxy ***)(v3 + 88);
  for ( i = *(InputSiteElementProxy ***)(v3 + 80); i != v5; ++i )
  {
    if ( *i == this )
      break;
  }
  v7 = *(InputSiteElementProxy ***)(v3 + 88);
  v8 = i + 1;
  if ( v8 != v5 )
  {
    do
    {
      v9 = 0LL;
      if ( &v14 != (char *)v8 )
      {
        v9 = *v8;
        *v8 = 0LL;
      }
      v10 = (__int64)*(v8 - 1);
      *(v8 - 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      ++v8;
    }
    while ( v8 != v7 );
  }
  v11 = *(_QWORD *)(v4 + 88);
  v12 = *(_QWORD *)(v11 - 8);
  if ( v12 )
  {
    *(_QWORD *)(v11 - 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  *(_QWORD *)(v4 + 88) -= 8LL;
  return 0LL;
}
