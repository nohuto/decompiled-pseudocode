/*
 * XREFs of sub_140761604 @ 0x140761604
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_14096C6C4 @ 0x14096C6C4 (sub_14096C6C4.c)
 */

__int64 __fastcall sub_140761604(__int64 a1, const UNICODE_STRING *a2, _QWORD *a3, __int64 a4, int a5, _BYTE *a6)
{
  char *v6; // r12
  unsigned int v10; // r14d
  PVOID v11; // rax
  unsigned int *v12; // rdi
  unsigned __int64 v13; // r15
  int v14; // esi
  int v15; // eax
  const UNICODE_STRING *v16; // r9
  int v17; // ebp
  __int64 v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // ecx
  int i; // esi
  unsigned int *j; // rdi
  __int64 v25; // rax
  char *v26; // rax
  int v27; // ecx
  int v28; // r8d
  ULONG Size[18]; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp+8h] BYREF
  const UNICODE_STRING *v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  v6 = *(char **)(a1 + 48);
  v30 = 0;
  Size[0] = 0;
  v10 = 0;
  v11 = RtlImageDirectoryEntryToData(v6, 1u, 0xCu, (PULONG)&v30);
  v12 = 0LL;
  v13 = (unsigned __int64)v11;
  if ( !v11 || (v14 = v30) == 0 )
  {
    v13 = 0LL;
    v14 = 0;
    v12 = (unsigned int *)RtlImageDirectoryEntryToData(v6, 1u, 1u, Size);
    if ( !v12 )
      return 0LL;
    do
    {
      v19 = *v12;
      if ( !(_DWORD)v19 )
        break;
      v20 = &v6[v19];
      v21 = (unsigned __int64)&v6[v12[4]];
      v22 = 0;
      for ( i = 0; *(_QWORD *)v20; i = v22 )
      {
        ++v22;
        v20 += 8;
      }
      v14 = 8 * i;
      v30 = v14;
      if ( !(unsigned int)sub_14027E128(a1, v21, v14, 4LL) )
      {
        sub_14096C6C4("UnwritableImportDirectory");
        dword_140C4F3D0 = 193;
        return 3221225595LL;
      }
      ++v10;
      v12 += 5;
    }
    while ( v12 );
    if ( !v10 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (unsigned int)sub_14027E128(a1, (unsigned __int64)v11, v30, 4LL) )
  {
    v10 = 1;
LABEL_5:
    v15 = a5;
    v16 = v31;
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    v17 = sub_140757FFC(a1, a4, a3, v16, v15);
    if ( *(_QWORD *)(sub_140287970(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v13 )
      {
        sub_14027E128(a1, v13, v14, 256LL);
      }
      else
      {
        for ( j = &v12[-5 * v10]; j; j += 5 )
        {
          v25 = *j;
          if ( !(_DWORD)v25 )
            break;
          v26 = &v6[v25];
          v27 = 0;
          v28 = 0;
          while ( *(_QWORD *)v26 )
          {
            ++v27;
            v26 += 8;
            v28 = v27;
          }
          sub_14027E128(a1, (unsigned __int64)&v6[j[4]], 8 * v28, 256LL);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v17 < 0 )
      *a6 = 1;
    return (unsigned int)v17;
  }
  sub_14096C6C4("UnwritableIAT");
  dword_140C4F3D0 = 192;
  return 3221225595LL;
}
