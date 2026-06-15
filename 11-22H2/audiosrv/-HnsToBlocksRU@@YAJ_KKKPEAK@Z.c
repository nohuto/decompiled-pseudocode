/*
 * XREFs of ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180004438
 * Callers:
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800042B4 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HnsToBlocksRU(unsigned __int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rtt
  unsigned __int64 v8; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  v4 = a1 * (unsigned __int128)a2;
  *a4 = -1;
  if ( is_mul_ok(a1, v5) )
  {
    if ( !(_QWORD)v4 )
    {
      LODWORD(v8) = 0;
      goto LABEL_5;
    }
    *(_QWORD *)&v7 = v4 - 1;
    *((_QWORD *)&v7 + 1) = *((_QWORD *)&v4 + 1);
    v6 = v7 / (unsigned int)(10000000 * a3);
    v8 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v10 = 53LL;
    }
    else
    {
      if ( v8 <= 0xFFFFFFFF )
      {
LABEL_5:
        *a4 = v8;
        return 0LL;
      }
      *a4 = -1;
      v10 = 55LL;
    }
  }
  else
  {
    v10 = 45LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
    (const char *)0x80070216LL,
    v11);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
    (const char *)0x80070216LL,
    v12);
  return 2147942934LL;
}
