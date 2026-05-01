/*
 * XREFs of ?evaluate@_tip_DiscoverabilityManagerTipTest@@QEAAXXZ @ 0x1806FC804
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXXZ @ 0x1806FC7F0 (-evaluate@-$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_DiscoverabilityManagerTipTest::evaluate(_tip_DiscoverabilityManagerTipTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  char v6; // dl
  const char *v7; // rax
  __int64 *v8; // r9
  __int64 v9; // rcx
  char v10; // r10
  __int16 v11; // dx
  __int64 *v12; // r9
  char v13; // r10
  __int64 *v14; // r9
  char v15; // r10
  const char *v16; // rax
  __int64 *v17; // r9
  __int64 v18; // r8
  char v19; // r10
  const char *v20; // rax
  __int64 *v21; // r9
  __int64 v22; // rdx
  char v23; // r10
  __int16 v24; // cx
  __int64 *v25; // r9
  char v26; // r10
  __int64 *v27; // r9
  char v28; // r10
  __int64 *v29; // r9
  char v30; // r10
  __int16 v31; // ax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToInitializeComponent", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    v6 = v3 + 3;
    *(_WORD *)(v5 + 74) = v3;
LABEL_4:
    *(_QWORD *)(v5 + 80) = v2;
LABEL_40:
    *(_BYTE *)(v5 + 72) = v6;
    return;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::failedToGetAvailableDeviceInformation", a2);
    v9 = *v8;
    if ( *(_BYTE *)(*v8 + 72) != v10 )
      return;
    *(_BYTE *)(v9 + 72) = 3;
    v11 = 1;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 10) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::failedToSubscribeApplicationView", a2);
    v9 = *v12;
    if ( *(_BYTE *)(*v12 + 72) != v13 )
      return;
    *(_BYTE *)(v9 + 72) = 3;
    v11 = 2;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 11) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedGetViews", a2);
    v5 = *v14;
    if ( *(_BYTE *)(*v14 + 72) != v15 )
      return;
    v6 = 3;
    *(_WORD *)(v5 + 74) = 3;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 12) )
  {
    if ( *((_BYTE *)this + 13) )
    {
      v20 = tip::details::reason_string((tip::details *)"reason::ignoreIfMiracastNotAvailable", a2);
      v22 = *v21;
      if ( *(_BYTE *)(*v21 + 72) != v23 )
        return;
      *(_BYTE *)(v22 + 72) = 4;
      v24 = 5;
    }
    else
    {
      if ( !*((_BYTE *)this + 14) )
      {
        if ( *((_BYTE *)this + 15) )
        {
          v7 = tip::details::reason_string((tip::details *)"reason::succeedIfSubscribed", a2);
          v9 = *v27;
          if ( *(_BYTE *)(*v27 + 72) != v28 )
            return;
          *(_BYTE *)(v9 + 72) = 1;
          v11 = 7;
        }
        else
        {
          if ( !*((_BYTE *)this + 16) )
          {
            v5 = *(_QWORD *)this;
            if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 16) )
            {
              if ( (*(_DWORD *)v5 & 0x200) != 0 )
              {
                if ( *(_BYTE *)(v5 + 72) )
                  return;
                v6 = 1;
                v31 = 0x8000;
              }
              else
              {
                if ( *(_BYTE *)(v5 + 72) )
                  return;
                v6 = 3;
                v31 = 16385;
              }
            }
            else
            {
              if ( *(_BYTE *)(v5 + 72) )
                return;
              v6 = 3;
              v31 = 0x4000;
            }
            *(_QWORD *)(v5 + 80) = 0LL;
            *(_WORD *)(v5 + 74) = v31;
            goto LABEL_40;
          }
          v7 = tip::details::reason_string((tip::details *)"reason::succeedIfCampaignInvoked", a2);
          v9 = *v29;
          if ( *(_BYTE *)(*v29 + 72) != v30 )
            return;
          *(_BYTE *)(v9 + 72) = 1;
          v11 = 8;
        }
LABEL_8:
        *(_WORD *)(v9 + 74) = v11;
        *(_QWORD *)(v9 + 80) = v7;
        return;
      }
      v20 = tip::details::reason_string((tip::details *)"reason::ignoreIfCampaignThresholdNotMet", a2);
      v22 = *v25;
      if ( *(_BYTE *)(*v25 + 72) != v26 )
        return;
      *(_BYTE *)(v22 + 72) = 4;
      v24 = 6;
    }
    *(_WORD *)(v22 + 74) = v24;
    *(_QWORD *)(v22 + 80) = v20;
    return;
  }
  v16 = tip::details::reason_string((tip::details *)"reason::failedGetViewCount", a2);
  v18 = *v17;
  if ( *(_BYTE *)(*v17 + 72) == v19 )
  {
    *(_QWORD *)(v18 + 80) = v16;
    *(_BYTE *)(v18 + 72) = 3;
    *(_WORD *)(v18 + 74) = 4;
  }
}
