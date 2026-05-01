/*
 * XREFs of ?evaluate@_tip_FileMappingTipTest@@QEAAXXZ @ 0x18071B554
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXXZ @ 0x18071B370 (-evaluate@-$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_FileMappingTipTest::evaluate(_tip_FileMappingTipTest *this, const char *a2)
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
  __int64 *v11; // r9
  char v12; // r10
  __int64 v13; // r9
  __int16 v14; // ax
  char v15; // cl
  const char *v16; // rax
  char v17; // r10

  if ( !*((_QWORD *)this + 1) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::invalidWindow", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 2;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::getBufferFailed", a2);
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
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((int *)this + 8) < 0 )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::stateInvalid", a2);
      v5 = *v11;
      if ( *(_BYTE *)(*v11 + 72) == v12 )
      {
        *(_BYTE *)(v5 + 72) = 3;
        v6 = 5;
        goto LABEL_4;
      }
      return;
    }
    v13 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      if ( (*(_DWORD *)v13 & 0x200) != 0 )
      {
        v16 = tip::details::reason_string((tip::details *)"reason::succeeded", a2);
        if ( *(_BYTE *)(v13 + 72) != v17 )
          return;
        v15 = 1;
        *(_QWORD *)(v13 + 80) = v16;
        *(_WORD *)(v13 + 74) = 1;
        goto LABEL_23;
      }
      if ( *(_BYTE *)(v13 + 72) )
        return;
      v14 = 16385;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 72) )
        return;
      v14 = 0x4000;
    }
    *(_WORD *)(v13 + 74) = v14;
    v15 = 3;
    *(_QWORD *)(v13 + 80) = 0LL;
LABEL_23:
    *(_BYTE *)(v13 + 72) = v15;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::invalidTimestamp", a2);
  v5 = *v9;
  if ( *(_BYTE *)(*v9 + 72) == v10 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 4;
    goto LABEL_4;
  }
}
