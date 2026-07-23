/*
 * XREFs of sub_14024576C @ 0x14024576C
 * Callers:
 *     sub_1402452D4 @ 0x1402452D4 (sub_1402452D4.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall sub_14024576C(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  unsigned int v3; // esi
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r14
  int FirstSetRightGroupAffinity; // eax
  int v10; // r8d
  int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 232);
  v18 = 0LL;
  v2 = *(_DWORD *)(v1 + 164);
  v3 = *(_DWORD *)(v1 + 156);
  if ( v2 == *(_DWORD *)(v1 + 160) )
  {
    ++dword_140C296E4;
    return 3LL;
  }
  else if ( v3 == v2 )
  {
    ++dword_140C296E0;
    return 4LL;
  }
  else
  {
    v5 = (unsigned int)dword_140C50728;
    v6 = 0;
    v7 = *(_DWORD *)(v1 + 156);
    if ( v3 )
    {
      v8 = 0LL;
      do
      {
        if ( (*(_BYTE *)(v8 + *(_QWORD *)(v1 + 144) + 4) & 2) != 0 )
        {
          v18 = *(_OWORD *)(*(_QWORD *)(v8 + *(_QWORD *)(v1 + 144) + 8) + 280LL);
          FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(&v18);
          v10 = 0;
          v11 = FirstSetRightGroupAffinity;
          if ( (_DWORD)v5 )
          {
            v12 = v5;
            do
            {
              v13 = qword_140D088C0[v11];
              v14 = *(_QWORD *)(v13 + 8);
              v15 = *(_QWORD *)(v13 + 24);
              v16 = v10 + 1;
              if ( v14 != v15 )
                v16 = v10;
              ++v11;
              v10 = v16;
              --v12;
            }
            while ( v12 );
          }
          if ( v10 == (_DWORD)v5 )
          {
            ++*(_DWORD *)(v1 + 276);
            goto LABEL_19;
          }
          if ( v10 )
            v7 = v6;
        }
        ++v6;
        v8 += 40LL;
      }
      while ( v6 < v3 );
    }
    v6 = v7;
    if ( v7 == v3 )
    {
      ++*(_DWORD *)(v1 + 284);
      return 2LL;
    }
    else
    {
      ++*(_DWORD *)(v1 + 280);
LABEL_19:
      v17 = *(_QWORD *)(v1 + 144);
      ++*(_DWORD *)(v1 + 164);
      *(_BYTE *)(v17 + 40LL * v6 + 4) &= ~2u;
      KeSetEvent((PRKEVENT)(v17 + 40LL * v6 + 16), 0, 0);
      return 0LL;
    }
  }
}
