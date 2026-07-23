/*
 * XREFs of sub_14085E510 @ 0x14085E510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     sub_14050F078 @ 0x14050F078 (sub_14050F078.c)
 */

int __fastcall sub_14085E510(_BYTE *a1)
{
  bool v2; // di
  int v3; // eax
  _DWORD *v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64, __int64, unsigned int, volatile signed __int32 *); // rax
  char v6; // cl
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // cl
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]

  v28 = 0LL;
  v2 = 0;
  InputBuffer = 0LL;
  word_140C4A7A0 = 1;
  v3 = sub_14036FA84();
  *v4 = v3;
  if ( a1[9] && !byte_140C4C204 )
    v2 = sub_1403B3A6C() == 0;
  v5 = sub_140390D20;
  if ( *a1 )
  {
    v19 = a1[2] & 0xF;
    *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
    v20 = a1[1] & 0xF;
    BYTE4(InputBuffer) = 1;
    v28 = v20 | (16 * (v19 | 0x510));
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( byte_140C4C449 )
    {
      LOBYTE(v21) = a1[1];
      sub_14050F078(1LL, v21);
    }
    v5 = sub_140390D20;
  }
  if ( !qword_140C4BFE8 )
    goto LABEL_22;
  if ( a1[3] )
  {
    v22 = a1[4];
    *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
    v23 = a1[5] & 0xF;
    LODWORD(InputBuffer) = 1;
    BYTE4(InputBuffer) = 1;
    v24 = v22 & 0xF | (16 * (v23 | 0x520));
    if ( !byte_140C4C449 )
      v24 |= 0x12000u;
    v28 = v24;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( byte_140C4C449 )
    {
      LOBYTE(v25) = a1[4];
      LODWORD(v5) = sub_14050F078(2LL, v25);
    }
  }
  if ( !a1[6] )
    goto LABEL_22;
  v6 = a1[7];
  *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
  v7 = a1[8] & 0xF;
  LODWORD(InputBuffer) = 2;
  BYTE4(InputBuffer) = 1;
  v8 = v6 & 0xF | (16 * (v7 | 0x530));
  if ( !byte_140C4C449 )
    v8 |= 0x32000u;
  v28 = v8;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( byte_140C4C449 )
  {
    LOBYTE(v9) = a1[7];
    LODWORD(v5) = sub_14050F078(3LL, v9);
  }
  if ( a1[6] )
  {
    if ( !v2 )
      goto LABEL_18;
    v10 = a1[8] & 0xF | 0x3740LL;
    BYTE4(InputBuffer) = (unsigned __int8)dword_140C4C090 >> 7;
    v11 = a1[7] & 0xF | (unsigned __int64)(16 * v10);
    LODWORD(InputBuffer) = 6;
    v28 = v11;
    *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  }
  else
  {
LABEL_22:
    if ( !v2 )
      goto LABEL_18;
  }
  v12 = a1[10] & 0xF;
  BYTE4(InputBuffer) = (unsigned __int8)dword_140C4C090 >> 7;
  v13 = a1[11] & 0xF;
  LODWORD(InputBuffer) = 3;
  *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
  v14 = v12 | (16 * (v13 | 0x540));
  if ( !byte_140C4C449 )
    v14 |= 0x10000u;
  v28 = v14;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
LABEL_18:
  if ( !a1[12] )
  {
    if ( !byte_140C4BFC8 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (dword_140C0C60C & 1) == 0 )
  {
LABEL_33:
    dword_140C4D0E4 = 0;
    v28 = 0LL;
    *(_QWORD *)&InputBuffer = 4LL;
    *((_QWORD *)&InputBuffer + 1) = sub_14050A920;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    goto LABEL_34;
  }
  v15 = a1[13] & 0xF;
  v16 = a1[14] & 0xF;
  LODWORD(InputBuffer) = 4;
  BYTE4(InputBuffer) = 0;
  v17 = v15 | (16 * (v16 | 0x850));
  *((_QWORD *)&InputBuffer + 1) = sub_140390D20;
  v28 = v17;
  dword_140C4D0E4 = v17;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( !byte_140C4C449 )
    return (int)v5;
  LOBYTE(v18) = a1[13];
  LODWORD(v5) = sub_14050F078(5LL, v18);
LABEL_34:
  if ( byte_140C4C449 )
    LODWORD(v5) = sub_14050F078(6LL, 0LL);
  return (int)v5;
}
