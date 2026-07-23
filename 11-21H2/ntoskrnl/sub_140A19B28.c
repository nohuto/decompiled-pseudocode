/*
 * XREFs of sub_140A19B28 @ 0x140A19B28
 * Callers:
 *     sub_140A18E64 @ 0x140A18E64 (sub_140A18E64.c)
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A193C4 @ 0x140A193C4 (sub_140A193C4.c)
 *     sub_140A19D70 @ 0x140A19D70 (sub_140A19D70.c)
 */

__int64 __fastcall sub_140A19B28(_BYTE *a1, __int64 a2)
{
  int v4; // ebx
  unsigned int *v5; // rax
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  unsigned int v8; // ecx
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v11 = 0LL;
  *a1 = 0;
  v4 = sub_140A193C4(&v11, a2);
  if ( v4 < 0 )
    goto LABEL_2;
  v5 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 59), 0, &Size);
  if ( !v5 || Size < 0x28 )
  {
    v4 = -1073741275;
    if ( !v5 )
      return (unsigned int)v4;
LABEL_17:
    sub_1406E0C3C(2LL, (__int64)"AslpFileQueryExportName");
    return (unsigned int)v4;
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)v5 < v6 || (unsigned __int64)(v5 + 10) > *(_QWORD *)(a2 + 24) + v6 )
  {
    v4 = -1073741701;
    goto LABEL_17;
  }
  v7 = (_BYTE *)sub_140A19D70(v11, a2 + 8, v5[3]);
  if ( !v7 || (unsigned __int64)v7 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v7 )
  {
    v4 = -1073741701;
    goto LABEL_17;
  }
  v8 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v7;
  if ( v8 > 0x100 )
    v8 = 256;
  v4 = sub_14024F6E4(a1, v8, (__int64)v7);
  if ( v4 >= 0 )
    return 0;
LABEL_2:
  sub_1406E0C3C(1LL, (__int64)"AslpFileQueryExportName");
  return (unsigned int)v4;
}
