/*
 * XREFs of ParseToken @ 0x1C007FEE0
 * Callers:
 *     ParseList @ 0x1C007F6F8 (ParseList.c)
 *     ParseMethod @ 0x1C007F770 (ParseMethod.c)
 *     ParseNamedData @ 0x1C007F8A4 (ParseNamedData.c)
 *     ParseTcgEndSession @ 0x1C007F9AC (ParseTcgEndSession.c)
 *     ParseTcgPayloadStatus @ 0x1C007FBC0 (ParseTcgPayloadStatus.c)
 *     ParseTcgReceivedPayload @ 0x1C007FD54 (ParseTcgReceivedPayload.c)
 *     ParseTcgTransactionStatus @ 0x1C007FDEC (ParseTcgTransactionStatus.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     GetNextFreeToken @ 0x1C007F3D4 (GetNextFreeToken.c)
 *     ParseList @ 0x1C007F6F8 (ParseList.c)
 *     ParseMethod @ 0x1C007F770 (ParseMethod.c)
 *     ParseNamedData @ 0x1C007F8A4 (ParseNamedData.c)
 *     ParseTokenData @ 0x1C0080148 (ParseTokenData.c)
 *     PeekTokenInfo @ 0x1C0080228 (PeekTokenInfo.c)
 */

__int64 __fastcall ParseToken(__int64 a1, __int64 *a2)
{
  _DWORD *v2; // rsi
  int v5; // eax
  unsigned __int8 v6; // bp
  unsigned int v7; // ecx
  int v8; // r15d
  int v9; // ebx
  __int64 NextFreeToken; // rax
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r9
  PDEVICE_OBJECT v24; // rcx
  unsigned __int16 v25; // dx
  unsigned __int8 v27; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v28; // [rsp+68h] [rbp+20h] BYREF

  v28 = 0;
  v2 = (_DWORD *)(a1 + 12);
  v27 = 0;
  while ( 1 )
  {
    v5 = PeekTokenInfo(a1, &v27, &v28);
    v6 = v27;
    v7 = v5;
    v8 = v5;
    if ( v5 )
      break;
    if ( v27 != 0xFF )
      goto LABEL_6;
    v2 = (_DWORD *)(a1 + 12);
    ++*(_DWORD *)(a1 + 12);
  }
  v2 = (_DWORD *)(a1 + 12);
  if ( v5 < 0 )
    return v7;
LABEL_6:
  v9 = v28;
  if ( v28 <= 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Cu,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
        v27);
    return (unsigned int)-1073741435;
  }
  ++*v2;
  NextFreeToken = GetNextFreeToken(a1);
  *a2 = NextFreeToken;
  if ( !NextFreeToken )
    return (unsigned int)-1073741670;
  *(_DWORD *)(NextFreeToken + 8) = v9;
  if ( v9 > 11 )
  {
    v7 = v8;
    v17 = v9 - 12;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_29;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_29;
      v20 = v19 - 1;
      if ( !v20 )
      {
LABEL_18:
        *(_DWORD *)(*a2 + 12) = v6 & 0xF;
        return (unsigned int)ParseTokenData(a1, *a2);
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          return v7;
LABEL_29:
        v22 = (unsigned int)*v2;
        v23 = (unsigned int)(v22 + 2);
        if ( (unsigned int)v23 < *(_DWORD *)(a1 + 8) )
        {
          *(_DWORD *)(*a2 + 12) = *(unsigned __int8 *)(v23 + *(_QWORD *)a1) | ((*(unsigned __int8 *)((unsigned int)(v22 + 1) + *(_QWORD *)a1) | (*(unsigned __int8 *)(v22 + *(_QWORD *)a1) << 8)) << 8);
          *v2 += 3;
          return (unsigned int)ParseTokenData(a1, *a2);
        }
        v24 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v25 = 30;
LABEL_34:
          WPP_SF_((__int64)v24->AttachedDevice, v25, (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids);
        }
        return (unsigned int)-1073741435;
      }
    }
LABEL_35:
    if ( *v2 < *(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)(*a2 + 12) = ((v6 & 7) << 8) + *(unsigned __int8 *)((unsigned int)(*v2)++ + *(_QWORD *)a1);
      return (unsigned int)ParseTokenData(a1, *a2);
    }
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v25 = 29;
      goto LABEL_34;
    }
    return (unsigned int)-1073741435;
  }
  if ( v9 == 11 )
    goto LABEL_35;
  v7 = v8;
  v11 = v9 - 4;
  if ( !v11 )
    return (unsigned int)ParseMethod(a1, *a2);
  v12 = v11 - 1;
  if ( !v12 )
    return (unsigned int)ParseList(a1, *a2);
  v13 = v12 - 1;
  if ( !v13 )
    return (unsigned int)ParseNamedData(a1, *a2);
  v14 = v13 - 1;
  if ( !v14 || (v15 = v14 - 1) == 0 )
  {
    *(_DWORD *)(*a2 + 12) = 1;
    *(_BYTE *)(*a2 + 16) = v6 & 0x3F;
    return v7;
  }
  if ( (unsigned int)(v15 - 1) <= 1 )
    goto LABEL_18;
  return v7;
}
