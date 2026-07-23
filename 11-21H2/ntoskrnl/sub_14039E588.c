/*
 * XREFs of sub_14039E588 @ 0x14039E588
 * Callers:
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 */

__int64 __fastcall sub_14039E588(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v4; // edi
  __int64 result; // rax
  PSLIST_ENTRY v6; // rax
  _SLIST_ENTRY v7; // xmm0
  _SLIST_ENTRY v8; // xmm0
  unsigned int v9; // ebx
  _SLIST_ENTRY *v10; // r8
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a3;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    sub_1402A3A14(a1, 6, &v11);
  }
  else
  {
    result = sub_1402A3A60(a1, &v11);
    if ( (int)result < 0 )
      return result;
  }
  v6 = sub_140202234((__int64)&stru_140CE2980);
  if ( !v6 )
    return 3221225626LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  LOWORD(v6->Next) = v4;
  if ( v4 == 1 )
  {
    v8 = *(_SLIST_ENTRY *)a2;
  }
  else
  {
    if ( v4 != 2 )
      goto LABEL_12;
    if ( *(_BYTE *)(a2 + 32) )
    {
      v7 = *(_SLIST_ENTRY *)a2;
      WORD1(v6->Next) |= 1u;
      *(PSLIST_ENTRY)((char *)v6 + 4) = v7;
    }
    if ( !*(_BYTE *)(a2 + 33) )
      goto LABEL_12;
    v8 = *(_SLIST_ENTRY *)(a2 + 16);
  }
  WORD1(v6->Next) |= 2u;
  *(PSLIST_ENTRY)((char *)v6 + 20) = v8;
LABEL_12:
  v9 = sub_1402A3F70(v11, 6u, (signed __int64)v6);
  if ( v9 == -1073741823 )
    sub_140203D88((__int64)&stru_140CE2980, v10, (__int64)v10);
  return v9;
}
