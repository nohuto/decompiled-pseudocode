/*
 * XREFs of sub_1405FF390 @ 0x1405FF390
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1402344C0 (MmMdlPageContentsState.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140384A00 @ 0x140384A00 (sub_140384A00.c)
 *     sub_1405FF02C @ 0x1405FF02C (sub_1405FF02C.c)
 *     sub_1405FF070 @ 0x1405FF070 (sub_1405FF070.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_1405FF390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  ULONG_PTR v13; // r11
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // rdx
  __int64 v24; // rdx
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+48h] [rbp-20h]
  char v28; // [rsp+4Ch] [rbp-1Ch]
  __int16 v29; // [rsp+4Dh] [rbp-1Bh]
  char v30; // [rsp+4Fh] [rbp-19h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0LL;
  v29 = 0;
  v30 = 0;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !*(_QWORD *)v9 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v9 + 40) != -1 )
    {
      result = MmMdlPageContentsState(v9, 2u);
      if ( (_DWORD)result == 1 )
      {
        result = *(_QWORD *)(a1 + 168);
        v10 = *(_QWORD *)(result + 8);
        if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        {
          v11 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
          v11 = result;
        }
        if ( v11 )
        {
          v12 = sub_1405FF02C(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( v12 )
          {
            v14 = *(_BYTE *)(v13 + 67);
            if ( v14 == *(_BYTE *)(v13 + 66) || *((_BYTE *)v12 + 28) == v14 )
            {
              *(_OWORD *)v12 = 0LL;
              *((_OWORD *)v12 + 1) = 0LL;
              v12 = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
              v13 = *(_QWORD *)(a1 + 168);
            }
          }
          result = *(_QWORD *)(v13 + 8);
          if ( !v12 )
          {
            v15 = sub_140384A00(v11, *(unsigned int *)(result + 40), 0LL, (__int64)&off_1400016D0);
            v16 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v25 + 1) = v15;
            v26 = v11;
            *(_QWORD *)&v25 = *(_QWORD *)(v16 + 8);
            v27 = *(_DWORD *)(v25 + 40);
            v28 = *(_BYTE *)(v16 + 67);
            return sub_1405FF070(a2, &v25);
          }
          v17 = *((unsigned int *)v12 + 6);
          v18 = *(_DWORD *)(result + 40);
          if ( (_DWORD)v17 == v18 )
          {
            v20 = *(unsigned int *)(result + 40);
          }
          else
          {
            v19 = v12[2];
            if ( v11 < v19 || (v20 = v18, v21 = v19 + v17, result = v20 + v11, v20 + v11 > v21) )
            {
              v22 = v13;
              LOBYTE(v5) = *(_BYTE *)a3 != 4;
              v23 = v5 + 4112;
              return sub_140A8C924(0xC4u, v23, *(_QWORD *)(a3 + 40), v22, v11);
            }
          }
          if ( (dword_140C29FC0 & 0x4000) != 0 )
          {
            result = sub_140384A00(v11, v20, 0LL, (__int64)&off_1400016D0);
            v24 = result;
            if ( v12[1] != result )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v23 = 4112LL;
              }
              else
              {
                result = *(unsigned int *)(a3 + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
                {
                  v12[1] = v24;
                  return result;
                }
                v23 = 4113LL;
              }
              v22 = *(_QWORD *)(a1 + 168);
              return sub_140A8C924(0xC4u, v23, *(_QWORD *)(a3 + 40), v22, v11);
            }
          }
        }
      }
    }
  }
  return result;
}
