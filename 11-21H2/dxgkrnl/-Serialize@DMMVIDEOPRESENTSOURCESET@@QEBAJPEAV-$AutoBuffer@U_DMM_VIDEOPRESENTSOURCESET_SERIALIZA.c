/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8CE8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C03A8BA4 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // r14
  unsigned __int8 v12; // si
  __int64 v13; // rdi
  DMMVIDEOPRESENTSOURCE *i; // rdi
  __int64 v15; // rax

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 8 * v7 + 4;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v8, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = a1 + 24;
      v12 = 0;
      *(_BYTE *)a2[4] = *(_BYTE *)(a1 + 40);
      v13 = *(_QWORD *)(a1 + 24);
      if ( v13 != v11 )
      {
        for ( i = (DMMVIDEOPRESENTSOURCE *)(v13 - 8); i; ++v12 )
        {
          DMMVIDEOPRESENTSOURCE::Serialize(
            i,
            (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(a2[4] + 4LL + 8LL * v12));
          v15 = *((_QWORD *)i + 1);
          i = (DMMVIDEOPRESENTSOURCE *)(v15 - 8);
          if ( v15 == v11 )
            i = 0LL;
        }
      }
      if ( v12 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v8, a1, v9);
      return v10;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
