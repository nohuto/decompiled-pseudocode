/*
 * XREFs of RtlCompareMemory @ 0x14042A1E0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x140202D70 (RtlNormalizeSecurityDescriptor.c)
 *     sub_140224F04 @ 0x140224F04 (sub_140224F04.c)
 *     sub_14023BDE8 @ 0x14023BDE8 (sub_14023BDE8.c)
 *     sub_14023E074 @ 0x14023E074 (sub_14023E074.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_14051C090 @ 0x14051C090 (sub_14051C090.c)
 *     sub_14051CD90 @ 0x14051CD90 (sub_14051CD90.c)
 *     sub_14055EF20 @ 0x14055EF20 (sub_14055EF20.c)
 *     sub_1405E4EC4 @ 0x1405E4EC4 (sub_1405E4EC4.c)
 *     sub_1405F3028 @ 0x1405F3028 (sub_1405F3028.c)
 *     sub_140633B20 @ 0x140633B20 (sub_140633B20.c)
 *     sub_1406342C8 @ 0x1406342C8 (sub_1406342C8.c)
 *     sub_1406605B8 @ 0x1406605B8 (sub_1406605B8.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1406DA120 @ 0x1406DA120 (sub_1406DA120.c)
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_140721FFC @ 0x140721FFC (sub_140721FFC.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_140747C74 @ 0x140747C74 (sub_140747C74.c)
 *     sub_140751840 @ 0x140751840 (sub_140751840.c)
 *     sub_140758ED8 @ 0x140758ED8 (sub_140758ED8.c)
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 *     sub_140772190 @ 0x140772190 (sub_140772190.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     sub_14078EC8C @ 0x14078EC8C (sub_14078EC8C.c)
 *     sub_14078ECD8 @ 0x14078ECD8 (sub_14078ECD8.c)
 *     sub_1407900EC @ 0x1407900EC (sub_1407900EC.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_1407A96A0 @ 0x1407A96A0 (sub_1407A96A0.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     sub_14081C1B0 @ 0x14081C1B0 (sub_14081C1B0.c)
 *     sub_1408384CC @ 0x1408384CC (sub_1408384CC.c)
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 *     sub_140883C5A @ 0x140883C5A (sub_140883C5A.c)
 *     sub_1409196EC @ 0x1409196EC (sub_1409196EC.c)
 *     sub_140941CFC @ 0x140941CFC (sub_140941CFC.c)
 *     sub_14094488C @ 0x14094488C (sub_14094488C.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 *     sub_14095CDBC @ 0x14095CDBC (sub_14095CDBC.c)
 *     sub_140972C84 @ 0x140972C84 (sub_140972C84.c)
 *     sub_140985DE4 @ 0x140985DE4 (sub_140985DE4.c)
 *     sub_14099788C @ 0x14099788C (sub_14099788C.c)
 *     sub_1409B7678 @ 0x1409B7678 (sub_1409B7678.c)
 *     sub_1409C4F84 @ 0x1409C4F84 (sub_1409C4F84.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 *     sub_1409CE5B0 @ 0x1409CE5B0 (sub_1409CE5B0.c)
 *     sub_1409DCAD0 @ 0x1409DCAD0 (sub_1409DCAD0.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A031C4 @ 0x140A031C4 (sub_140A031C4.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 *     sub_140A31CD8 @ 0x140A31CD8 (sub_140A31CD8.c)
 *     sub_140A31D80 @ 0x140A31D80 (sub_140A31D80.c)
 *     sub_140A31EE0 @ 0x140A31EE0 (sub_140A31EE0.c)
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 *     sub_140A81CF4 @ 0x140A81CF4 (sub_140A81CF4.c)
 *     sub_140A83264 @ 0x140A83264 (sub_140A83264.c)
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 *     sub_140A87C8C @ 0x140A87C8C (sub_140A87C8C.c)
 *     sub_140AF8CB4 @ 0x140AF8CB4 (sub_140AF8CB4.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
