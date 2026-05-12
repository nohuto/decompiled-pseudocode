/*
 * XREFs of ParseAssignNamespace @ 0x1C007AD40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     GetTokenData @ 0x1C007F440 (GetTokenData.c)
 */

__int64 __fastcall ParseAssignNamespace(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v8; // rcx
  const void *TokenData; // rax
  size_t v10; // r8
  const char *v11; // rdx
  char v12; // r8
  __int64 v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a3;
  if ( *(_QWORD *)(a3 + 8) != 0x200000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v15 = *(_DWORD *)(a3 + 12);
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        v15);
    }
    v11 = "ErrInvalidAssignNamespaceResult";
    v12 = 1;
    v14 = *(unsigned int *)(v6 + 12);
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(v6 + 8) != 0x80000000FLL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(v6 + 8));
    v11 = "ErrInvalidBandMetadata";
    v14 = 0LL;
    v12 = 2;
LABEL_12:
    v5 = -1073741435;
    TcglibEalLogError(*a1, v11, v12, *(_DWORD *)(v6 + 8), v14, 0LL);
    return v5;
  }
  v8 = *(_QWORD *)(a3 + 16);
  *a4 = 0LL;
  TokenData = (const void *)GetTokenData(v8, a2, *(unsigned int *)(v6 + 12));
  memmove(a4, TokenData, v10);
  TcglibReverseBytes((char *)a4, 8u);
  return v5;
}
