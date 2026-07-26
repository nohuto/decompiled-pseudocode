/*
 * XREFs of ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003A0D6
 * Callers:
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00A6544 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A69F0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7F34 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A9394 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A95E8 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A9988 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSelectiveSuspendSetResumeBusyReason(_DWORD *a1, char a2, unsigned int a3, int a4)
{
  __int16 v4; // r10
  int v6; // eax
  __int64 v7; // rax
  _DWORD *v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // r13
  char v13; // r14
  unsigned int i; // r8d
  unsigned __int16 v15; // dx
  int v16; // esi
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx

  if ( a3 )
  {
    HIBYTE(v4) = 0;
    if ( a2 )
    {
      a1[157] = a3;
      a1[158] = a4;
    }
    else
    {
      a1[159] = a3;
      a1[160] = a4;
    }
    if ( a3 != 7 && (unsigned int)(a4 + 50265855) > 1 )
    {
      if ( a3 <= 0xF )
        v6 = a3;
      else
        v6 = a3 - 33 > 0x20 ? -1 : a3 - 17;
      if ( (unsigned int)v6 <= 0x30 )
      {
        v7 = 2LL * v6;
        a1[2 * v7 + 185] = a3;
        if ( a2 )
          ++LOWORD(a1[2 * v7 + 184]);
        else
          ++HIWORD(a1[2 * v7 + 184]);
        if ( a4 )
        {
          v8 = a1 + 381;
          v9 = -1;
          v10 = -1;
          v11 = -1;
          LODWORD(v12) = 0;
          v13 = 0;
          for ( i = 0; i < 8; ++i )
          {
            v15 = *(_WORD *)v8;
            if ( *(_WORD *)v8 )
              *(_WORD *)v8 = --v15;
            v16 = *((unsigned __int16 *)v8 - 1);
            v17 = v16 + v15;
            v12 = v17 + (unsigned int)v12;
            if ( !v13 )
            {
              v18 = v8[1];
              if ( v18 == a4 )
              {
                *(_WORD *)v8 = v15 + 1;
                if ( a2 )
                  ++*((_WORD *)v8 - 2);
                else
                  *((_WORD *)v8 - 1) = v16 + 1;
                v13 = 1;
              }
              else if ( v18 )
              {
                if ( v17 < v11 && !*((_WORD *)v8 - 2) )
                {
                  v11 = v16 + v15;
                  v10 = i;
                }
              }
              else
              {
                v9 = i;
              }
            }
            v8 += 3;
          }
          if ( !v13 )
          {
            if ( v9 == -1 )
            {
              if ( v10 == -1 )
                return;
              v19 = v10;
              v20 = (unsigned __int64)(v12 + 4) >> 3;
            }
            else
            {
              v19 = v9;
              LOWORD(v20) = 255;
            }
            LOWORD(a1[3 * v19 + 381]) = v20;
            v21 = 3 * v19;
            a1[v21 + 382] = a4;
            LOWORD(a1[v21 + 380]) = a2 != 0;
            LOBYTE(v4) = a2 == 0;
            HIWORD(a1[v21 + 380]) = v4;
          }
        }
      }
    }
  }
}
