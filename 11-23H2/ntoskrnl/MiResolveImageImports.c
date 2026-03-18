/*
 * XREFs of MiResolveImageImports @ 0x1407BCA40
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MiSectionControlArea @ 0x14029F880 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14034BA80 (MiSetImageProtection.c)
 *     MmDecodeExportSection @ 0x14034BACC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BC68 (MmEncodeExportSection.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A3049C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiResolveImageImports(
        __int64 a1,
        const UNICODE_STRING *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        _BYTE *a6)
{
  __int64 v6; // r12
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned int *v13; // rbx
  unsigned __int64 v14; // r15
  int v15; // esi
  int v16; // ebp
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  int i; // esi
  unsigned int *j; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // r8d
  int v26; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF
  const UNICODE_STRING *v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v6 = *(_QWORD *)(a1 + 48);
  v27 = 0;
  v26 = 0;
  v10 = 0;
  LOBYTE(a2) = 1;
  v11 = RtlImageDirectoryEntryToData(v6, (int)a2, 12, (int)&v27);
  v13 = 0LL;
  v14 = v11;
  if ( !v11 || (v15 = v27) == 0 )
  {
    v14 = 0LL;
    v15 = 0;
    LOBYTE(v12) = 1;
    v13 = (unsigned int *)RtlImageDirectoryEntryToData(v6, v12, 1, (int)&v26);
    if ( !v13 )
      return 0LL;
    do
    {
      v18 = *v13;
      if ( !(_DWORD)v18 )
        break;
      v19 = (_QWORD *)(v6 + v18);
      v20 = v6 + v13[4];
      for ( i = 0; *v19; ++i )
        ++v19;
      v15 = 8 * i;
      v27 = v15;
      if ( !(unsigned int)MiSetImageProtection(a1, v20, v15, 4u) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C65810 = 193;
        return 3221225595LL;
      }
      ++v10;
      v13 += 5;
    }
    while ( v13 );
    if ( !v10 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v11, v27, 4u) )
  {
    v10 = 1;
LABEL_5:
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    MmDecodeExportSection();
    v16 = MiResolveImageReferences(a1, a4, a3, v28, a5);
    MmEncodeExportSection();
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v14 )
      {
        MiSetImageProtection(a1, v14, v15, 0x100u);
      }
      else
      {
        for ( j = &v13[-5 * v10]; j; j += 5 )
        {
          v23 = *j;
          if ( !(_DWORD)v23 )
            break;
          v24 = (_QWORD *)(v6 + v23);
          v25 = 0;
          while ( *v24 )
          {
            ++v24;
            ++v25;
          }
          MiSetImageProtection(a1, v6 + j[4], 8 * v25, 0x100u);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v16 < 0 )
      *a6 = 1;
    return (unsigned int)v16;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C65810 = 192;
  return 3221225595LL;
}
