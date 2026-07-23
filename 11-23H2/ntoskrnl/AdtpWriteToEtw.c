/*
 * XREFs of AdtpWriteToEtw @ 0x14083D050
 * Callers:
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140399764 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403997E4 (AdtpPackageParameters.c)
 *     AdtpCleanupParameterAllocations @ 0x140399D2C (AdtpCleanupParameterAllocations.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403A4154 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x14041A6A0 (Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14083D3DC (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r15
  __int64 v7; // rcx
  __int16 v8; // di
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  char v18; // cl
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int16 v39; // cx
  char *v40; // rax
  __int64 v41; // rdx
  unsigned __int16 v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+50h] [rbp-B0h]
  _BYTE v47[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v48; // [rsp+1A0h] [rbp+A0h] BYREF
  char v49; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v50[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v51[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v43[0] = 0;
  v46 = 0LL;
  memset(v51, 0, sizeof(v51));
  memset(v47, 0, sizeof(v47));
  *a2 = 0;
  memset(v50, 0, sizeof(v50));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_71:
    v39 = v43[0];
    goto LABEL_72;
  }
  v6 = *(_WORD *)(a1 + 18);
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v51, (__int64)v47, (__int64)&v48, v43, (__int64)v50);
  if ( v5 < 0 )
    goto LABEL_71;
  if ( *(_WORD *)(a1 + 16)
    && (v7 = *(unsigned __int16 *)(a1 + 16), v44 = 0, v45 = 0, (int)AdtpGetCategoryAndSubCategoryId(v7, &v44, &v45) >= 0) )
  {
    v8 = v45 + (((_WORD)v44 + 48) << 8);
  }
  else
  {
    v8 = -256;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 <= 0x13C2 )
  {
    if ( v9 == 5058 )
      goto LABEL_22;
    if ( v9 <= 0x125D )
    {
      if ( v9 == 4701 )
        goto LABEL_22;
      if ( v9 <= 0x1237 )
      {
        if ( v9 == 4663 )
          goto LABEL_22;
        v10 = v9 - 4616;
        if ( !v10 )
          goto LABEL_22;
        v11 = v10 - 8;
        if ( v11 )
        {
          v12 = v11 - 30;
          if ( !v12 )
            goto LABEL_22;
          v13 = v12 - 2;
          if ( !v13 )
            goto LABEL_22;
          v14 = v13 == 5;
          goto LABEL_59;
        }
LABEL_45:
        v18 = 3;
        goto LABEL_62;
      }
      v15 = v9 - 4688;
      if ( v15 )
      {
        v16 = v15 - 9;
        if ( !v16 )
          goto LABEL_22;
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_22;
        goto LABEL_56;
      }
      goto LABEL_61;
    }
    if ( v9 <= 0x1342 )
    {
      if ( v9 == 4930 )
        goto LABEL_22;
      v19 = v9 - 4702;
      if ( !v19 )
        goto LABEL_22;
      v20 = v19 - 17;
      if ( !v20 )
        goto LABEL_22;
      v21 = v20 - 97;
      if ( !v21 )
        goto LABEL_22;
      v23 = v21 - 112;
      v22 = v23 == 0;
      goto LABEL_57;
    }
    v24 = v9 - 4931;
    if ( !v24 )
      goto LABEL_22;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_22;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_22;
    v14 = v26 == 4;
LABEL_59:
    if ( !v14 )
    {
      v18 = 0;
      goto LABEL_62;
    }
LABEL_22:
    v18 = 1;
    goto LABEL_62;
  }
  if ( v9 <= 0x1425 )
  {
    if ( v9 == 5157 )
      goto LABEL_45;
    if ( v9 <= 0x141E )
    {
      if ( v9 == 5150 )
        goto LABEL_22;
      v27 = v9 - 5059;
      if ( !v27 )
        goto LABEL_22;
      v28 = v27 - 66;
      if ( !v28 )
        goto LABEL_22;
      v29 = v28 - 15;
      if ( !v29 )
        goto LABEL_22;
      v23 = v29 - 6;
      v22 = v23 == 0;
      goto LABEL_57;
    }
    v30 = v9 - 5151;
    if ( !v30 )
      goto LABEL_22;
    v31 = v30 - 1;
    if ( !v31 )
      goto LABEL_22;
    v32 = v31 - 1;
    if ( !v32 )
      goto LABEL_22;
    v14 = v32 == 3;
    goto LABEL_59;
  }
  if ( v9 <= 0x1650 )
  {
    if ( v9 == 5712 )
    {
      v18 = (unsigned int)Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage() != 0;
      goto LABEL_62;
    }
    v33 = v9 - 5376;
    if ( !v33 )
      goto LABEL_22;
    v34 = v33 - 1;
    if ( !v34 )
      goto LABEL_22;
    v35 = v34 - 74;
    if ( !v35 )
      goto LABEL_22;
    v36 = v35 - 1;
    if ( !v36 )
      goto LABEL_22;
    v14 = v36 == 180;
    goto LABEL_59;
  }
  v37 = v9 - 6272;
  if ( v37 )
  {
    v17 = v37 - 1;
    if ( v17 )
    {
LABEL_56:
      v23 = v17 - 1;
      v22 = v23 == 0;
LABEL_57:
      if ( v22 )
        goto LABEL_22;
      v14 = v23 == 1;
      goto LABEL_59;
    }
  }
LABEL_61:
  v18 = 2;
LABEL_62:
  LOWORD(v46) = *(_WORD *)(a1 + 4);
  v38 = 0x8020000000000000uLL;
  BYTE2(v46) = v18;
  if ( v6 != 8 )
    v38 = 0x8010000000000000uLL;
  *(_WORD *)((char *)&v46 + 3) = 10;
  v39 = v43[0];
  WORD3(v46) = v8;
  BYTE5(v46) = 0;
  *((_QWORD *)&v46 + 1) = v38;
  if ( !v43[0] )
    goto LABEL_69;
  v40 = &v49;
  v41 = v43[0];
  do
  {
    v4 += *(_DWORD *)v40;
    v40 += 16;
    --v41;
  }
  while ( v41 );
  if ( v4 <= 0xDC00 )
  {
LABEL_69:
    v5 = EtwWriteKMSecurityEvent();
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_71;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_72:
  AdtpCleanupParameterAllocations(v50, &v48, v39);
  return (unsigned int)v5;
}
