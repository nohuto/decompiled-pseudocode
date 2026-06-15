/*
 * XREFs of ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180011184
 * Callers:
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18000F100 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18000F2F0 (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 *     GetAssignedAccessTypeForUser @ 0x18000FF60 (GetAssignedAccessTypeForUser.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x1800108A8 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010FDC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x180047CA0 (--1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ.c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x1800485C8 (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
