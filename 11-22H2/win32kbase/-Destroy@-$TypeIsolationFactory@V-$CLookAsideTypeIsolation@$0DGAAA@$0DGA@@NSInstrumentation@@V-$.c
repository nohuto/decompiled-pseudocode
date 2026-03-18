/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00D3838
 * Callers:
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x1C00A9868 (-UninitializeTypeIsolation@@YAXXZ.c)
 * Callees:
 *     ?Destroy@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00915E4 (-Destroy@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0091624 (-Destroy@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0091650 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00916E0 (-Destroy@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C009175C (-Destroy@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0091788 (-Destroy@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00918A4 (-Destroy@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D380C (-Destroy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<917504,3584>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        __int64 a1)
{
  char *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v2 = *(char **)a1;
  if ( v2 )
    NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Destroy(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NSInstrumentation::CTypeIsolation<40960,160>::Destroy(v3);
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    NSInstrumentation::CTypeIsolation<49152,192>::Destroy(v4);
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v5);
  v6 = *(void **)(a1 + 32);
  if ( v6 )
    NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v6);
  v7 = *(void **)(a1 + 48);
  if ( v7 )
    NSInstrumentation::CTypeIsolation<917504,3584>::Destroy(v7);
  v8 = *(void **)(a1 + 56);
  if ( v8 )
    NSInstrumentation::CTypeIsolation<32768,128>::Destroy(v8);
  v9 = *(void **)(a1 + 40);
  if ( v9 )
    NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v9);
}
