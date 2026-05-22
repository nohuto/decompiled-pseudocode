/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800F586C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F5AA0 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800F5800 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F6994 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(struct HidLampMultiUpdateReportParser *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // r15
  __int64 *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rdx
  char v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // dl
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  char IsChannelsValid; // [rsp+90h] [rbp+8h]
  char v28; // [rsp+98h] [rbp+10h]
  char v29; // [rsp+A0h] [rbp+18h]
  char v30; // [rsp+A8h] [rbp+20h]

  v2 = (__int64 *)((char *)a1 + 200);
  v4 = (__int64 *)((char *)a1 + 296);
  v5 = (__int64 *)((char *)a1 + 232);
  v6 = (__int64 *)((char *)a1 + 264);
  v7 = (_QWORD *)((char *)a1 + 168);
  v8 = *((_QWORD *)a1 + 30) - *((_QWORD *)a1 + 29);
  v9 = *((_QWORD *)a1 + 34) - *((_QWORD *)a1 + 33);
  v24 = *((_QWORD *)a1 + 26) - *((_QWORD *)a1 + 25);
  v26 = *((_QWORD *)a1 + 38);
  v25 = *((_QWORD *)a1 + 37);
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (__int64 *)a1 + 21,
                      a2,
                      0x7FFFFFFFLL,
                      (_DWORD *)a1 + 48);
  v28 = HidLampMultiUpdateReportParser::IsChannelsValid(v2, v10, 255LL, (_DWORD *)a1 + 56);
  v29 = HidLampMultiUpdateReportParser::IsChannelsValid(v5, v11, v12, (_DWORD *)a1 + 64);
  v30 = HidLampMultiUpdateReportParser::IsChannelsValid(v6, v13, v14, (_DWORD *)a1 + 72);
  v17 = HidLampMultiUpdateReportParser::IsChannelsValid(v4, v15, v16, (_DWORD *)a1 + 80);
  v19 = 0;
  if ( !v24 && !v8 && !v9 )
    return 0;
  if ( !IsChannelsValid )
    return 0;
  v20 = *((unsigned int *)a1 + 14);
  if ( 0x8E38E38E38E38E39uLL * ((__int64)(v7[1] - *v7) >> 3) != v20 )
    return 0;
  LOBYTE(v18) = 1;
  if ( v24 )
  {
    if ( !v28 || 0x8E38E38E38E38E39uLL * ((v2[1] - *v2) >> 3) != v20 )
      return 0;
    *((_BYTE *)a1 + 324) = 1;
  }
  if ( v8 )
  {
    if ( !v29 || 0x8E38E38E38E38E39uLL * ((v5[1] - *v5) >> 3) != v20 )
      return 0;
    *((_BYTE *)a1 + 325) = 1;
  }
  if ( v9 )
  {
    if ( !v30 || 0x8E38E38E38E38E39uLL * ((v6[1] - *v6) >> 3) != v20 )
      return 0;
    *((_BYTE *)a1 + 326) = 1;
  }
  if ( v26 == v25 )
    goto LABEL_22;
  if ( !v17 || 0x8E38E38E38E38E39uLL * ((v4[1] - *v4) >> 3) != v20 )
    return 0;
  *((_BYTE *)a1 + 327) = 1;
LABEL_22:
  if ( *((_BYTE *)a1 + 17) != 2
    || !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a1 + 24), v18, 0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a1 + 96), v21, 0xFFFFFFFFLL) )
  {
    return v19;
  }
  return v22;
}
