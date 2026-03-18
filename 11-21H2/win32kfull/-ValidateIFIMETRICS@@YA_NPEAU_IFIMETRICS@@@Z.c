/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0018D74
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00DD940 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _lambda_6205c396a1390c774bd95fcbb0cc7414_::operator() @ 0x1C0018D44 (_lambda_6205c396a1390c774bd95fcbb0cc7414_--operator().c)
 *     _lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator() @ 0x1C0018F64 (_lambda_3eb24279fbdd178c4d8527d8e8f1e39f_--operator().c)
 *     _lambda_070e29bc377876d11c9c205fcaeb93d1_::operator() @ 0x1C001C064 (_lambda_070e29bc377876d11c9c205fcaeb93d1_--operator().c)
 */

char __fastcall ValidateIFIMETRICS(struct _IFIMETRICS *a1)
{
  __int64 dpwszFamilyName; // rdx
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r10
  _DWORD *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // r11d
  struct _IFIMETRICS *v25; // [rsp+30h] [rbp+10h] BYREF
  struct _IFIMETRICS **v26; // [rsp+38h] [rbp+18h] BYREF
  struct _IFIMETRICS **v27; // [rsp+40h] [rbp+20h] BYREF

  v25 = a1;
  dpwszFamilyName = (unsigned int)a1->dpwszFamilyName;
  v26 = &v25;
  if ( !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v26, dpwszFamilyName)
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v26, *(unsigned int *)(v2 + 12))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v26, *(unsigned int *)(v3 + 16))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v26, *(unsigned int *)(v4 + 20)) )
  {
    return 0;
  }
  v6 = v5[1];
  v26 = &v25;
  if ( v6 )
  {
    if ( v6 < 8 )
      return 0;
    v7 = (unsigned int)v5[49];
    if ( (_DWORD)v7 )
    {
      if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v26, v7, 24LL) )
        return 0;
    }
    v8 = 0;
    if ( v6 >= 0x10 )
    {
      v9 = (int)v5[51];
      if ( (_DWORD)v9 )
      {
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v26, v9, 8LL) )
          return 0;
        v12 = *(_DWORD *)(v10 + v11 + 4);
        if ( v12 > 0x10 )
          return 0;
        v13 = *(_DWORD *)(v10 + v11) == 134248052 ? 140LL : 4 * v12 + 8;
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v26, v10, v13) )
          return 0;
      }
    }
    if ( v6 >= 0x14 )
    {
      v22 = (int)v5[52];
      if ( (_DWORD)v22 )
      {
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(
                                 &v26,
                                 v22,
                                 (unsigned int)(40 * v8 + 8))
          || *(_DWORD *)((char *)v5 + v23 + 4) != v24 )
        {
          return 0;
        }
      }
    }
  }
  if ( ((v14 = (int)v5[6], !(_DWORD)v14)
     || (unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v26, v14, 12LL)
     && ((v16 = v15, v17 = *(_DWORD *)((char *)v5 + v15), v27 = &v25, !v17)
      || lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v27, v17))
     && ((v18 = *(_DWORD *)((char *)v5 + v16 + 4)) == 0
      || lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v27, v18))
     && ((v19 = *(_DWORD *)((char *)v5 + v16 + 8)) == 0
      || lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v27, v19)))
    && ((v20 = (unsigned int)v5[10], !(_DWORD)v20)
     || (unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v26, v20, 16LL)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
