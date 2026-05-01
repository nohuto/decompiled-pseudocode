/*
 * XREFs of ?evaluate@_tip_SetPhysicalDeviceAccessRegKeyTipTest@@QEAAXXZ @ 0x180278A88
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXXZ @ 0x180278970 (-evaluate@-$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SetPhysicalDeviceAccessRegKeyTipTest::evaluate(
        _tip_SetPhysicalDeviceAccessRegKeyTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r10
  __int64 v9; // r9
  __int16 v10; // ax
  char v11; // cl
  const char *v12; // rax
  char v13; // r10

  if ( !*((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::physicalDeviceAccessKeyCreationFailed", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v9 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      if ( (*(_DWORD *)v9 & 0x200) != 0 )
      {
        v12 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v9 + 72) != v13 )
          return;
        v11 = 1;
        *(_QWORD *)(v9 + 80) = v12;
        *(_WORD *)(v9 + 74) = 1;
        goto LABEL_17;
      }
      if ( *(_BYTE *)(v9 + 72) )
        return;
      v10 = 16385;
    }
    else
    {
      if ( *(_BYTE *)(v9 + 72) )
        return;
      v10 = 0x4000;
    }
    *(_WORD *)(v9 + 74) = v10;
    v11 = 3;
    *(_QWORD *)(v9 + 80) = 0LL;
LABEL_17:
    *(_BYTE *)(v9 + 72) = v11;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::settingPhysicalDeviceAccessKeyFailed", a2);
  v5 = *v7;
  if ( *(_BYTE *)(*v7 + 72) == v8 )
  {
    v6 = 3;
    *(_BYTE *)(v5 + 72) = 3;
LABEL_4:
    *(_WORD *)(v5 + 74) = v6;
    *(_QWORD *)(v5 + 80) = v2;
  }
}
