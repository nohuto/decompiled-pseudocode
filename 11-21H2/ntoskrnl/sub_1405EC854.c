/*
 * XREFs of sub_1405EC854 @ 0x1405EC854
 * Callers:
 *     RtlIdnToUnicode @ 0x1409BBC80 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405EC7E0 @ 0x1405EC7E0 (sub_1405EC7E0.c)
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 *     RtlIsNormalizedString @ 0x1409BE480 (RtlIsNormalizedString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405EC854(
        int a1,
        wchar_t *a2,
        int a3,
        void *a4,
        int *a5,
        PCWSTR SourceString,
        BOOLEAN Normalized)
{
  void *v7; // r13
  wchar_t *v8; // r11
  char v9; // di
  int *v10; // rsi
  const WCHAR *v11; // r14
  wchar_t v12; // r15
  __int64 result; // rax
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // rdx
  LONG v18; // r13d
  _BYTE *v19; // r14
  __int64 i; // rcx
  __int16 v21; // dx
  __int64 j; // rax
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF
  void *v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v7 = a4;
  v23 = 0LL;
  v8 = a2;
  Normalized = 0;
  v9 = a1;
  if ( !a2 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    v24 = 0LL;
    if ( (int)sub_1402E0AC4(a2, 0x203uLL, &v24) < 0 )
      return 3221227286LL;
    a3 = v24 + 1;
  }
  v11 = SourceString;
  LODWORD(v24) = 511;
  v12 = v8[a3 - 1];
  result = sub_1409BBF5C(v8, (v9 & 4) != 0, (v9 & 2) != 0, (__int64)&Normalized, (__int64)&v23);
  if ( (int)result < 0 )
    return result;
  if ( !v12 )
  {
    v14 = v24;
    if ( (int)v24 < 511 )
    {
      v11[(int)v24] = 0;
      v15 = v14 + 1;
      goto LABEL_16;
    }
    return 3221227286LL;
  }
  v15 = v24;
LABEL_16:
  if ( (v9 & 8) != 0 || Normalized )
    goto LABEL_38;
  Normalized = 0;
  v16 = v23;
  if ( (v9 & 4) != 0 && (RtlIsNormalizedString(1u, v11, (v23 - (__int64)v11) >> 1, &Normalized) < 0 || !Normalized) )
    return 3221227286LL;
  v17 = (v16 - (__int64)v11) >> 1;
  if ( v17 >= v15 - (v12 == 0) )
    goto LABEL_38;
  v18 = v15 - (2 - (v12 != 0)) - v17;
  v19 = sub_1405EC7E0(v18);
  if ( !v19 )
    return 3221225495LL;
  if ( v18 > 0 )
  {
    for ( i = 0LL; i < v18; ++i )
    {
      v21 = *(_WORD *)(v16 + 2 * i + 2);
      if ( (unsigned __int16)(v21 - 65) <= 0x19u )
      {
        *(_WORD *)(v16 + 2 * i + 2) = v21 + 32;
        v19[i] = 1;
      }
    }
  }
  if ( RtlIsNormalizedString((((v9 & 1) == 0) << 8) + 13, (PCWSTR)(v16 + 2), v18, &Normalized) < 0 || !Normalized )
  {
    ExFreePoolWithTag(v19, 0);
    return 3221227286LL;
  }
  if ( v18 > 0 )
  {
    for ( j = 0LL; j < v18; ++j )
    {
      if ( v19[j] == 1 )
        *(_WORD *)(v16 + 2 * j + 2) -= 32;
    }
  }
  ExFreePoolWithTag(v19, 0);
  v11 = SourceString;
  v7 = v25;
LABEL_38:
  if ( v7 && *v10 )
  {
    if ( v15 > *v10 )
      return 3221225507LL;
    memmove(v7, v11, 2LL * v15);
  }
  *v10 = v15;
  return 0LL;
}
