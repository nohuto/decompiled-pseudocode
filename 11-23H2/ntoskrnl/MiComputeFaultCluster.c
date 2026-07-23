/*
 * XREFs of MiComputeFaultCluster @ 0x1402EE8B8
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAdvanceFaultList @ 0x1402EEA84 (MiAdvanceFaultList.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r11
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int16 v24; // bx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  int v32; // [rsp+88h] [rbp+10h]

  v5 = a2[4];
  v6 = a2[1];
  v7 = 2LL * a2[3];
  v8 = a2[2];
  v29 = a2[3];
  v10 = *(_QWORD *)(v6 + 8 * v7) + (v5 << 12);
  v30 = v5;
  v28 = v8;
  MiAdvanceFaultList(a2);
  v12 = a2[3];
  v13 = 1LL;
  if ( v12 < v8 )
  {
    v32 = 0;
    v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v15 = 256LL;
    if ( a4 && *(unsigned int *)(a1 + 1196) < 0x100uLL )
      v15 = *(unsigned int *)(a1 + 1196);
    if ( a3 )
    {
      v16 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v10 >> 12) + 1;
      if ( v15 <= v16 )
        v16 = v15;
      v15 = v16;
      v17 = *(unsigned int *)(a3 + 52);
      LODWORD(v17) = v17 & 0x7FFFFFFF;
      if ( v17 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        v32 = 1;
      }
    }
    if ( v15 > 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v14 & 0xFFF) == 0 )
            goto LABEL_13;
          v20 = MI_READ_PTE_LOCK_FREE(v14);
          v27 = v20;
          v24 = v20;
          if ( (v20 & 1) != 0 )
            goto LABEL_13;
          v25 = v20 & 0x400;
          if ( v32 )
          {
            if ( !v25 )
              goto LABEL_13;
          }
          else if ( v25
                 || (v24 & 0x800) != 0
                 || !(unsigned int)MiGetPagingFileOffset(&v27, v21, v22, v23)
                 || ((v24 & 4) != 0 ? (v26 = v24 >> 12 == *(_DWORD *)(a1 + 1188)) : (v26 = 0), a4 != v26) )
          {
LABEL_13:
            v11 = v29;
            v5 = v30;
            break;
          }
          v14 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16 * v12) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v13;
          MiAdvanceFaultList(a2);
          v12 = a2[3];
          if ( v12 != v28 )
          {
            v10 = v18;
            if ( v13 < v15 )
              continue;
          }
        }
        goto LABEL_13;
      }
    }
  }
  a2[4] = v5;
  result = (unsigned int)v13;
  a2[3] = v11;
  return result;
}
