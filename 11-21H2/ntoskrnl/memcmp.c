/*
 * XREFs of memcmp @ 0x1403E1D90
 * Callers:
 *     sub_140205030 @ 0x140205030 (sub_140205030.c)
 *     FsRtlAreNamesEqual @ 0x140212760 (FsRtlAreNamesEqual.c)
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140213C5C @ 0x140213C5C (sub_140213C5C.c)
 *     sub_140219EC0 @ 0x140219EC0 (sub_140219EC0.c)
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 *     sub_140253C50 @ 0x140253C50 (sub_140253C50.c)
 *     sub_1402A1F74 @ 0x1402A1F74 (sub_1402A1F74.c)
 *     sub_1402A47B0 @ 0x1402A47B0 (sub_1402A47B0.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402D6A64 @ 0x1402D6A64 (sub_1402D6A64.c)
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     RtlSidHashLookup @ 0x1402FD710 (RtlSidHashLookup.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 *     sub_1403D24A0 @ 0x1403D24A0 (sub_1403D24A0.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     sub_140558320 @ 0x140558320 (sub_140558320.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140599E60 @ 0x140599E60 (sub_140599E60.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1405E7BE0 @ 0x1405E7BE0 (sub_1405E7BE0.c)
 *     sub_14064AD1C @ 0x14064AD1C (sub_14064AD1C.c)
 *     sub_14067474C @ 0x14067474C (sub_14067474C.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     sub_1406A28A8 @ 0x1406A28A8 (sub_1406A28A8.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     sub_1406B074C @ 0x1406B074C (sub_1406B074C.c)
 *     sub_1406B4704 @ 0x1406B4704 (sub_1406B4704.c)
 *     sub_1406D75C0 @ 0x1406D75C0 (sub_1406D75C0.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140719180 @ 0x140719180 (sub_140719180.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     sub_140725080 @ 0x140725080 (sub_140725080.c)
 *     sub_14076C3C0 @ 0x14076C3C0 (sub_14076C3C0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_0 @ 0x1407731E8 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_1407731E8.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_1407915C4 @ 0x1407915C4 (sub_1407915C4.c)
 *     sub_1407A53A0 @ 0x1407A53A0 (sub_1407A53A0.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1407D79B4 @ 0x1407D79B4 (sub_1407D79B4.c)
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 *     sub_1407DD6F0 @ 0x1407DD6F0 (sub_1407DD6F0.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_14082D870 @ 0x14082D870 (sub_14082D870.c)
 *     sub_140836228 @ 0x140836228 (sub_140836228.c)
 *     sub_1408365F8 @ 0x1408365F8 (sub_1408365F8.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 *     sub_140883930 @ 0x140883930 (sub_140883930.c)
 *     FsRtlIsDbcsInExpression @ 0x14092F040 (FsRtlIsDbcsInExpression.c)
 *     sub_14094B7C0 @ 0x14094B7C0 (sub_14094B7C0.c)
 *     sub_14095353C @ 0x14095353C (sub_14095353C.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     sub_14096BC08 @ 0x14096BC08 (sub_14096BC08.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 *     sub_1409CE110 @ 0x1409CE110 (sub_1409CE110.c)
 *     sub_1409CE294 @ 0x1409CE294 (sub_1409CE294.c)
 *     sub_1409EDE68 @ 0x1409EDE68 (sub_1409EDE68.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A111BC @ 0x140A111BC (sub_140A111BC.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 *     sub_140A31E68 @ 0x140A31E68 (sub_140A31E68.c)
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 *     sub_140A32934 @ 0x140A32934 (sub_140A32934.c)
 *     sub_140A32B30 @ 0x140A32B30 (sub_140A32B30.c)
 *     sub_140A32F88 @ 0x140A32F88 (sub_140A32F88.c)
 *     sub_140A8C740 @ 0x140A8C740 (sub_140A8C740.c)
 *     sub_140AA1D34 @ 0x140AA1D34 (sub_140AA1D34.c)
 *     sub_140AFA7A8 @ 0x140AFA7A8 (sub_140AFA7A8.c)
 *     sub_140B10490 @ 0x140B10490 (sub_140B10490.c)
 *     sub_140B18084 @ 0x140B18084 (sub_140B18084.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
