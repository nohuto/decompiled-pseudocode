/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C0108390
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int16 *v3; // rbx
  unsigned __int64 BaseMiniport_high; // rcx
  unsigned __int64 i; // r15
  _QWORD *MiniportAdapterContext; // r12
  __int64 v9; // rax
  int v10; // r8d
  bool v11; // zf
  int v12; // eax
  unsigned __int64 v13; // r9
  unsigned __int64 j; // r15
  _NDIS_MINIPORT_BLOCK *NextMiniport; // r12
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  $3484372124D9A3F19503CD0C8B2AC869 *v21; // r15
  int v22; // r8d
  unsigned int v23; // edx
  int SpinLock_high; // edx
  int v25; // eax
  bool v26; // cf
  int v27; // edx
  unsigned __int16 v28; // r9
  unsigned __int16 *v29[20]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = 0LL;
  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
LABEL_54:
      __fastfail(5u);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v9 = MiniportAdapterContext[i];
    v10 = *(_DWORD *)(v9 + 52);
    if ( v10 || *(_DWORD *)(v9 + 28) )
    {
      v11 = *(_BYTE *)(v9 + 9) == 0;
      v12 = 0;
      if ( v11 )
        LOBYTE(v12) = v10 == 0;
      if ( (*(_DWORD *)(MiniportAdapterContext[i] + 32LL) != 0) != v12 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        v25 = HIDWORD(a2->ShortRef.SpinLock) | 4;
        HIDWORD(a2->ShortRef.SpinLock) = v25;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              SpinLock_high,
              v25);
          }
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)MiniportAdapterContext[i],
              (struct NDIS_PNPTRACE_LOCALS *)v29);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v27,
                0x1Cu,
                0x3Eu,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                v29[1],
                v29[0]);
          }
        }
        return;
      }
    }
  }
  v13 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0LL; j != v13; ++j )
  {
    if ( j >= v13 )
      goto LABEL_54;
    NextMiniport = a2->NextMiniport;
    v16 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v17 = *(_DWORD *)(v16 + 52);
    if ( v17 || *(_DWORD *)(v16 + 28) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 40LL);
      if ( v18
        && *(_BYTE *)(v18 + 56) >= 6u
        && ((v19 = *(_DWORD *)(v16 + 32)) != 0 && (*(_BYTE *)(v16 + 9) || v17)
         || !*((_BYTE *)this + 1995) && !v19 && !*(_BYTE *)(v16 + 9) && !v17) )
      {
        v20 = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = v20 | 4;
        if ( !v20 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v20,
              v20 | 4);
          }
          v26 = (unsigned __int8)byte_1C00EC66B < 4u;
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
          if ( !v26 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
              0x1Cu,
              0x3Fu,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
              **((_QWORD **)&NextMiniport->Header.Type + j));
        }
        return;
      }
    }
  }
  v21 = &a2->32;
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp)
      && (unsigned __int8)byte_1C00EC66B >= 4u )
    {
      if ( this )
        v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = 64;
LABEL_64:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          0x1Cu,
          v28,
          (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
          v3,
          this);
      }
    }
  }
  else
  {
    v22 = HIDWORD(a2->ShortRef.SpinLock);
    v23 = v22 & 0xFFFFFFFB;
    HIDWORD(a2->ShortRef.SpinLock) = v22 & 0xFFFFFFFB;
    if ( (v22 != 0) != ((v22 & 0xFFFFFFFB) != 0) || !*(_QWORD *)&v21->Reserved4.Length )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v22,
          v23);
      }
      v26 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*(_QWORD *)&v21->Reserved4.Length + 5216LL) = 1;
      if ( !v26 )
      {
        if ( this )
          v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = 65;
          goto LABEL_64;
        }
      }
    }
  }
}
