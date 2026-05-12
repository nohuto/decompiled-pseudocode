/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x1C001AE84
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C001B058 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C001C94C (RaidSelectDeviceDumpCollectionMode.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C5EC (WPP_SF_qD.c)
 *     WPP_SF_qddd @ 0x1C003CC5C (WPP_SF_qddd.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  unsigned __int8 *v14; // rdi
  unsigned __int16 v15; // bx
  unsigned __int16 i; // bx
  int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v18; // [rsp+48h] [rbp-30h] BYREF

  v17 = 16;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_e288614d163b3ceea713389723084ed3_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
  v8 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LOWORD(v11) = 0;
LABEL_8:
    memset(a4, 0, 0xFFuLL);
    v12 = v18;
    v13 = (unsigned int)(v18[3] | ((v18[2] | ((v18[1] | (*v18 << 8)) << 8)) << 8)) >> 3;
    RaidSelectDeviceDumpCollectionMode(*a1);
    if ( v13 )
    {
      v14 = v12 + 9;
      v11 = v13;
      do
      {
        v15 = _byteswap_ushort(*(_WORD *)(v14 - 1)) & 0x3FFF;
        if ( v15 >= 0xFFu )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                17LL,
                &WPP_e288614d163b3ceea713389723084ed3_Traceguids,
                *a1,
                v15);
            }
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_e288614d163b3ceea713389723084ed3_Traceguids, v15);
            }
          }
        }
        else
        {
          a4[v15] = 1;
        }
        v14 += 8;
        --v11;
      }
      while ( v11 );
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_e288614d163b3ceea713389723084ed3_Traceguids, *a1);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_e288614d163b3ceea713389723084ed3_Traceguids);
      }
    }
    for ( i = v11; i < 0xFFu; ++i )
    {
      if ( *a4 != (_BYTE)v11
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_e288614d163b3ceea713389723084ed3_Traceguids, i);
      }
      ++a4;
    }
    return 0LL;
  }
  if ( v8 == -1073741789 )
  {
    result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
    if ( (_DWORD)result == v9 )
    {
      v17 = 8 * *(unsigned __int8 *)(*a1 + 490LL) + 8;
      result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
    }
    LOWORD(v11) = 0;
    if ( (int)result >= 0 )
      goto LABEL_8;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        16LL,
        &WPP_e288614d163b3ceea713389723084ed3_Traceguids,
        (unsigned int)v8);
    }
    return v9;
  }
  return result;
}
