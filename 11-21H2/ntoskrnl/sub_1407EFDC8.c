/*
 * XREFs of sub_1407EFDC8 @ 0x1407EFDC8
 * Callers:
 *     sub_14036A8F0 @ 0x14036A8F0 (sub_14036A8F0.c)
 *     sub_140989CF0 @ 0x140989CF0 (sub_140989CF0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 */

char __fastcall sub_1407EFDC8(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  unsigned int v12; // edx
  int v13; // edi
  bool v14; // r14
  int v15; // esi
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD Src[20]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 6LL * (int)a2;
  v7 = *((_DWORD *)&off_140C03680 + 12 * (int)a2 + 2);
  v8 = v7 + 1;
  v9 = v7 - 1;
  if ( a3 )
    v9 = v8;
  *((_DWORD *)&off_140C03680 + 12 * (int)a2 + 2) = v9;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( a2 <= 3 )
      {
        v10 = byte_140C24524 == 0;
        *(_BYTE *)((int)a2 + a1 + 153) = a3;
        if ( !v10 )
        {
          memset(Src, 0, 0x48uLL);
          Src[2] = *(_DWORD *)(a1 + 36);
          Src[0] = 16;
          Src[3] = a2;
          LOBYTE(Src[4]) = a3;
          LOBYTE(v9) = sub_14036AF00(Src, 0x48uLL, 0);
        }
      }
    }
  }
  v11 = *((_DWORD *)&off_140C03680 + 2 * v6 + 3);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      v12 = v11 | 4;
      *((_DWORD *)&off_140C03680 + 2 * v6 + 3) = v12;
      v13 = 0;
      while ( 1 )
      {
        v14 = *((_DWORD *)&off_140C03680 + 2 * v6 + 2) != 0;
        v15 = v12 & 2;
        LOBYTE(v9) = v15 != 0;
        if ( (v15 != 0) == v14 )
          break;
        sub_1402935D0((ULONG_PTR)&qword_140C24280);
        sub_14042A5E0(0LL, a2);
        sub_140753094(1);
        v12 = *((_DWORD *)&off_140C03680 + 2 * v6 + 3) & 0xFFFFFFFD | (2 * v14);
        *((_DWORD *)&off_140C03680 + 2 * v6 + 3) = v12;
        if ( v15 )
        {
          if ( (unsigned int)++v13 >= 3 )
          {
            ++*((_DWORD *)&off_140C03680 + 2 * v6 + 2);
            v17[0] = 0LL;
            v17[1] = -1LL;
            *((_DWORD *)&off_140C03680 + 2 * v6 + 3) = v12 | 8;
            LOBYTE(v9) = KeSetTimer2((__int64)&unk_140C24380, -50000000LL, 0LL, (__int64)v17);
            v12 = *((_DWORD *)&off_140C03680 + 2 * v6 + 3);
            break;
          }
        }
      }
      *((_DWORD *)&off_140C03680 + 2 * v6 + 3) = v12 & 0xFFFFFFFB;
    }
  }
  else
  {
    sub_1402935D0((ULONG_PTR)&qword_140C24280);
    sub_14042A5E0(a1, a2);
    LOBYTE(v9) = (unsigned __int8)sub_140753094(1);
  }
  return v9;
}
