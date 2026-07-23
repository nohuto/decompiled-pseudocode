/*
 * XREFs of sub_14096C4AC @ 0x14096C4AC
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_14076185C @ 0x14076185C (sub_14076185C.c)
 * Callees:
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405573A8 @ 0x1405573A8 (sub_1405573A8.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

void __fastcall sub_14096C4AC(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // r12d
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  bool v14; // sf
  int v15; // edi
  unsigned int v16; // r15d
  __int64 v17; // rax
  _WORD *v18; // rdi
  char *v19; // r15
  const void **v20; // r12
  size_t v21; // rbx
  char *v22; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v25; // [rsp+40h] [rbp-29h] BYREF
  __int16 v26; // [rsp+50h] [rbp-19h]
  const wchar_t *v27; // [rsp+58h] [rbp-11h]
  __int128 v28; // [rsp+60h] [rbp-9h]
  UNICODE_STRING v29; // [rsp+70h] [rbp+7h]

  v4 = *a1 + 2;
  DestinationString = 0LL;
  v5 = -1LL;
  v6 = a4;
  v7 = 0;
  v8 = *(_OWORD *)a1;
  UnicodeString = 0LL;
  v25 = v8;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
  {
    v9 = 1LL;
LABEL_11:
    v7 = v6;
    v27 = L"failed to load";
    do
      ++v5;
    while ( aFailedToLoad[v5] );
    v15 = 2 * v5;
    v26 = v15;
    v4 += v15 + 2;
    v6 = sub_14028D2D8(v6, 0x1000uLL) ? -1073741670 : -1073741204;
    ++v9;
    goto LABEL_15;
  }
  v10 = -1LL;
  v27 = L"cannot find";
  do
    ++v10;
  while ( aCannotFind[v10] );
  v11 = 2 * v10;
  v12 = *(_OWORD *)a2;
  v13 = v11 + *a2;
  v26 = v11;
  v9 = 3LL;
  v4 += v13 + 4;
  v28 = v12;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v7 = (int)a3;
      goto LABEL_15;
    }
    RtlInitAnsiString(&DestinationString, a3);
    v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0;
    v9 = 4LL;
    v4 += UnicodeString.Length + 2;
    v29 = UnicodeString;
    if ( v14 )
      goto LABEL_11;
  }
LABEL_15:
  v16 = v4 + 48;
  if ( v16 < 0xFF )
  {
    v17 = sub_1405573A8(v16);
    v18 = (_WORD *)v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 16) = v7;
      v19 = (char *)(v17 + 48);
      *(_DWORD *)(v17 + 12) = 1073741850;
      v20 = (const void **)&v25 + 1;
      *(_DWORD *)(v17 + 20) = v6;
      *(_WORD *)(v17 + 6) = 48;
      do
      {
        v21 = *((unsigned __int16 *)v20 - 4);
        memmove(v19, *v20, v21);
        v20 += 2;
        v22 = &v19[2 * (v21 >> 1)];
        *(_WORD *)v22 = 32;
        v19 = v22 + 2;
        --v9;
      }
      while ( v9 );
      *(_WORD *)v22 = 0;
      v18[2] = 1;
      IoWriteErrorLogEntry(v18);
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
}
