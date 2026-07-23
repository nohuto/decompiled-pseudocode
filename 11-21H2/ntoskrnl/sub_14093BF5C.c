/*
 * XREFs of sub_14093BF5C @ 0x14093BF5C
 * Callers:
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055A6A0 @ 0x14055A6A0 (sub_14055A6A0.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 */

__int64 __fastcall sub_14093BF5C(__int64 a1)
{
  unsigned int v1; // edi
  void **v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // r11
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 1052) = 0x10000000;
  v2 = (void **)(a1 + 1040);
  *(_QWORD *)(a1 + 1072) = 0LL;
  v20 = 0LL;
  sub_14042A5E0(2LL, 0LL);
  v4 = *(_DWORD *)(a1 + 1080);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1072);
    if ( v5 )
    {
      sub_14093C268(a1, v5, v4);
      v4 = *(_DWORD *)(a1 + 1080);
    }
    *(_QWORD *)(a1 + 1072) = 0LL;
    *(_DWORD *)(a1 + 1080) = 0;
    *(_DWORD *)(a1 + 1048) = 0;
    v6 = sub_140829CBC(v4, -1, 0LL, 0);
    *v2 = (void *)v6;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 936);
      v8 = *(_QWORD *)(a1 + 928);
      v9 = *(_QWORD *)(a1 + 920);
      *(_DWORD *)(a1 + 1048) = v4;
      if ( sub_14055A6A0(v9, v8, v7) )
        return (unsigned int)-1073741248;
      sub_14093C268(a1, v10, (v4 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      memset(*v2, 0, *(unsigned int *)(a1 + 1048));
      if ( (int)sub_14042A5E0(&v20, v11) >= 0 )
      {
        if ( (_QWORD)v20 )
        {
          if ( *((_QWORD *)&v20 + 1) )
          {
            sub_14093C268(a1, v20, *((_QWORD *)&v20 + 1));
            v12 = *((_QWORD *)&v20 + 1);
            *(_QWORD *)(a1 + 1024) = 0LL;
            *(_DWORD *)(a1 + 1032) = 0;
            *(_DWORD *)(a1 + 1000) = 0;
            v13 = sub_140829CBC(v12, -1, 0LL, 0);
            *(_QWORD *)(a1 + 992) = v13;
            if ( v13 )
            {
              v14 = *(_QWORD *)(a1 + 936);
              v15 = *(_QWORD *)(a1 + 928);
              v16 = *(_QWORD *)(a1 + 920);
              *(_DWORD *)(a1 + 1000) = DWORD2(v20);
              if ( !sub_14055A6A0(v16, v15, v14) )
              {
                sub_14093C268(a1, v18, (v17 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
                memset(*(void **)(a1 + 992), 0, *(unsigned int *)(a1 + 1000));
                return v1;
              }
              return (unsigned int)-1073741248;
            }
          }
        }
      }
    }
  }
  return v1;
}
