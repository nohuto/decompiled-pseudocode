/*
 * XREFs of sub_1407E5234 @ 0x1407E5234
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1407E5390 @ 0x1407E5390 (sub_1407E5390.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     sub_1407E5518 @ 0x1407E5518 (sub_1407E5518.c)
 */

__int64 __fastcall sub_1407E5234(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // r13
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  wchar_t *v13; // rcx
  __int64 v14; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0;
  v2 = *(unsigned __int16 *)(a1 + 34);
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v18 = 0LL;
  if ( v2 <= v4 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = v2 - v4;
    v6 = ((unsigned __int64)(unsigned int)(2 * v5 + 70) + 15) >> 4;
    v7 = (struct _EX_RUNDOWN_REF *)sub_1407E5390(*(_QWORD *)a1, (unsigned int)v6, &v18);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = v18;
      *(_OWORD *)v18 = 0LL;
      *v9 = (8LL * (unsigned int)(v6 - 1)) | 5;
      v9[1] = v8;
      v10 = sub_1407E5518(v9, 0LL, (unsigned int)(2 * v5 + 54), *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(v10 + 44);
      v11 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v5;
      SourceString.Length = 2 * v5;
      SourceString.MaximumLength = 2 * v5;
      v13 = (wchar_t *)(v12 + 2 * v11);
      v14 = *(_QWORD *)(a1 + 8);
      SourceString.Buffer = v13;
      LODWORD(v13) = *(_DWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 24) = v14;
      *(_DWORD *)(v10 + 32) = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v10 + 40) ^= (*(_DWORD *)(a1 + 36) ^ (unsigned int)v13) & 1;
      *(_DWORD *)(v10 + 40) ^= ((unsigned __int8)*(_DWORD *)(v10 + 40) ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
      *(_WORD *)(v10 + 42) = v5;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *(_WORD *)(v10 + 2 * v5 + 44) = 0;
      sub_1402AD030(v7 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v1;
}
