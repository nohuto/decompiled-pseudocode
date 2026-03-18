/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C039EC94
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  char v11; // al
  char v12; // r14
  _QWORD *v13; // rbp
  _BYTE *v14; // rax
  _BYTE *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 96 * v7 + 8;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v8, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = *(_BYTE *)(a1 + 40);
      v12 = 0;
      v13 = (_QWORD *)(a1 + 24);
      *(_BYTE *)a2[4] = v11;
      v14 = (_BYTE *)a2[4];
      v15 = v14 + 8;
      if ( (_QWORD *)*v13 != v13 )
      {
        v16 = *v13 - 8LL;
        if ( *v13 != 8LL )
        {
          do
          {
            *(_DWORD *)v15 = *(_DWORD *)(v16 + 48);
            *(_OWORD *)(v15 + 4) = *(_OWORD *)(v16 + 52);
            *(_OWORD *)(v15 + 20) = *(_OWORD *)(v16 + 68);
            *(_QWORD *)(v15 + 36) = *(_QWORD *)(v16 + 84);
            *((_DWORD *)v15 + 11) = *(_DWORD *)(v16 + 92);
            *((_DWORD *)v15 + 12) = *(_DWORD *)(v16 + 96);
            *((_DWORD *)v15 + 13) = *(_DWORD *)(v16 + 100);
            *((_DWORD *)v15 + 14) = *(_DWORD *)(v16 + 104);
            *((_QWORD *)v15 + 8) = *(_QWORD *)(v16 + 112);
            *((_DWORD *)v15 + 23) = *(_DWORD *)(v16 + 140);
            *(_OWORD *)(v15 + 72) = *(_OWORD *)(v16 + 120);
            *((_DWORD *)v15 + 22) = *(_DWORD *)(v16 + 136);
            v15 += 96;
            v17 = *(_QWORD **)(v16 + 8);
            v16 = (__int64)(v17 - 1);
            if ( v17 == v13 )
              v16 = 0LL;
            ++v12;
          }
          while ( v16 );
          v14 = (_BYTE *)a2[4];
        }
      }
      if ( v12 != *v14 )
        WdLogSingleEntry0(1LL);
      if ( v12 )
      {
        if ( (_BYTE *)v8 != &v15[-a2[4]] )
          WdLogSingleEntry0(1LL);
      }
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
