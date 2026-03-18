/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ECED0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0020E8C (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rax
  unsigned int v7; // ebp
  int VidPnSourceOwnerType; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm0
  int v13; // edx
  int v14; // edx
  _QWORD *v15; // rax
  _BYTE v16[8]; // [rsp+60h] [rbp-28h] BYREF
  struct DXGADAPTER *v17; // [rsp+68h] [rbp-20h]
  char v18; // [rsp+70h] [rbp-18h]

  v17 = a1;
  v18 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 349);
    v7 = 0;
    if ( *((_DWORD *)v6 + 24) )
    {
      while ( 1 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, v7);
        if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a1 + 349), v7) )
          break;
        if ( VidPnSourceOwnerType == 4 || VidPnSourceOwnerType == 2 || VidPnSourceOwnerType == 3 )
          goto LABEL_12;
LABEL_7:
        v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 349);
        if ( ++v7 >= *((_DWORD *)v6 + 24) )
          goto LABEL_8;
      }
      VidPnSourceOwnerType = 4;
LABEL_12:
      v10 = 4000LL * v7;
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 349) + 128LL);
      if ( *(_QWORD *)(v10 + v11 + 752) == *(_QWORD *)a2 )
      {
        v12 = *(_OWORD *)(v10 + v11 + 628);
        v13 = *((_DWORD *)a2 + 2);
        if ( (int)v12 <= v13 && SDWORD2(v12) >= v13 )
        {
          v14 = *((_DWORD *)a2 + 3);
          if ( SDWORD1(v12) <= v14 && SHIDWORD(v12) >= v14 )
          {
            if ( *((_DWORD *)a2 + 4) != -1 )
            {
              WdLogSingleEntry1(1LL, 10145LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pCallbackContext->VidPnSourceId == D3DDDI_ID_UNINITIALIZED",
                10145LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *((_DWORD *)a2 + 4) = v7;
            *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)a1 + 404);
            *((_DWORD *)a2 + 7) = VidPnSourceOwnerType;
          }
        }
      }
      goto LABEL_7;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
    v15[3] = a1;
    v15[4] = *((int *)a1 + 102);
    v15[5] = *((unsigned int *)a1 + 101);
  }
LABEL_8:
  if ( v18 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  return 0LL;
}
