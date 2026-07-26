/*
 * XREFs of ndisNsiGetInterfaceRodEnumObject @ 0x1C010EE30
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000AA30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D980 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C010D660 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbx
  struct _NDIS_IF_BLOCK *v6; // r13
  unsigned int v7; // edi
  struct _NDIS_IF_BLOCK *v8; // r12
  char *v9; // r15
  unsigned int v10; // r14d
  int v11; // ebp
  char v12; // r8
  unsigned int v13; // ebx
  _OWORD *p_ifOperStatusFlags; // rdx
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v21)(void *, _QWORD, unsigned int *, char *); // rax
  unsigned int v22; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  __int64 v24; // r15
  unsigned __int16 v25; // cx
  char *v26; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // r13d
  __int64 v29; // rdi
  char *v30; // rcx
  char v31; // [rsp+40h] [rbp-2B8h]
  unsigned int v33; // [rsp+44h] [rbp-2B4h] BYREF
  struct _NDIS_IF_BLOCK *v34; // [rsp+48h] [rbp-2B0h]
  char *v35; // [rsp+50h] [rbp-2A8h]
  _NDIS_MINIPORT_BLOCK *v36; // [rsp+58h] [rbp-2A0h]
  struct _NDIS_IF_BLOCK *v37; // [rsp+60h] [rbp-298h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+68h] [rbp-290h]
  __int64 v39; // [rsp+70h] [rbp-288h]
  _OWORD v40[2]; // [rsp+78h] [rbp-280h] BYREF
  __int16 v41; // [rsp+98h] [rbp-260h]
  char v42[528]; // [rsp+A0h] [rbp-258h] BYREF

  v4 = a3;
  v34 = a2;
  v37 = a1;
  v6 = a1;
  v39 = a3;
  v7 = 0;
  memset(v42, 0, 0x204uLL);
  v8 = a2;
  if ( !a2 )
    v8 = v6;
  v38 = v8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v6,
      v4);
  v9 = *(char **)(v4 + 40);
  v10 = *(_DWORD *)(v4 + 52);
  v11 = *(_DWORD *)(v4 + 48);
  v41 = 0;
  v35 = v9;
  memset(v40, 0, sizeof(v40));
  if ( v9 )
  {
    v12 = 0;
    v31 = 0;
    if ( v11 > 0 )
    {
      while ( 1 )
      {
        if ( v12 )
        {
LABEL_18:
          v4 = v39;
          break;
        }
        v13 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v10 > 0x218 )
        {
          switch ( v10 )
          {
            case 0x21Cu:
              v15 = 4;
              v16 = 544;
              p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v8)->ifOperStatusFlags;
              goto LABEL_13;
            case 0x220u:
              v15 = 4;
              v13 = 65798;
              v16 = 548;
              goto LABEL_13;
            case 0x224u:
              v15 = 34;
              if ( v6->ifType == 71 && a4 )
              {
                p_ifOperStatusFlags = v40;
              }
              else if ( v6->bNdisIsProvider )
              {
                p_ifOperStatusFlags = &v8->ifPhysAddress.Length;
              }
              else
              {
                v13 = 16843010;
              }
              v16 = 582;
              goto LABEL_13;
            case 0x246u:
              v15 = 34;
              if ( v6->ifType == 71 && a4 )
              {
                p_ifOperStatusFlags = v40;
              }
              else if ( v6->bNdisIsProvider )
              {
                p_ifOperStatusFlags = &v8->PermanentPhysAddress.Length;
              }
              else
              {
                v13 = 16843009;
              }
              v16 = 616;
              goto LABEL_13;
            case 0x268u:
              v15 = 4;
              v13 = 66184;
              v16 = 624;
              goto LABEL_13;
            case 0x270u:
              v15 = 8;
              if ( v34 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v34)->XmitLinkSpeed;
              else
                v13 = 66180;
              v16 = 632;
              goto LABEL_13;
            case 0x278u:
              v15 = 8;
              if ( v34 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v34)->RcvLinkSpeed;
              else
                v13 = 66181;
              v16 = 640;
              goto LABEL_13;
            case 0x280u:
              v15 = 1;
              if ( v6->bNdisIsProvider )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->ifPromiscuousMode;
              else
                v13 = 66176;
              v16 = 641;
              goto LABEL_13;
            case 0x281u:
              v15 = 1;
              p_ifOperStatusFlags = &v6->ifDeviceWakeUpEnable;
              v16 = 642;
              goto LABEL_13;
            case 0x282u:
              v15 = 1;
              p_ifOperStatusFlags = &v6->ifHideInterfaceInUi;
              v16 = 644;
              goto LABEL_13;
            case 0x284u:
              v15 = 4;
              if ( v34 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v34)->MediaConnectState;
              else
                v13 = 66186;
              v16 = 648;
              goto LABEL_13;
            case 0x288u:
              v15 = 4;
              if ( v34 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v34)->MediaDuplexState;
              else
                v13 = 66188;
              v16 = v10 + 4;
              v31 = 1;
              goto LABEL_13;
            default:
              goto LABEL_96;
          }
        }
        if ( v10 == 536 )
        {
          v15 = 4;
          v13 = 66179;
          v16 = 540;
        }
        else if ( v10 )
        {
          if ( v10 == 4 )
          {
            v15 = 16;
            p_ifOperStatusFlags = &v6->NetworkGuid.Data1;
            v16 = 20;
          }
          else
          {
            if ( v10 != 20 )
            {
LABEL_96:
              v12 = 1;
              v31 = 1;
              goto LABEL_17;
            }
            v15 = 516;
            if ( !v6->bNdisIsProvider )
            {
              v13 = 66185;
              goto LABEL_34;
            }
            if ( !v6->IsNdisFilter )
            {
              p_ifOperStatusFlags = &v6->ifAlias.Length;
LABEL_34:
              v16 = 536;
              goto LABEL_13;
            }
            Miniport = v6->Miniport;
            v36 = Miniport;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xEu,
                (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
                (char)Miniport,
                v42);
            memset(v42, 0, 0x204uLL);
            *(_WORD *)v42 = LOWORD(Miniport->BaseMiniport->Interrupt)
                          + 12
                          + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
            if ( *(_WORD *)v42 > 0x200u )
              *(_WORD *)v42 = 512;
            memmove(
              &v42[2],
              (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL));
            v24 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
            v25 = *(_WORD *)v42;
            v26 = &v42[v24 + 2];
            if ( *(unsigned __int16 *)v42 - (unsigned int)v24 >= 2 )
            {
              LODWORD(v24) = v24 + 2;
              *(_WORD *)v26 = 45;
              v26 += 2;
              v25 = *(_WORD *)v42;
            }
            if ( v25 > (unsigned int)v24 )
            {
              BaseMiniport = Miniport->BaseMiniport;
              Interrupt_low = LOWORD(BaseMiniport->Interrupt);
              if ( v25 - (unsigned int)v24 <= Interrupt_low )
                Interrupt_low = v25 - (_DWORD)v24;
              v29 = Interrupt_low;
              memmove(v26, *(const void **)&BaseMiniport->Flags, Interrupt_low);
              v25 = *(_WORD *)v42;
              LODWORD(v24) = Interrupt_low + v24;
              v6 = v37;
              v26 += v29;
              Miniport = v36;
            }
            if ( v25 - (unsigned int)v24 >= 2 )
            {
              LODWORD(v24) = v24 + 2;
              *(_WORD *)v26 = 45;
              v26 += 2;
              v25 = *(_WORD *)v42;
            }
            if ( v25 - (unsigned int)v24 >= 8 )
              *(_QWORD *)v26 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                         + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x16u,
                0xFu,
                (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
                (char)Miniport,
                v42);
            v9 = v35;
            p_ifOperStatusFlags = v42;
            v8 = v38;
            v16 = 536;
          }
        }
        else
        {
          v15 = 4;
          p_ifOperStatusFlags = &v6->CompartmentId;
          v16 = 4;
        }
LABEL_13:
        if ( v11 < v15 )
          goto LABEL_96;
        if ( v13 )
        {
          ProviderIfContext = v8->ProviderIfContext;
          v21 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, char *))*((_QWORD *)v8->ProviderHandle + 7);
          v33 = v15;
          if ( v21(ProviderIfContext, v13, &v33, v9) )
          {
            v30 = v9;
          }
          else
          {
            if ( v33 >= v15 )
            {
LABEL_26:
              v12 = v31;
              v22 = v16 - v10;
              v10 = v16;
              v9 += v22;
              v35 = v9;
              v11 -= v22;
              goto LABEL_17;
            }
            v15 -= v33;
            v30 = &v9[v33];
          }
          memset(v30, 0, v15);
          goto LABEL_26;
        }
        if ( !p_ifOperStatusFlags )
          goto LABEL_96;
        memmove(v9, p_ifOperStatusFlags, v15);
        v12 = v31;
        v17 = v16 - v10;
        v10 = v16;
        v9 += v17;
        v35 = v9;
        v11 -= v17;
LABEL_17:
        v7 = 0;
        if ( v11 <= 0 )
          goto LABEL_18;
      }
    }
    v18 = v10 - *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 48) = v18;
    if ( !v18 )
      v7 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v6,
      v4,
      v7);
  return v7;
}
