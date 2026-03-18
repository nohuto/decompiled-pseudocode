/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB250
 * Callers:
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C00557D4 (-InitializeTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008BD7C (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008CBF4 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BB490 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB410 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideTy.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

char TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()
{
  __int64 *v0; // rsi
  __int64 Pool2; // rax
  char v2; // di
  __int64 v3; // rbx
  void *v5; // rax

  v0 = (__int64 *)gpTypeIsolation;
  Pool2 = ExAllocatePool2(66LL, 144LL);
  v2 = 0;
  v3 = Pool2;
  if ( !Pool2 )
    return 0;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)v3 = v3;
  if ( !NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(v3) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy((char *)v3);
    return 0;
  }
  *v0 = v3;
  v5 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v5 )
  {
    v0[2] = (__int64)v5;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(v0);
  }
  return v2;
}
