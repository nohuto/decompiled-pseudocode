/*
 * XREFs of ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F50C
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F9B4 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FC06 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00ACB44 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00ACEA0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0B8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF248 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF608 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSelectiveSuspendSetResumeBusyReason(_DWORD *a1, char a2, unsigned int a3, int a4)
{
  __int16 v4; // r10
  int v6; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // r13
  char v12; // r15
  unsigned int i; // ebx
  unsigned __int16 v14; // dx
  int v15; // ebp
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // rcx

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
      if ( v6 >= 0 && (unsigned __int64)v6 < 0x31 )
      {
        a1[4 * v6 + 185] = a3;
        if ( a2 )
          ++LOWORD(a1[4 * v6 + 184]);
        else
          ++HIWORD(a1[4 * v6 + 184]);
        if ( a4 )
        {
          v7 = a1 + 381;
          v8 = -1;
          v9 = -1;
          v10 = -1;
          LODWORD(v11) = 0;
          v12 = 0;
          for ( i = 0; i < 8; ++i )
          {
            v14 = *(_WORD *)v7;
            if ( *(_WORD *)v7 )
              *(_WORD *)v7 = --v14;
            v15 = *((unsigned __int16 *)v7 - 1);
            v16 = v15 + v14;
            v11 = v16 + (unsigned int)v11;
            if ( !v12 )
            {
              v17 = v7[1];
              if ( v17 == a4 )
              {
                *(_WORD *)v7 = v14 + 1;
                if ( a2 )
                  ++*((_WORD *)v7 - 2);
                else
                  *((_WORD *)v7 - 1) = v15 + 1;
                v12 = 1;
              }
              else if ( v17 )
              {
                if ( v16 < v10 && !*((_WORD *)v7 - 2) )
                {
                  v10 = v15 + v14;
                  v9 = i;
                }
              }
              else
              {
                v8 = i;
              }
            }
            v7 += 3;
          }
          if ( !v12 )
          {
            if ( v8 == -1 )
            {
              if ( v9 == -1 )
                return;
              v8 = v9;
              LOWORD(a1[3 * v9 + 381]) = (unsigned __int64)(v11 + 4) >> 3;
            }
            else
            {
              LOWORD(a1[3 * v8 + 381]) = 255;
            }
            v18 = 3LL * v8;
            a1[v18 + 382] = a4;
            LOWORD(a1[v18 + 380]) = a2 != 0;
            LOBYTE(v4) = a2 == 0;
            HIWORD(a1[v18 + 380]) = v4;
          }
        }
      }
    }
  }
}
