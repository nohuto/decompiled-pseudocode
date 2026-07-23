/*
 * XREFs of sub_140636FAC @ 0x140636FAC
 * Callers:
 *     sub_14045F8C2 @ 0x14045F8C2 (sub_14045F8C2.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 */

void __fastcall sub_140636FAC(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r9d
  int v12; // r10d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  struct _KTHREAD *v20; // rcx
  bool v21; // zf

  if ( !a3 )
    return;
  v4 = qword_140C15D88;
  if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL || a2 >= 0xFFFF800000000000uLL )
    return;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v6 = (unsigned int)*(_QWORD *)(v4 + 8);
  LODWORD(CurrentThread) = ((unsigned int)v6 >> 13) & 0x3FFFF;
  _BitScanReverse(&v7, (unsigned int)CurrentThread);
  v8 = (v6 >> 4) & 0x1FF;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v7 - 2))
                 + 8LL * ((unsigned int)CurrentThread ^ (1 << v7))
                 + 8);
  if ( !*(_DWORD *)(v9 + 8 * v8 + 264) )
    goto LABEL_5;
  v11 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v8 + 268)) > *(_DWORD *)(v9 + 8 * v8 + 272) )
  {
    v12 = *(_DWORD *)(v9 + 8 * v8 + 264);
    *(_DWORD *)(v9 + 8 * v8 + 284) += v12;
    v13 = *(_DWORD *)(v9 + 8 * v8 + 284);
    v14 = *(_DWORD *)(v9 + 8 * v8 + 280);
    if ( v13 > *(_DWORD *)(v9 + 8 * v8 + 276) )
      v13 = *(_DWORD *)(v9 + 8 * v8 + 276);
    *(_DWORD *)(v9 + 8 * v8 + 268) = v11;
    v15 = *(_DWORD *)(v9 + 8 * v8 + 292) + v14;
    *(_DWORD *)(v9 + 8 * v8 + 280) = 0;
    v16 = v15 >> 1;
    *(_DWORD *)(v9 + 8 * v8 + 284) = v13;
    *(_DWORD *)(v9 + 8 * v8 + 292) = v16;
    if ( v16 >= 2 * v12 )
    {
      v17 = v16 / (v12 + 1);
      v18 = v11 ^ *(_DWORD *)(v9 + 8 * v8 + 300);
      *(_DWORD *)(v9 + 8 * v8 + 296) = v17;
      *(_DWORD *)(v9 + 8 * v8 + 300) = 16777619 * v18;
      *(_DWORD *)(v9 + 8 * v8 + 288) = (16777619 * v18) & (2 * v17);
    }
    else
    {
      *(_DWORD *)(v9 + 8 * v8 + 296) = 1;
      *(_DWORD *)(v9 + 8 * v8 + 288) = 1;
    }
  }
  ++*(_DWORD *)(v9 + 8 * v8 + 280);
  v19 = *(_DWORD *)(v9 + 8 * v8 + 284);
  if ( v19 > 0 && (int)--*(_DWORD *)(v9 + 8 * v8 + 288) <= 0 )
  {
    *(_DWORD *)(v9 + 8 * v8 + 284) = v19 - 1;
    *(_DWORD *)(v9 + 8 * v8 + 288) = *(_DWORD *)(v9 + 8 * v8 + 296);
LABEL_5:
    v10 = 1;
    goto LABEL_16;
  }
  v10 = 0;
LABEL_16:
  v20 = KeGetCurrentThread();
  v21 = (*((_WORD *)v20 + 243))++ == 0xFFFF;
  if ( v21 && *((struct _KTHREAD **)v20 + 19) != (struct _KTHREAD *)((char *)v20 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8 * v8 + 332), 1u);
    sub_140636520(a1, 0x50000010u);
  }
}
