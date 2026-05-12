/*
 * XREFs of ParseTPerProperties @ 0x1C007E6C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00220E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     GetTokenData @ 0x1C007F440 (GetTokenData.c)
 */

__int64 __fastcall ParseTPerProperties(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v6; // r13
  int v7; // r9d
  char v8; // r8
  int v9; // r9d
  __int64 *v10; // r12
  unsigned int v11; // eax
  __int64 *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdi
  const void *TokenData; // rax
  size_t v16; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // r8d
  int v20; // r9d
  int v21; // r9d
  PDEVICE_OBJECT v22; // rcx
  unsigned __int16 v23; // dx
  __int64 v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-50h]
  int v27; // [rsp+30h] [rbp-40h]
  unsigned int v28; // [rsp+34h] [rbp-3Ch]
  char Str1[40]; // [rsp+40h] [rbp-30h] BYREF

  v28 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        MEMORY[8],
        MEMORY[0xC]);
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v26 = MEMORY[0xC];
    goto LABEL_77;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        v7,
        *(_DWORD *)(v6 + 12));
    v8 = 2;
    v9 = *(_DWORD *)(v6 + 8);
    v26 = *(unsigned int *)(v6 + 12);
LABEL_77:
    v28 = -1073741435;
    TcglibEalLogError(*(int **)a1, "ErrInvalidTPerProp", v8, v9, v26, 0LL);
    return v28;
  }
  v27 = 0;
  v10 = *(__int64 **)(v6 + 16);
  if ( *(_DWORD *)(v6 + 12) )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( !v10 )
        return v28;
      if ( *((_DWORD *)v10 + 2) == 6 && *((_DWORD *)v10 + 3) == 2 )
      {
        v12 = (__int64 *)v10[2];
        if ( v12 )
          break;
      }
LABEL_70:
      v10 = (__int64 *)*v10;
      v27 = ++v11;
      if ( v11 >= *(_DWORD *)(v6 + 12) )
        return v28;
    }
    v13 = *((_DWORD *)v12 + 3);
    v14 = *v12;
    if ( v13 <= 0x20 && *(_DWORD *)(v14 + 12) <= 4u )
    {
      TokenData = (const void *)GetTokenData(v10[2], a2, v13);
      memmove(Str1, TokenData, v16);
      v17 = *((unsigned int *)v12 + 3);
      if ( v17 >= 0x21 )
        _report_rangecheckfailure();
      Str1[v17] = 0;
      if ( !_stricmp(Str1, "MaxComPacketSize") )
      {
        v18 = *(_DWORD *)(v14 + 16);
        a2 = 0x10000LL;
        *a4 = v18;
        v19 = 0x10000;
        if ( v18 < 0x10000 )
          v19 = v18;
        *(_DWORD *)(a1 + 44) = v19;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(v25) = v19;
          WPP_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x10u,
            (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
            *a4,
            v25);
        }
        goto LABEL_69;
      }
      if ( !_stricmp(Str1, "MaxResponseComPacketSize") )
      {
        v20 = *(_DWORD *)(v14 + 16);
        a4[1] = v20;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x11u,
            (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
            v20);
        if ( *a4
          && a4[1] > (unsigned int)*a4
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x12u,
            (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids);
        }
        goto LABEL_69;
      }
      if ( !_stricmp(Str1, "MaxPacketSize") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[2] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 19;
      }
      else if ( !_stricmp(Str1, "MaxIndTokenSize") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[3] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 20;
      }
      else if ( !_stricmp(Str1, "MaxPackets") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[4] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 21;
      }
      else if ( !_stricmp(Str1, "MaxSubpackets") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[5] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 22;
      }
      else if ( !_stricmp(Str1, "MaxMethods") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[6] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 23;
      }
      else if ( !_stricmp(Str1, "MaxSessions") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[7] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 24;
      }
      else if ( !_stricmp(Str1, "MaxAuthentications") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[8] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 25;
      }
      else if ( !_stricmp(Str1, "MaxTransactionLimit") )
      {
        v21 = *(_DWORD *)(v14 + 16);
        a4[9] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 26;
      }
      else
      {
        if ( _stricmp(Str1, "DefSessionTimeout") )
          goto LABEL_69;
        v21 = *(_DWORD *)(v14 + 16);
        a4[10] = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          goto LABEL_69;
        v23 = 27;
      }
      WPP_SF_d((__int64)v22->AttachedDevice, v23, (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids, v21);
    }
LABEL_69:
    v11 = v27;
    goto LABEL_70;
  }
  return v28;
}
