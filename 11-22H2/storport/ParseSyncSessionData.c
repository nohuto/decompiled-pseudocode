/*
 * XREFs of ParseSyncSessionData @ 0x1C007E590
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     GetTokenData @ 0x1C007F440 (GetTokenData.c)
 */

__int64 __fastcall ParseSyncSessionData(int **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r9d
  char v8; // r8
  int v9; // r9d
  __int64 v10; // rcx
  const void *TokenData; // rax
  size_t v12; // r8
  void *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) < 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v16 = MEMORY[0xC];
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        MEMORY[8],
        v16);
    }
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v15 = MEMORY[0xC];
    goto LABEL_13;
  }
  v5 = *(__int64 **)(a3 + 16);
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  if ( v7 > 4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_499fc9d3f6333dd1f161b3ce0c40acfa_Traceguids,
        v7);
    v8 = 2;
    v15 = 0LL;
    v9 = *(_DWORD *)(v6 + 12);
LABEL_13:
    v3 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidSyncData", v8, v9, v15, 0LL);
    return v3;
  }
  v10 = *v5;
  *(_DWORD *)(a2 + 8) = 0;
  TokenData = (const void *)GetTokenData(v10, a2, *(unsigned int *)(v6 + 12));
  memmove(v13, TokenData, v12);
  return v3;
}
