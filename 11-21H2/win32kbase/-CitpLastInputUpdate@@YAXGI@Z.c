/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0016698
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     CitLastInputUpdate @ 0x1C007E060 (CitLastInputUpdate.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02406E4 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C001689C (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0017550 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0017574 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rbx
  int v4; // edi
  struct _CIT_IMPACT_CONTEXT *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  struct tagPROCESSINFO *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct tagPROCESSINFO *v11; // rcx
  struct _CIT_PROCESS *v12; // rax
  struct _CIT_PROCESS *v13; // rdi
  struct _CIT_INTERACTION_SUMMARY *v14; // rax
  struct _CIT_INTERACTION_SUMMARY *v15; // rsi
  __int64 v16; // rax

  v2 = a1;
  LODWORD(v3) = a2;
  if ( a1 == 32 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
      MEMORY[0xFFFFF780000002E4] = a2;
  }
  if ( xmmword_1C029A230 )
  {
    if ( a2 < *((_DWORD *)&xmmword_1C029A230 + 2) )
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = xmmword_1C029A230;
    *((_DWORD *)&xmmword_1C029A230 + 2) = v3;
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)xmmword_1C029A230 + 228), v3);
    if ( !v4 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v5 + 204), v3);
    v6 = *((_QWORD *)v5 + 15);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 928);
      if ( CitpProcessInfoIsValid((struct _CIT_PROCESS *)v7)
        && CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(v7 + 24))
        && (v11 = *(struct tagPROCESSINFO **)(v9 + 8)) != 0LL
        && v11 != v8 )
      {
        v12 = CitpProcessEnsureContext(v11);
        v13 = v12;
        if ( v12 )
        {
          v14 = CitpInteractionSummaryEnsure(v5, v12, 1u);
          v15 = v14;
          if ( (unsigned int)(v3 - *((_DWORD *)v13 + 24)) > 0x3E8 )
          {
            *((_DWORD *)v13 + 24) = v3;
            *((_WORD *)v13 + 50) = 0;
            if ( v14 )
              CitpStatIncrement((unsigned __int16 *)v14 + 16, 1u);
            PsUpdateComponentPower(**((_QWORD **)v13 + 1), 9LL);
          }
          if ( v15 && ((unsigned __int16)v2 & *((_WORD *)v13 + 50)) == 0 )
          {
            if ( v2 > 0x200 )
            {
              switch ( v2 )
              {
                case 0x400u:
                  PsUpdateComponentPower(**((_QWORD **)v13 + 1), 13LL);
                  v16 = 38LL;
                  goto LABEL_70;
                case 0x800u:
                  PsUpdateComponentPower(**((_QWORD **)v13 + 1), 14LL);
                  v16 = 42LL;
                  goto LABEL_70;
                case 0x1000u:
                  v16 = 48LL;
                  goto LABEL_70;
                case 0x2000u:
                  v16 = 52LL;
                  goto LABEL_70;
                case 0x4000u:
                  v16 = 60LL;
                  goto LABEL_70;
                case 0x8000u:
                  v16 = 54LL;
                  goto LABEL_70;
              }
            }
            else
            {
              switch ( v2 )
              {
                case 0x200u:
                  PsUpdateComponentPower(**((_QWORD **)v13 + 1), 13LL);
                  v16 = 36LL;
                  goto LABEL_70;
                case 1u:
                  PsUpdateComponentPower(**((_QWORD **)v13 + 1), 13LL);
                  v16 = 34LL;
                  goto LABEL_70;
                case 2u:
                  PsUpdateComponentPower(**((_QWORD **)v13 + 1), 14LL);
                  v16 = 40LL;
                  goto LABEL_70;
                case 4u:
                  v16 = 46LL;
                  goto LABEL_70;
                case 8u:
                  v16 = 50LL;
                  goto LABEL_70;
                case 0x10u:
                  v16 = 44LL;
                  goto LABEL_70;
                case 0x80u:
                  v16 = 56LL;
                  goto LABEL_70;
                case 0x100u:
                  v16 = 58LL;
LABEL_70:
                  CitpStatIncrement((unsigned __int16 *)((char *)v15 + v16), 1u);
                  *((_WORD *)v13 + 50) |= v2;
                  break;
              }
            }
          }
        }
      }
      else
      {
        if ( (unsigned int)(v3 - *(_DWORD *)(v7 + 108)) > 0x3E8 )
        {
          *(_DWORD *)(v7 + 108) = v3;
          *(_WORD *)(v7 + 114) = 0;
          CitpStatIncrement((unsigned __int16 *)v5 + 70, 1u);
          PsUpdateComponentPower(**((_QWORD **)v5 + 15), 9LL);
        }
        if ( ((unsigned __int16)v2 & *(_WORD *)(v7 + 114)) == 0 )
        {
          if ( v2 <= 0x200 )
          {
            switch ( v2 )
            {
              case 0x200u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL);
                v10 = 144LL;
                break;
              case 1u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL);
                v10 = 142LL;
                break;
              case 2u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL);
                v10 = 148LL;
                break;
              case 4u:
                v10 = 154LL;
                break;
              case 8u:
                v10 = 158LL;
                break;
              case 0x10u:
                v10 = 152LL;
                break;
              case 0x80u:
                v10 = 164LL;
                break;
              case 0x100u:
                v10 = 166LL;
                break;
              default:
                return;
            }
          }
          else
          {
            switch ( v2 )
            {
              case 0x400u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL);
                v10 = 146LL;
                break;
              case 0x800u:
                PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL);
                v10 = 150LL;
                break;
              case 0x1000u:
                v10 = 156LL;
                break;
              case 0x2000u:
                v10 = 160LL;
                break;
              case 0x4000u:
                v10 = 168LL;
                break;
              case 0x8000u:
                v10 = 162LL;
                break;
              default:
                return;
            }
          }
          CitpStatIncrement((unsigned __int16 *)((char *)v5 + v10), 1u);
          *(_WORD *)(v7 + 114) |= v2;
        }
      }
    }
  }
}
