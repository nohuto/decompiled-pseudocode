/*
 * XREFs of ParseBandMetadata @ 0x1C007AE90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     GetTokenData @ 0x1C007F440 (GetTokenData.c)
 */

__int64 __fastcall ParseBandMetadata(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v8; // r9d
  size_t v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // rdx
  const void *TokenData; // rax
  size_t v13; // r8
  char v14; // r8
  __int64 v16; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a3;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12));
    v14 = 1;
    v16 = *(unsigned int *)(v6 + 12);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v8 = *(_DWORD *)(v6 + 8);
  if ( (unsigned int)(v8 - 15) > 2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        v8);
    v14 = 2;
    v16 = 0LL;
LABEL_17:
    v5 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidBandMetadata", v14, *(_DWORD *)(v6 + 8), v16, 0LL);
    return v5;
  }
  v9 = *(unsigned int *)(a4 + 24);
  v10 = *(_DWORD *)(v6 + 12);
  if ( v10 <= (unsigned int)v9 )
  {
    memset_0(*(void **)(a4 + 16), 0, v9);
    TokenData = (const void *)GetTokenData(v6, v11, *(unsigned int *)(v6 + 12));
    memmove(*(void **)(a4 + 16), TokenData, v13);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(v6 + 12);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        v10,
        *(_DWORD *)(a4 + 24));
    v5 = -1073741789;
    TcglibEalLogError(*a1, "ErrInvalidBandMetadata", 3, *(_DWORD *)(v6 + 12), *(unsigned int *)(a4 + 24), 0LL);
  }
  return v5;
}
