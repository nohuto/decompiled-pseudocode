/*
 * XREFs of MiResolveImageImports @ 0x1407BCFD0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14034B480 (MiSetImageProtection.c)
 *     MmDecodeExportSection @ 0x14034B4CC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034B668 (MmEncodeExportSection.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3050C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiResolveImageImports(
        __int64 a1,
        const UNICODE_STRING *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        _BYTE *a6)
{
  char *v6; // r12
  unsigned int v10; // r14d
  PVOID v11; // rax
  unsigned int *v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // esi
  int v15; // ebp
  __int64 v17; // rax
  char *v18; // rax
  unsigned __int64 v19; // rdx
  int i; // esi
  unsigned int *j; // rbx
  __int64 v22; // rax
  char *v23; // rax
  int v24; // r8d
  ULONG Size[18]; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF
  const UNICODE_STRING *v27; // [rsp+88h] [rbp+10h]

  v27 = a2;
  v6 = *(char **)(a1 + 48);
  v26 = 0;
  Size[0] = 0;
  v10 = 0;
  v11 = RtlImageDirectoryEntryToData(v6, 1u, 0xCu, (PULONG)&v26);
  v12 = 0LL;
  v13 = (unsigned __int64)v11;
  if ( !v11 || (v14 = v26) == 0 )
  {
    v13 = 0LL;
    v14 = 0;
    v12 = (unsigned int *)RtlImageDirectoryEntryToData(v6, 1u, 1u, Size);
    if ( !v12 )
      return 0LL;
    do
    {
      v17 = *v12;
      if ( !(_DWORD)v17 )
        break;
      v18 = &v6[v17];
      v19 = (unsigned __int64)&v6[v12[4]];
      for ( i = 0; *(_QWORD *)v18; ++i )
        v18 += 8;
      v14 = 8 * i;
      v26 = v14;
      if ( !(unsigned int)MiSetImageProtection(a1, v19, v14, 4u) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C65910 = 193;
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
  if ( (unsigned int)MiSetImageProtection(a1, (unsigned __int64)v11, v26, 4u) )
  {
    v10 = 1;
LABEL_5:
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    MmDecodeExportSection();
    v15 = MiResolveImageReferences(a1, a4, a3, v27, a5);
    MmEncodeExportSection();
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v13 )
      {
        MiSetImageProtection(a1, v13, v14, 0x100u);
      }
      else
      {
        for ( j = &v12[-5 * v10]; j; j += 5 )
        {
          v22 = *j;
          if ( !(_DWORD)v22 )
            break;
          v23 = &v6[v22];
          v24 = 0;
          while ( *(_QWORD *)v23 )
          {
            v23 += 8;
            ++v24;
          }
          MiSetImageProtection(a1, (unsigned __int64)&v6[j[4]], 8 * v24, 0x100u);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v15 < 0 )
      *a6 = 1;
    return (unsigned int)v15;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C65910 = 192;
  return 3221225595LL;
}
