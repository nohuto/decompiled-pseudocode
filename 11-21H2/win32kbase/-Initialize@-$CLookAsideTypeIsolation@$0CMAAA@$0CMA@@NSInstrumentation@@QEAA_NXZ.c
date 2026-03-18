/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008BD7C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB250 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D878 (-Create@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C008DB3C (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(__int64 a1)
{
  NSInstrumentation *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _PAGED_LOOKASIDE_LIST *Pool2; // rax

  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 48),
    _lambda_9de5ad5352d5075be9212076aeab69f1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>,
    _lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>,
    (POOL_TYPE)512,
    2u,
    0x2C0uLL,
    0x616C6947u,
    0x100u);
  if ( NSInstrumentation::PlatformDebugModeEnabled(v2) )
  {
    *(_BYTE *)(a1 + 36) = 1;
    Pool2 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL);
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( Pool2 )
    {
      ExInitializePagedLookasideList(
        Pool2,
        _lambda_29ba820c7a8735764b0788aa326625cd_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
        _lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>,
        0x220u,
        0x2C0uLL,
        0x6F736955u,
        0x100u);
      return 1;
    }
  }
  else
  {
    v3 = (_QWORD *)ExAllocatePool2(262LL, 8LL);
    *(_QWORD *)(a1 + 16) = v3;
    if ( v3 )
    {
      *v3 = 0LL;
      v4 = (_QWORD *)NSInstrumentation::CSectionEntry<180224,704>::Create();
      if ( v4 )
      {
        v5 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 220;
        if ( *v5 != a1 )
          __fastfail(3u);
        *v4 = a1;
        v4[1] = v5;
        *v5 = v4;
        *(_QWORD *)(a1 + 8) = v4;
        return 1;
      }
    }
  }
  return 0;
}
