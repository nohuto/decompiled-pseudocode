/*
 * XREFs of ?evaluate@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXXZ @ 0x18071B864
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@EEAAXXZ @ 0x18071B3D0 (-evaluate@-$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@EEAAX.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::evaluate(
        _tip_UpdateTransitionScreenTimeOutInfoTipTest *this,
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
  const char *v11; // rax
  __int64 v12; // r9
  char v13; // r10
  const char *v14; // rax
  __int64 *v15; // r9
  __int64 v16; // rcx
  char v17; // r10

  if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 10) )
  {
    v14 = tip::details::reason_string((tip::details *)"reason::invalidState", a2);
    v16 = *v15;
    if ( *(_BYTE *)(*v15 + 72) == v17 )
    {
      *(_QWORD *)(v16 + 80) = v14;
      *(_BYTE *)(v16 + 72) = 4;
      *(_WORD *)(v16 + 74) = 4;
    }
  }
  else
  {
    if ( *((_WORD *)this + 4) <= 0x14u )
    {
      if ( !*((_BYTE *)this + 11) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::failToUpdate", a2);
        v5 = *v4;
        if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
          return;
        *(_BYTE *)(v5 + 72) = v3 + 3;
        v6 = v3 + 2;
        goto LABEL_7;
      }
      if ( *((_WORD *)this + 4) <= 0x14u )
        goto LABEL_12;
    }
    if ( !*((_BYTE *)this + 11) )
    {
LABEL_12:
      v9 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
        if ( (*(_DWORD *)v9 & 0x200) != 0 )
        {
          v11 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
          if ( *(_BYTE *)(v12 + 72) == v13 )
          {
            *(_QWORD *)(v12 + 80) = v11;
            *(_BYTE *)(v12 + 72) = 1;
            *(_WORD *)(v12 + 74) = 1;
          }
          return;
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
      *(_BYTE *)(v9 + 72) = 3;
      *(_WORD *)(v9 + 74) = v10;
      *(_QWORD *)(v9 + 80) = 0LL;
      return;
    }
    v2 = tip::details::reason_string((tip::details *)"reason::invalidUpdate", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == v8 )
    {
      v6 = 3;
      *(_BYTE *)(v5 + 72) = 3;
LABEL_7:
      *(_WORD *)(v5 + 74) = v6;
      *(_QWORD *)(v5 + 80) = v2;
    }
  }
}
