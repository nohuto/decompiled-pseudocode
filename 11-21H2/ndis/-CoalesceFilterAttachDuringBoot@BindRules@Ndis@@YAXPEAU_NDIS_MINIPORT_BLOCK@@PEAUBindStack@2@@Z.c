/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C0108DE8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00AD860 (WPP_RECORDER_SF__guid_D_ea_1C00AD860.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  int SpinLock; // r8d
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v10; // edx
  unsigned __int64 BaseMiniport_high; // r9
  unsigned __int64 i; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // edx
  int SpinLock_high; // r8d
  int v17; // edx
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // r9
  bool v20; // cf
  int v21; // [rsp+20h] [rbp-38h]
  char v22[8]; // [rsp+30h] [rbp-28h]

  if ( *((_BYTE *)this + 1995) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= BaseMiniport_high )
        __fastfail(5u);
      v13 = *((_QWORD *)a2->MiniportAdapterContext + i);
      if ( *(_DWORD *)(v13 + 52) || *(_DWORD *)(v13 + 28) )
      {
        v14 = *(_QWORD *)(v13 + 80);
        if ( (*(_DWORD *)(v14 + 40) & 1) == 0 && !*(_QWORD *)(v14 + 56) && !*(_BYTE *)(v13 + 8) )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14 + 24, 0x22u, v21, v14 + 24);
          }
          if ( Ndis::BindState::SetBinding(
                 (Ndis::BindState *)&a2->32,
                 BindingDisabled,
                 Reason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C00EC66B >= 4u
            && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              0x1Cu,
              0x23u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *((unsigned __int16 **)this + 482),
              this);
          }
          if ( Ndis::BindState::SetPause(
                 (Ndis::BindState *)&a2->32,
                 DatapathPaused,
                 PauseReason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v19 = 36;
              goto LABEL_59;
            }
          }
          return;
        }
      }
    }
  }
  SpinLock = a2->ShortRef.SpinLock;
  v6 = 0;
  v7 = 0;
  if ( *((_BYTE *)this + 1995) )
  {
    v15 = SpinLock & 0xFFFFFEFF;
    LODWORD(a2->ShortRef.SpinLock) = SpinLock & 0xFFFFFEFF;
    LOBYTE(v6) = (SpinLock & 0xFFFFFEFF) != 0;
    LOBYTE(v7) = SpinLock != 0;
    if ( v7 != v6 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          SpinLock,
          v15);
      }
      v20 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
      if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          0x1Cu,
          0x25u,
          (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
          *((unsigned __int16 **)this + 482),
          this);
    }
    SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
    v10 = SpinLock_high & 0xFFFFFFBF;
    HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high & 0xFFFFFFBF;
    if ( (SpinLock_high != 0) != ((SpinLock_high & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v22 = SpinLock_high & 0xFFFFFFBF;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          SpinLock_high,
          *(_QWORD *)v22);
      }
      v20 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
      if ( !v20 )
      {
        v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = 38;
LABEL_59:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            0x1Cu,
            v19,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            v18,
            this);
        }
      }
    }
  }
  else
  {
    v8 = SpinLock & 0xFFFFFEFF;
    LODWORD(a2->ShortRef.SpinLock) = SpinLock & 0xFFFFFEFF;
    LOBYTE(v6) = SpinLock != 0;
    LOBYTE(v7) = (SpinLock & 0xFFFFFEFF) != 0;
    if ( v6 != v7 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          SpinLock,
          v8);
      }
      v20 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
      if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          0x1Cu,
          0x27u,
          (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
          *((unsigned __int16 **)this + 482),
          this);
    }
    v9 = HIDWORD(a2->ShortRef.SpinLock);
    v10 = v9 & 0xFFFFFFBF;
    HIDWORD(a2->ShortRef.SpinLock) = v9 & 0xFFFFFFBF;
    if ( (v9 != 0) != ((v9 & 0xFFFFFFBF) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v22 = v9 & 0xFFFFFFBF;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v9,
          *(_QWORD *)v22);
      }
      v20 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5216LL) = 1;
      if ( !v20 )
      {
        v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = 40;
          goto LABEL_59;
        }
      }
    }
  }
}
