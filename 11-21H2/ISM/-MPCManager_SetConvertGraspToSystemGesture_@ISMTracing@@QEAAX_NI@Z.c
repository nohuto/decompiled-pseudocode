/*
 * XREFs of ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x180099318
 * Callers:
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x18009B320 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(ISMTracing *this, char a2, int a3)
{
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v5 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v14 = 0;
    v11 = 0;
    v12 = &v7;
    v13 = 4;
    v9 = &v6;
    v7 = a3;
    v6 = a2;
    v10 = 1;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1801FF91C, 0LL, 0LL, 4u, &v8);
  }
}
