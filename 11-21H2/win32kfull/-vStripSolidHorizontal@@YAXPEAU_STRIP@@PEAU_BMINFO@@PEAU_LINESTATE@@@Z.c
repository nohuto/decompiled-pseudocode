/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C01458C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  __int64 v4; // rbx
  int v6; // esi
  int v8; // ebp
  int *v9; // r8
  char *v10; // r12
  int v11; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r13
  int v16; // edx
  int v17; // r14d
  unsigned int v18; // edx
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // eax

  v3 = (char *)a1 + 28;
  v4 = *((int *)a1 + 6);
  v6 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = (int *)*((_QWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v4);
  v13 = *((_DWORD *)a1 + 1);
  v14 = -4 * *((_DWORD *)a1 + 2);
  if ( (v13 & 8) == 0 )
    v14 = v11;
  v15 = v14;
  do
  {
    v16 = *(_DWORD *)v3 + v4;
    LODWORD(v4) = *((_DWORD *)a2 + 7) & v16;
    v17 = *v9;
    v18 = v16 >> *((_DWORD *)a2 + 6);
    v19 = *(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v4);
    v20 = ~v19;
    if ( !v18 )
    {
      v22 = v8 & v20 & v12 ^ v17 & (v6 | ~(v20 & v12));
LABEL_13:
      *v9 = v22;
      goto LABEL_9;
    }
    *v9++ = v8 & v12 ^ v17 & (v6 | ~v12);
    if ( v18 > 1 )
    {
      v21 = v18 - 1;
      do
      {
        *v9 = v8 ^ v6 & *v9;
        ++v9;
        --v21;
      }
      while ( v21 );
    }
    if ( v19 != -1 )
    {
      v22 = v8 & v20 ^ *v9 & (v6 | v19);
      goto LABEL_13;
    }
LABEL_9:
    v9 = (int *)((char *)v9 + v15);
    v3 += 4;
    v12 = v19;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v9;
}
