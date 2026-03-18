/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A87D4
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03A5958 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00690EC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int8 v11; // si
  DMMVIDPNSOURCEMODESET *v12; // rdx
  const struct DMMVIDPNSOURCEMODE *i; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v7 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 88 * v7;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 88 * v7, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 64);
      v12 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v12 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v12 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v14 = a2[4];
          v15 = 10LL * v11;
          *(_DWORD *)(v14 + 8 * v15 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v14 + 8 * v15 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v14 + 8 * v15 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v14 + 8 * v15 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v14 + 8 * v15 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v14 + 8 * v15 + 72) = *((_DWORD *)i + 32);
          ++v11;
        }
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
