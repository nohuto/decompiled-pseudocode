/*
 * XREFs of sub_14070B610 @ 0x14070B610
 * Callers:
 *     sub_14070AE08 @ 0x14070AE08 (sub_14070AE08.c)
 *     sub_1408149AC @ 0x1408149AC (sub_1408149AC.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14070B934 @ 0x14070B934 (sub_14070B934.c)
 *     sub_14070BACC @ 0x14070BACC (sub_14070BACC.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 */

unsigned int *__fastcall sub_14070B610(
        __int64 a1,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        ULONG_PTR *PackageSize,
        PANSI_STRING DestinationString,
        unsigned __int16 *a10,
        PVOID *a11)
{
  PANSI_STRING v11; // r15
  PVOID *v14; // r13
  int v15; // eax
  int *v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rsi
  void *v22; // rax
  ULONG_PTR *v23; // r12
  void *v24; // rdi
  NTSTATUS v25; // ebx
  __int64 *v26; // rdx
  int v27; // ecx
  __int64 v28; // rbx
  __int64 Length; // rdi
  char v30; // di
  unsigned __int16 *v31; // rbx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ebp
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v41; // rdx
  char *Buffer; // rcx
  __int16 v43; // ax
  __int64 v44; // rcx
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v46; // [rsp+68h] [rbp+10h]
  char v47; // [rsp+70h] [rbp+18h]

  v47 = a3;
  v46 = a2;
  v11 = DestinationString;
  TokenInformation = 0LL;
  RtlInitAnsiString(DestinationString, 0LL);
  v14 = a11;
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 1088);
  v15 = *(_DWORD *)(a1 + 1344);
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 16) = sub_140287F30(a1);
  v16 = (int *)(a4 + 32);
  v17 = 4;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 2004);
  v18 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v18;
  if ( *(_QWORD *)(a1 + 1408) && ((v43 = *(_WORD *)(a1 + 2412), v43 == 332) || v43 == 452) )
  {
    *v16 = 2;
    v19 = 6;
  }
  else
  {
    v19 = 4;
  }
  v20 = *v16;
  v21 = a6;
  if ( (*(_BYTE *)(a1 + 2170) & 7) != 0 )
    v20 = v19;
  *v16 = v20;
  *(_QWORD *)v21 = a4;
  *(_QWORD *)(v21 + 8) = 36LL;
  v22 = (void *)sub_140347920(a1, 0x746C6644u);
  v23 = PackageSize;
  v24 = v22;
  sub_14070B934(v22, PackageSize);
  v25 = SeQueryInformationToken(v24, TokenUser, &TokenInformation);
  sub_1402F89B0((signed __int64 *)(a1 + 1208), (unsigned __int64)v24, 0x746C6644u);
  if ( v25 < 0 )
  {
    v27 = 4;
    TokenInformation = &qword_14000EF90;
    v26 = &qword_14000EF90;
  }
  else
  {
    v26 = (__int64 *)TokenInformation;
    *v14 = TokenInformation;
    v27 = 4 * *(unsigned __int8 *)(*v26 + 1) + 24;
  }
  *(_QWORD *)(v21 + 16) = v26;
  *(_DWORD *)(v21 + 28) = 0;
  v28 = a1 + 1448;
  Length = -1LL;
  *(_DWORD *)(v21 + 24) = v27;
  do
    ++Length;
  while ( *(_BYTE *)(v28 + Length) );
  if ( (_DWORD)Length == 14 )
  {
    v41 = *(const UNICODE_STRING **)(a1 + 1472);
    if ( v41 )
    {
      if ( v41->Length && RtlUnicodeStringToAnsiString(v11, v41, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        v28 = (__int64)&Buffer[Length];
        while ( (char *)v28 != Buffer )
        {
          if ( *(_BYTE *)--v28 == 92 )
          {
            ++v28;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - v28 + Length;
      }
    }
  }
  *(_DWORD *)(v21 + 40) = Length;
  v30 = v47;
  *(_QWORD *)(v21 + 32) = v28;
  *(_DWORD *)(v21 + 44) = 0;
  *(_QWORD *)(v21 + 48) = &qword_14000EF90;
  *(_QWORD *)(v21 + 56) = 1LL;
  if ( v30 )
    sub_14070BACC(a1, a5);
  else
    *a5 = 0LL;
  v31 = a10;
  *a10 = 0;
  if ( *(_QWORD *)(a1 + 1360) )
  {
    if ( v30 )
    {
      sub_14070BB0C(a1, v31);
      v32 = *v31;
      if ( (_WORD)v32 )
      {
        v17 = 5;
        *(_QWORD *)(v21 + 64) = *((_QWORD *)v31 + 1);
        *(_DWORD *)(v21 + 72) = v32;
        *(_DWORD *)(v21 + 76) = 0;
      }
    }
  }
  v33 = 2LL * v17;
  v34 = v17 + 1;
  v35 = v17 + 2;
  v34 *= 2LL;
  *(_QWORD *)(v21 + 8 * v33) = &qword_14000EF90;
  *(_QWORD *)(v21 + 8 * v33 + 8) = 2LL;
  v36 = *(_DWORD *)v23;
  *(_QWORD *)(v21 + 8 * v34) = v23 + 2;
  *(_DWORD *)(v21 + 8 * v34 + 8) = v36;
  *(_DWORD *)(v21 + 8 * v34 + 12) = 0;
  v37 = *((_DWORD *)v23 + 2);
  v38 = v35;
  v39 = v35 + 1;
  v38 *= 2LL;
  *(_QWORD *)(v21 + 8 * v38) = v23 + 34;
  *(_QWORD *)(v21 + 8 * v38 + 8) = v37;
  if ( v46 == 807 )
  {
    v44 = 2LL * v39++;
    *(_QWORD *)(v21 + 8 * v44) = a1 + 2112;
    *(_QWORD *)(v21 + 8 * v44 + 8) = 8LL;
  }
  result = a7;
  *a7 = v39;
  return result;
}
