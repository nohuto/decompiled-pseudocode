/*
 * XREFs of sub_1407D9CC0 @ 0x1407D9CC0
 * Callers:
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14035FAC0 @ 0x14035FAC0 (sub_14035FAC0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407DA200 @ 0x1407DA200 (sub_1407DA200.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 */

__int64 __fastcall sub_1407D9CC0(unsigned __int64 *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int8 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // edx
  PEPROCESS v18; // r9
  unsigned __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+10h] BYREF

  v3 = *Src;
  v5 = *Src;
  Process = 0LL;
  if ( (v5 & 0x1F000) == 0xA000LL )
  {
    v6 = Src[4];
    v7 = -1;
    v8 = 2LL;
    v20 = 0LL;
    if ( (v6 & 0x7FFFFFFFFFFFFFFFuLL) < 0xFF )
      v7 = v6;
    if ( v6 >= 0 )
      v8 = 4098LL;
    v9 = *((unsigned int *)Src + 12);
    DWORD2(v20) = v7 | (*((_DWORD *)Src + 12) << 8);
    v10 = Src[5];
    v11 = Src[3] << 12;
    *(_QWORD *)&v20 = v8 & 0xFFFFFFFF00FFFFFFuLL | v9 & 0xFFFFFFFFFF000000uLL;
    v21 = v11 | 1;
    v12 = sub_1407DA200(v10, (unsigned int)&v21, (unsigned int)&v20, (int)Src + 24, 1);
    if ( v12 )
    {
      v13 = ((qword_140C4E9B8 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
          + 40LL * (*(unsigned __int16 *)(v12 + 10) - (unsigned int)*(unsigned __int16 *)(qword_140C4E9B8 + 36));
      if ( (*(_BYTE *)(v13 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v18 = Process;
        if ( ((*((_QWORD *)Process + 136) ^ *((_QWORD *)Process + 141)) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && sub_14035FAC0((__int64)Process) )
        {
          v19 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v13 + 8) = v19;
          *(_QWORD *)(v13 + 8) = v19 & 7 | (8LL * (*((_QWORD *)v18 + 136) ^ *((_QWORD *)v18 + 141)));
          *(_DWORD *)(v13 + 20) = *((_DWORD *)v18 + 381);
          *(_DWORD *)(v13 + 16) = *((_DWORD *)v18 + 272);
        }
        ObfDereferenceObjectWithTag(v18, 0x746C6644u);
      }
      return 0LL;
    }
    else
    {
      return 3221225864LL;
    }
  }
  else
  {
    v15 = qword_140C4E990;
    v16 = (v3 >> 2) & 0x3FF;
    if ( (unsigned int)(v16 + *(_DWORD *)(qword_140C4E990 + 16)) > *(_DWORD *)(qword_140C4E990 + 20) )
    {
      while ( (unsigned int)sub_1407DA854(&unk_140C4E978, a2, a3, v15) != -1073741823 )
      {
        v15 = qword_140C4E990;
        if ( (unsigned int)(v16 + *(_DWORD *)(qword_140C4E990 + 16)) <= *(_DWORD *)(qword_140C4E990 + 20) )
          goto LABEL_10;
      }
      return 3221225626LL;
    }
    else
    {
LABEL_10:
      v17 = *(_DWORD *)(v15 + 16);
      *(_DWORD *)(v15 + 16) = v17 + v16;
      memmove((void *)(16LL * v17 + ((v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL)), Src, (unsigned int)(16 * v16));
      return 0LL;
    }
  }
}
