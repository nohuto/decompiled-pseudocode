/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@CAJPEAVBamoStubImpl@BamoImpl@Microsoft@@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z @ 0x1800A9EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@QEBAJPEAVBamoStubImpl@BamoImpl@Microsoft@@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z @ 0x1800AAD3C (--R_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@QEBAJPEAVBamoStubImpl@BamoImpl@Microsoft@@P6AJPEAV.c)
 */

__int64 __fastcall _lambda_6936635e6f5f969671f4d9cb7d48ef70_::_lambda_invoker_cdecl_(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  __int64 v6; // xmm1_8
  __int64 v7; // xmm1_8
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v6 = *((_QWORD *)a6 + 2);
  v9 = *a6;
  v10 = v6;
  v7 = *((_QWORD *)a5 + 2);
  v11 = *a5;
  v12 = v7;
  return _lambda_6936635e6f5f969671f4d9cb7d48ef70_::operator()(a1, a1, a2, a3, a4, (__int64)&v11, (__int64)&v9);
}
