/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8530
 * Callers:
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C039F250 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00690EC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00697AC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int8 v11; // bp
  DMMVIDPNSOURCEMODESET *v12; // rsi
  const struct DMMVIDPNSOURCEMODE *i; // rsi

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v7 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 44 * v7;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 44 * v7, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 64);
      v12 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v12 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v12 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
          DMMVIDPNSOURCEMODE::Serialize(i, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(a2[4] + 4LL + 40LL * v11++));
      }
      if ( v11 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v8, this, v9);
      return v10;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
