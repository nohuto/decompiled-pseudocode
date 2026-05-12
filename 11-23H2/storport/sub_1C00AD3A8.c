/*
 * XREFs of sub_1C00AD3A8 @ 0x1C00AD3A8
 * Callers:
 *     sub_1C0036A40 @ 0x1C0036A40 (sub_1C0036A40.c)
 *     sub_1C0036B68 @ 0x1C0036B68 (sub_1C0036B68.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0076788 @ 0x1C0076788 (sub_1C0076788.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEEC4 @ 0x1C00AEEC4 (sub_1C00AEEC4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AD3A8(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        PMDL SourceMdl,
        unsigned int a8,
        __int64 a9)
{
  PMDL Mdl; // rdi
  ULONG v11; // r15d
  char *v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  char v15; // cl
  char v16; // cl
  unsigned int v17; // r12d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  int v20; // r8d
  char *v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rax
  char v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned int v27; // [rsp+70h] [rbp-49h]
  unsigned int v28; // [rsp+74h] [rbp-45h]
  _BYTE Dst[128]; // [rsp+78h] [rbp-41h] BYREF
  char v30; // [rsp+108h] [rbp+4Fh]

  memset_0(Dst, 0, 0x40uLL);
  Mdl = 0LL;
  v28 = 0;
  v11 = 0;
  v12 = 0LL;
  v25 = 0;
  v30 = 0;
  v27 = a5;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    v26 = sub_1C00AEEC4(a1);
    v13 = v26;
    if ( v26 >= 0 )
    {
      v14 = *(_QWORD *)(a1 + 6032);
      if ( v14 && (v15 = *(_BYTE *)(v14 + 2)) != 0 )
      {
        if ( a8 < (unsigned __int64)a5 << v15 )
        {
          v26 = -1073741585;
          goto LABEL_38;
        }
        if ( *(_DWORD *)(a1 + 5960) != 1 )
        {
          v26 = sub_1C0078140(a1, 1);
          v13 = v26;
          if ( v26 < 0 )
            goto LABEL_38;
          v25 = 1;
        }
        v16 = *(_BYTE *)(*(_QWORD *)(a1 + 6032) + 2LL);
        v17 = *(_DWORD *)(a1 + 368) >> v16;
        if ( !v17 )
          v17 = 1;
        if ( a5 > v17 )
        {
          v11 = v17 << v16;
          v30 = 1;
          v27 = v17;
          Mdl = IoAllocateMdl(0LL, (v17 << v16) + 4096, 0, 0, 0LL);
          if ( !Mdl )
          {
            v26 = -1073741670;
            goto LABEL_38;
          }
          v12 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
        }
        if ( a5 )
        {
          LOWORD(v18) = v27;
          while ( 1 )
          {
            if ( v30 && Mdl )
            {
              IoBuildPartialMdl(SourceMdl, Mdl, v12, v11);
              LOWORD(v18) = v27;
            }
            sub_1C0076788((__int64)Dst, a2, a4, v18, a6, a3);
            if ( v30 )
            {
              v19 = v11;
              v20 = (int)Mdl;
              LODWORD(v21) = (_DWORD)v12;
            }
            else
            {
              v20 = (int)SourceMdl;
              v21 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
              v19 = a8;
            }
            v26 = sub_1C00AEFFC(a1, (_DWORD)v21, v20, v19, (__int64)Dst);
            v13 = v26;
            if ( v26 < 0 )
              break;
            a4 += v27;
            v22 = v27 + v28;
            v28 = v22;
            if ( a5 <= v22 )
              break;
            if ( Mdl )
            {
              if ( (Mdl->MdlFlags & 0x20) != 0 )
              {
                MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
                v22 = v28;
              }
              v12 += v11;
            }
            v18 = v17;
            if ( a5 - v22 <= v17 )
              v18 = a5 - v22;
            v23 = *(_QWORD *)(a1 + 6032);
            v27 = v18;
            v11 = v18 << *(_BYTE *)(v23 + 2);
          }
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
      }
      else
      {
        v13 = -1073741668;
        v26 = -1073741668;
      }
      if ( v13 >= 0 )
        goto LABEL_39;
    }
  }
  else
  {
    v26 = -1073741637;
  }
LABEL_38:
  sub_1C003EC88(a9, &v26);
  v13 = v26;
LABEL_39:
  if ( v25 )
    sub_1C0078140(a1, 0);
  return (unsigned int)v13;
}
