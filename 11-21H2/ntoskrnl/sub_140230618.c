/*
 * XREFs of sub_140230618 @ 0x140230618
 * Callers:
 *     sub_1402305F0 @ 0x1402305F0 (sub_1402305F0.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140230618(PDMA_ADAPTER DmaAdapter, _QWORD *P, char a3)
{
  _DWORD *v3; // rbx
  PVOID v5; // rcx
  __int64 *v6; // rdi
  void *v7; // rsi
  ULONG v8; // r14d
  _QWORD *v9; // r13
  unsigned int v10; // eax
  __int64 *v12; // rcx
  ULONG v13; // edx
  ULONG Length; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r12
  char Size; // r14
  ULONG v19; // eax
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct _MDL *v25; // rdi
  struct _MDL *Next; // rsi
  _DWORD *v27; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+88h] [rbp+10h]
  PDMA_OPERATIONS DmaOperations; // [rsp+98h] [rbp+20h]

  v3 = (_DWORD *)P[1];
  v27 = v3;
  if ( !v3 )
  {
    v5 = P;
LABEL_5:
    ExFreePoolWithTag(v5, 0);
    return;
  }
  if ( v3 != (_DWORD *)1 )
  {
    v6 = (__int64 *)*((_QWORD *)v3 + 1);
    v7 = (void *)*((_QWORD *)v3 + 4);
    v8 = v3[10];
    v9 = (_QWORD *)*((_QWORD *)v3 + 3);
    v10 = *((_DWORD *)v6 + 8) + *((_DWORD *)v6 + 10) + *((_DWORD *)v6 + 11) - (_DWORD)v7;
    if ( v8 )
    {
      do
      {
        if ( v10 )
        {
          v12 = (__int64 *)*v6;
          v13 = v8;
          if ( v10 <= v8 )
            v13 = v10;
          Length = v8;
          if ( v12 )
            Length = v13;
          v28 = v12 != 0LL ? v8 - v13 : 0;
          IoFlushAdapterBuffers(DmaAdapter, (PMDL)v6, v9, v7, Length, a3);
          v17 = ((unsigned __int16)v7 & 0xFFF) + (v6[(unsigned int)(((unsigned __int64)v7 - v6[4]) >> 12) + 6] << 12);
          Size = DmaAdapter[27].Size;
          DmaOperations = DmaAdapter[8].DmaOperations;
          do
          {
            if ( Size )
              v19 = sub_14045699C((_DWORD)DmaAdapter, (_DWORD)v6, (_DWORD)v9, (_DWORD)v7, a3, Length);
            else
              v19 = Length;
            v20 = v19;
            Length -= v19;
            v21 = v19 + v17;
            if ( (unsigned __int64)DmaOperations < v21 - 1
              || !a3
              && !*((_BYTE *)&DmaAdapter[27].Size + 3)
              && ((v22 = (unsigned int)sub_14045693C(DmaAdapter, v15, v16, v21) - 1, (v22 & v17) != 0)
               || (v21 & v22) != 0) )
            {
              v23 = ((unsigned __int64)((unsigned __int16)v7 & 0xFFF) + v20 + 4095) >> 12;
              if ( (_DWORD)v23 )
              {
                v24 = (unsigned int)v23;
                do
                {
                  v9 = (_QWORD *)v9[1];
                  --v24;
                }
                while ( v24 );
              }
            }
            LODWORD(v7) = v20 + (_DWORD)v7;
            v17 = v21;
          }
          while ( Length );
          v8 = v28;
        }
        v6 = (__int64 *)*v6;
        if ( !v6 )
          break;
        v7 = (void *)(v6[4] + *((unsigned int *)v6 + 11));
        v10 = *((_DWORD *)v6 + 10);
      }
      while ( v8 );
      v3 = v27;
    }
    IoFreeMapRegisters(DmaAdapter, *((PVOID *)v3 + 3), v3[11]);
    v25 = (struct _MDL *)*((_QWORD *)v3 + 2);
    if ( v25 )
    {
      do
      {
        Next = v25->Next;
        if ( (v25->MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v25->MappedSystemVa, v25);
        IoFreeMdl(v25);
        v25 = Next;
      }
      while ( Next );
    }
    if ( (*v3 & 1) == 0 )
    {
      v5 = v3;
      goto LABEL_5;
    }
  }
}
