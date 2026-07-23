/*
 * XREFs of sub_14031C5D0 @ 0x14031C5D0
 * Callers:
 *     sub_140247F34 @ 0x140247F34 (sub_140247F34.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

char __fastcall sub_14031C5D0(__int64 a1)
{
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  BOOL v5; // r14d
  int v6; // r15d
  __int64 v7; // rbp
  unsigned __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  PMDL v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  PVOID MappedSystemVa; // r8
  char v21; // cl
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(CurrentThread) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)CurrentThread == 1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v25 = v3;
    CurrentThread = ((unsigned __int64)sub_140317A10((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFFLL;
    if ( CurrentThread > qword_140C50840 )
    {
      v5 = 0;
    }
    else
    {
      v4 = *(_QWORD *)(48 * CurrentThread - 0x21FFFFFFFFD8LL);
      LOBYTE(CurrentThread) = 1;
      v5 = (v4 & 0x40000000000000LL) != 0;
    }
    v6 = *(_DWORD *)(a1 + 96);
    if ( v6 != 3 )
    {
      v7 = 0LL;
      v25 = v3 & 0xF0F0000000000FFFuLL;
      for ( i = *(_QWORD *)(a1 + 24) + 8LL; (i & 0xFFF) != 0 && i <= *(_QWORD *)(a1 + 32); i += 8LL )
      {
        v9 = *(_QWORD *)i;
        LOBYTE(CurrentThread) = 0;
        if ( i >= 0xFFFFF6FB7DBED000uLL )
        {
          LOBYTE(CurrentThread) = -8;
          if ( i <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
          {
            CurrentThread = (unsigned __int64)KeGetCurrentThread();
            if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 912LL) != 1
              && (v9 & 1) != 0
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              CurrentThread = (unsigned __int64)KeGetCurrentThread();
              v17 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1928LL);
              if ( v17 )
              {
                CurrentThread = *(_QWORD *)(v17 + 8 * ((i >> 3) & 0x1FF));
                v18 = v9 | 0x20;
                if ( (CurrentThread & 0x20) == 0 )
                  v18 = *(_QWORD *)i;
                v9 = v18;
                if ( (CurrentThread & 0x42) != 0 )
                  v9 = v18 | 0x42;
              }
            }
          }
        }
        v23 = v9;
        if ( (v9 & 0xF0F0000000000FFFuLL) != v25 )
          break;
        CurrentThread = ((unsigned __int64)sub_140317A10((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
        if ( CurrentThread <= qword_140C50840
          && (v10 = 48 * CurrentThread,
              LOBYTE(CurrentThread) = 40,
              (*(_QWORD *)(v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0) )
        {
          if ( !v5 )
            break;
          LOBYTE(CurrentThread) = 0;
          v11 = MemoryDescriptorList;
          v12 = v10 - 0x220000000000LL;
          if ( MemoryDescriptorList )
          {
            LOBYTE(CurrentThread) = (*(_QWORD *)(v12 + 40) >> 60) & 7;
            if ( (_BYTE)CurrentThread == 1 )
            {
              LOBYTE(CurrentThread) = -85;
              v19 = 0xAAAAAAAAAAAAAAABuLL * (v10 >> 4);
              if ( MemoryDescriptorList )
              {
                do
                {
                  MappedSystemVa = v11->MappedSystemVa;
                  if ( v19 >= (unsigned __int64)MappedSystemVa )
                  {
                    LOBYTE(CurrentThread) = v19 - (_BYTE)MappedSystemVa;
                    if ( (PVOID)(v19 - (unsigned __int64)MappedSystemVa) < v11->StartVa )
                      goto LABEL_23;
                    v11 = *(PMDL *)&v11->Size;
                  }
                  else
                  {
                    v11 = v11->Next;
                  }
                }
                while ( v11 );
              }
            }
          }
          v13 = *(_QWORD *)(v12 + 40);
          if ( v13 >= 0 )
          {
            if ( (v13 & 0x10000000000LL) != 0 )
            {
              LODWORD(v23) = 0;
              v24 = 0;
              LODWORD(CurrentThread) = sub_140235D34(v12, (int *)&v23, &v24);
              if ( (_DWORD)CurrentThread == 3 || (_DWORD)v23 != 6 )
                break;
            }
            else
            {
              v14 = (__int64)(*(_QWORD *)(v12 + 8) << 25) >> 16;
              LOBYTE(CurrentThread) = 0;
              if ( v14 >= 0xFFFFF68000000000uLL )
              {
                LOBYTE(CurrentThread) = -1;
                if ( v14 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  LOBYTE(CurrentThread) = -2;
                  if ( (v13 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
                  {
                    v21 = *(_BYTE *)(v12 + 34);
                    if ( ((v21 & 0x20) == 0
                       || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                       || !*(_WORD *)(v12 + 32))
                      && (v21 & 8) == 0 )
                    {
                      CurrentThread = (*(_QWORD *)v12 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
                      if ( CurrentThread != 0xFFFF800000000030uLL )
                        break;
                    }
                  }
                }
              }
            }
          }
          if ( !v6 )
          {
            v15 = *(_QWORD *)(v12 + 40);
            LOBYTE(CurrentThread) = ((unsigned __int64)v15 >> 60) & 7;
            if ( (_BYTE)CurrentThread != 1 && (v15 & 0x10000000000LL) == 0 )
            {
              CurrentThread = *(_QWORD *)(v12 + 8);
              if ( (CurrentThread & 0x8000000000000000uLL) == 0LL )
              {
                if ( CurrentThread )
                  break;
              }
            }
            if ( v15 < 0 )
            {
              LODWORD(CurrentThread) = *(_DWORD *)(a1 + 72);
              if ( (CurrentThread & 0x10) != 0 )
                break;
            }
          }
        }
        else if ( v5 )
        {
          break;
        }
        ++v7;
      }
LABEL_23:
      if ( v7 )
      {
        v16 = (__int64)(*(_QWORD *)(a1 + 24) << 25) >> 16;
        *(_QWORD *)(a1 + 152) = v16;
        *(_QWORD *)(a1 + 168) = -1LL;
        CurrentThread = v16 + (v7 << 12) + 4095;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 160) = CurrentThread;
      }
    }
  }
  return CurrentThread;
}
