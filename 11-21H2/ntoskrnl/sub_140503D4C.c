/*
 * XREFs of sub_140503D4C @ 0x140503D4C
 * Callers:
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14021A4E0 (IoBuildPartialMdl.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 */

char *__fastcall sub_140503D4C(__int64 a1, __int64 *a2, unsigned int a3, ULONG a4, char *a5, PMDL *a6)
{
  unsigned int v8; // r10d
  __int64 *v9; // rbx
  char v11; // r15
  __int64 v12; // r9
  ULONG v13; // edi
  unsigned int v14; // r13d
  int v15; // eax
  PMDL Mdl; // rax
  struct _MDL *v17; // r14
  unsigned int v19; // ecx
  __int64 *v20; // rdx
  ULONG v21; // eax
  struct _MDL *Next; // rbx
  char *result; // rax
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *p_Next; // [rsp+98h] [rbp+30h]

  v8 = a3;
  v9 = a2;
  *a6 = 0LL;
  p_Next = 0LL;
  if ( KeGetCurrentIrql() > 2u || *(_BYTE *)(a1 + 437) )
  {
LABEL_26:
    if ( *a6 )
    {
      do
      {
        Next = (*a6)->Next;
        IoFreeMdl(*a6);
        *a6 = Next;
      }
      while ( Next );
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a2 )
    {
      while ( a4 )
      {
        v12 = *((unsigned int *)v9 + 11);
        v13 = *((_DWORD *)v9 + 10) - v8;
        if ( v13 >= a4 )
          v13 = a4;
        v14 = v12 + v8;
        if ( !*(_BYTE *)(a1 + 437) )
        {
          v15 = sub_14045693C(a1) - 1;
          if ( (v15 & v14) != 0 || (v13 & v15) != 0 )
            goto LABEL_26;
        }
        VirtualAddress = (PVOID)(v8 + v12 + v9[4]);
        Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
        v17 = Mdl;
        if ( !Mdl )
          goto LABEL_26;
        if ( *a6 )
          *p_Next = Mdl;
        else
          *a6 = Mdl;
        p_Next = &Mdl->Next;
        if ( !((*((_BYTE *)v9 + 10) & 5) != 0
             ? (PVOID)v9[3]
             : MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000020u)) )
          goto LABEL_26;
        IoBuildPartialMdl((PMDL)v9, v17, VirtualAddress, v13);
        v19 = 4096 - (v14 & 0xFFF);
        v20 = &v9[((unsigned __int64)v14 >> 12) + 6];
        if ( v13 )
        {
          while ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(*v20 << 12) || *(_DWORD *)(a1 + 512) == 3 )
          {
            ++v20;
            v21 = v13;
            if ( v13 >= v19 )
              v21 = v19;
            v19 = 4096;
            a4 -= v21;
            v13 -= v21;
            if ( !v13 )
              goto LABEL_24;
          }
          goto LABEL_26;
        }
LABEL_24:
        v9 = (__int64 *)*v9;
        v8 = 0;
        if ( !v9 )
          break;
      }
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}
