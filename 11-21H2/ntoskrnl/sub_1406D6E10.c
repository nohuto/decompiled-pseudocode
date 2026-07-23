/*
 * XREFs of sub_1406D6E10 @ 0x1406D6E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_140689BB8 @ 0x140689BB8 (sub_140689BB8.c)
 *     sub_1406D6F24 @ 0x1406D6F24 (sub_1406D6F24.c)
 *     sub_1406D6FD0 @ 0x1406D6FD0 (sub_1406D6FD0.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 */

char __fastcall sub_1406D6E10(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140C01B14;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = sub_14071B350(v6);
      if ( !v7 )
        break;
      v8 = -1LL;
      v9 = sub_1402F5718();
      if ( (unsigned __int8)sub_1406D6F24(v7) )
      {
        v11 = sub_140689BB8((unsigned int *)v7);
        if ( (int)sub_1406885A4(v7, *(_DWORD *)(v7 + 180) < v11 ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = v9 + 10000000LL * (unsigned int)dword_140C01B1C;
        }
      }
      else if ( *(_DWORD *)(v7 + 128) )
      {
        if ( (*(_DWORD *)(v7 + 160) & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = *(_QWORD *)(v7 + 4144) + 10000000LL * (unsigned int)dword_140C01B10;
          if ( v9 < v10 )
            v8 = v10 - v9;
        }
      }
      v6 = v7;
      if ( v8 >= v3 )
        v8 = v3;
      v3 = v8;
    }
    sub_1406D6FD0();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
