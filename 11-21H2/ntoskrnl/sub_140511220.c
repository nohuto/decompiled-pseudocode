/*
 * XREFs of sub_140511220 @ 0x140511220
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

__int64 __fastcall sub_140511220(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v8; // rsi
  struct _MDL *v9; // rax
  unsigned int v10; // r10d
  unsigned int *v11; // r13
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  struct _MDL *v14; // rdi
  _QWORD *p_Next; // rbp
  int v16; // eax
  ULONG v17; // edx
  char v18; // cl
  unsigned int *v19; // r9
  unsigned int v20; // r12d
  PMDL Mdl; // rax
  PMDL v22; // rax
  struct _MDL *Next; // rbx
  struct _MDL *v24; // r8
  int v25; // eax
  struct _MDL *v26; // r10
  char v27; // dl
  __int64 v28; // r15
  unsigned __int64 v29; // rcx
  __int64 v30; // rbp
  struct _MDL *v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+34h] [rbp-54h]
  unsigned int v36; // [rsp+38h] [rbp-50h]
  unsigned int *v37; // [rsp+40h] [rbp-48h]
  unsigned int v38; // [rsp+90h] [rbp+8h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 512) == 3 )
  {
    if ( !*(_BYTE *)(a1 + 437) )
      return 3221225474LL;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(a1 + 432) && *(_BYTE *)(a1 + 437) )
  {
LABEL_8:
    *a4 = a3;
    return 0LL;
  }
  v8 = *((_QWORD *)a2 + 1);
  if ( v8 )
    v9 = *(struct _MDL **)(v8 + 16);
  else
    v9 = *(struct _MDL **)(a1 + 544);
  if ( v9 )
  {
    *a4 = v9;
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 4;
  v12 = 0;
  v37 = a2 + 4;
  v13 = 0;
  v38 = 0;
  v14 = 0LL;
  v34 = v10;
  p_Next = 0LL;
  v39 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  v19 = a2 + 4;
  if ( !v10 )
  {
LABEL_34:
    v24 = v14 + 1;
    v25 = 0;
    v26 = v14;
    v27 = 1;
    if ( *a2 )
    {
      v28 = *a2;
      do
      {
        v29 = *(_QWORD *)v11;
        v30 = v11[2];
        if ( !v27 && (v25 || (v29 & 0xFFF) != 0) )
        {
          v26 = v26->Next;
          v24 = v26 + 1;
        }
        v31 = (struct _MDL *)(v29 >> 12);
        v32 = ((*(_QWORD *)v11 & 0xFFFuLL) + v30 + 4095) >> 12;
        if ( (_DWORD)v32 )
        {
          v33 = (unsigned int)v32;
          do
          {
            v24->Next = v31;
            v24 = (struct _MDL *)((char *)v24 + 8);
            v31 = (struct _MDL *)((char *)v31 + 1);
            --v33;
          }
          while ( v33 );
        }
        v27 = 0;
        v25 = (v29 + v30) & 0xFFF;
        v11 += 6;
        --v28;
      }
      while ( v28 );
    }
    *a4 = v14;
    if ( v8 )
      *(_QWORD *)(v8 + 16) = v14;
    else
      *(_QWORD *)(a1 + 544) = v14;
    return 0LL;
  }
  do
  {
    v35 = v19[2];
    v36 = *v19;
    v20 = *v19 & 0xFFF;
    if ( !v18 && (v16 || v20) )
    {
      Mdl = IoAllocateMdl((PVOID)v12, v17, 1u, 0, 0LL);
      if ( !Mdl )
        goto LABEL_28;
      Mdl->MdlFlags |= 0x2802u;
      if ( v14 )
        *p_Next = Mdl;
      else
        v14 = Mdl;
      v12 = v38;
      p_Next = &Mdl->Next;
      v19 = v37;
      v17 = 0;
      v10 = v34;
      v13 = v39;
    }
    v18 = 0;
    if ( v17 )
      v20 = v12;
    v17 += v35;
    v19 += 6;
    v12 = v20;
    ++v13;
    v38 = v20;
    v16 = (v35 + v36) & 0xFFF;
    v37 = v19;
    v39 = v13;
  }
  while ( v13 < v10 );
  if ( !v17 )
    goto LABEL_34;
  v22 = IoAllocateMdl((PVOID)v20, v17, 1u, 0, 0LL);
  if ( v22 )
  {
    v22->MdlFlags |= 0x2802u;
    if ( v14 )
      *p_Next = v22;
    else
      v14 = v22;
    goto LABEL_34;
  }
LABEL_28:
  if ( v14 )
  {
    do
    {
      Next = v14->Next;
      IoFreeMdl(v14);
      v14 = Next;
    }
    while ( Next );
  }
  return 3221225626LL;
}
