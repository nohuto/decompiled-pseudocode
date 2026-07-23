/*
 * XREFs of sub_1406775C8 @ 0x1406775C8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 */

__int64 __fastcall sub_1406775C8(wchar_t *Str1, PSID Sid1, __int64 a3, __int64 a4, wchar_t *Str2, char a6, _QWORD *a7)
{
  __int64 v7; // rbx
  BOOL v10; // esi
  unsigned int v11; // r13d
  int v12; // ecx
  ULONG v13; // ecx
  unsigned int v14; // ebp
  PSID *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rbp
  void *v20; // rcx
  ULONG v21; // r14d
  PVOID v22; // rsi
  PUCHAR v23; // rax
  int v24; // [rsp+60h] [rbp+8h]
  char v26; // [rsp+78h] [rbp+20h]
  wchar_t *Str2a; // [rsp+80h] [rbp+28h]

  v7 = 0LL;
  v26 = 0;
  v24 = 0;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid1) == 0 )
    return 0LL;
  v10 = 0;
  v11 = 63;
  *a7 = 0LL;
  if ( !Str1 )
  {
    v26 = 1;
    v12 = *RtlSubAuthorityCountSid(Sid1);
    if ( !(_BYTE)v12 )
      goto LABEL_7;
    v13 = *RtlSubAuthoritySid(Sid1, v12 - 1);
    if ( v13 != 498 && v13 - 518 > 1 )
      goto LABEL_7;
    v10 = 1;
    if ( v13 != 518 )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( wcsnicmp(Str1, L"EA", 2uLL) )
  {
    if ( !wcsnicmp(Str1, L"SA", 2uLL) )
    {
      v10 = 1;
LABEL_27:
      v24 = 1;
      goto LABEL_7;
    }
    v10 = wcsnicmp(Str1, L"RO", 2uLL) == 0;
  }
  else
  {
    v10 = 1;
  }
LABEL_7:
  v14 = 0;
  v15 = (PSID *)&unk_140C09870;
  do
  {
    if ( v26 )
    {
      if ( RtlEqualSid(Sid1, *v15) )
        goto LABEL_17;
      goto LABEL_10;
    }
    Str2a = (wchar_t *)((char *)&unk_140C09860 + 104 * v14 + 2);
    if ( !wcsnicmp(Str1, Str2a, *((unsigned int *)v15 - 1)) )
    {
LABEL_17:
      v17 = v14;
      return (__int64)&unk_140C09860 + 104 * v17;
    }
    if ( !v10 )
      goto LABEL_10;
    v16 = a3;
    if ( a6 && !a3 && *((_BYTE *)v15 - 16) && *v15 )
    {
      if ( !wcsnicmp(L"DA", Str2a, *((unsigned int *)v15 - 1)) )
        v11 = v14;
LABEL_10:
      v16 = a3;
    }
    ++v14;
    v15 += 13;
  }
  while ( v14 < 0x3F );
  if ( v10 && a6 && !v16 && v11 < 0x3F )
  {
    if ( !v24 )
    {
      v17 = v11;
      return (__int64)&unk_140C09860 + 104 * v17;
    }
    if ( v26 )
    {
      *a7 = Sid1;
    }
    else
    {
      v19 = 104LL * v11;
      v20 = *(void **)((char *)&unk_140C09860 + v19 + 16);
      if ( v20 )
      {
        v21 = RtlLengthSid(v20);
        v22 = sub_14067757C(v21 + 1);
        *a7 = v22;
        if ( v22 )
        {
          _mm_lfence();
          memmove(v22, *(const void **)((char *)&unk_140C09860 + v19 + 16), v21);
          v23 = RtlSubAuthorityCountSid(*(PSID *)((char *)&unk_140C09860 + v19 + 16));
          *RtlSubAuthoritySid(v22, (unsigned int)*v23 - 1) = 518;
        }
      }
    }
  }
  return v7;
}
