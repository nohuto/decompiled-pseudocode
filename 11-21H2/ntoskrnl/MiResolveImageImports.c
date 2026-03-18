/*
 * XREFs of MiResolveImageImports @ 0x140761604
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSetImageProtection @ 0x14027E128 (MiSetImageProtection.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14096C6C4 (MiLogStrongCodeDriverLoadFailure.c)
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
  unsigned int *v13; // rdi
  unsigned __int64 v14; // r15
  int v15; // esi
  int v16; // eax
  const UNICODE_STRING *v17; // r9
  int v18; // ebp
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  int i; // esi
  unsigned int *j; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+80h] [rbp+8h] BYREF
  const UNICODE_STRING *v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  v6 = *(_QWORD *)(a1 + 48);
  v31 = 0;
  v30 = 0;
  v10 = 0;
  LOBYTE(a2) = 1;
  v11 = RtlImageDirectoryEntryToData(v6, (int)a2, 12, (int)&v31);
  v13 = 0LL;
  v14 = v11;
  if ( !v11 || (v15 = v31) == 0 )
  {
    v14 = 0LL;
    v15 = 0;
    LOBYTE(v12) = 1;
    v13 = (unsigned int *)RtlImageDirectoryEntryToData(v6, v12, 1, (int)&v30);
    if ( !v13 )
      return 0LL;
    do
    {
      v20 = *v13;
      if ( !(_DWORD)v20 )
        break;
      v21 = (_QWORD *)(v6 + v20);
      v22 = v6 + v13[4];
      v23 = 0;
      for ( i = 0; *v21; i = v23 )
      {
        ++v23;
        ++v21;
      }
      v15 = 8 * i;
      v31 = v15;
      if ( !(unsigned int)MiSetImageProtection(a1, v22, v15, 4LL) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C4F3D0 = 193;
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
  if ( (unsigned int)MiSetImageProtection(a1, v11, v31, 4LL) )
  {
    v10 = 1;
LABEL_5:
    v16 = a5;
    v17 = v32;
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    v18 = MiResolveImageReferences(a1, a4, a3, v17, v16);
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v14 )
      {
        MiSetImageProtection(a1, v14, v15, 256LL);
      }
      else
      {
        for ( j = &v13[-5 * v10]; j; j += 5 )
        {
          v26 = *j;
          if ( !(_DWORD)v26 )
            break;
          v27 = (_QWORD *)(v6 + v26);
          v28 = 0;
          v29 = 0;
          while ( *v27 )
          {
            ++v28;
            ++v27;
            v29 = v28;
          }
          MiSetImageProtection(a1, v6 + j[4], 8 * v29, 256LL);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v18 < 0 )
      *a6 = 1;
    return (unsigned int)v18;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C4F3D0 = 192;
  return 3221225595LL;
}
