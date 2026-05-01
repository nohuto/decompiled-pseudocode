/*
 * XREFs of ?evaluate@_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@QEAAXXZ @ 0x180278984
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EEAAXXZ @ 0x180278950 (-evaluate@-$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EEA.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_MakePhysicalDeviceAccessKeyVolatileTipTest::evaluate(
        _tip_MakePhysicalDeviceAccessKeyVolatileTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r10
  __int64 *v9; // r9
  char v10; // r10
  __int64 v11; // r9
  __int16 v12; // ax
  char v13; // cl
  const char *v14; // rax
  char v15; // r10

  if ( !*((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::physicalDeviceAccessKeyDeletionFailed", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 2;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 9) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::physicalDeviceAccessKeyCreationFailed", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == v8 )
    {
      v6 = 3;
      *(_BYTE *)(v5 + 72) = 3;
LABEL_4:
      *(_WORD *)(v5 + 74) = v6;
      *(_QWORD *)(v5 + 80) = v2;
      return;
    }
    return;
  }
  if ( *((_BYTE *)this + 10) )
  {
    v11 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      if ( (*(_DWORD *)v11 & 0x200) != 0 )
      {
        v14 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v11 + 72) != v15 )
          return;
        v13 = 1;
        *(_QWORD *)(v11 + 80) = v14;
        *(_WORD *)(v11 + 74) = 1;
        goto LABEL_20;
      }
      if ( *(_BYTE *)(v11 + 72) )
        return;
      v12 = 16385;
    }
    else
    {
      if ( *(_BYTE *)(v11 + 72) )
        return;
      v12 = 0x4000;
    }
    *(_WORD *)(v11 + 74) = v12;
    v13 = 3;
    *(_QWORD *)(v11 + 80) = 0LL;
LABEL_20:
    *(_BYTE *)(v11 + 72) = v13;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::settingPhysicalDeviceAccessKeyFailed", a2);
  v5 = *v9;
  if ( *(_BYTE *)(*v9 + 72) == v10 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 4;
    goto LABEL_4;
  }
}
