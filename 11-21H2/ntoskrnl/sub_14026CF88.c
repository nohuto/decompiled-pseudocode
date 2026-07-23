/*
 * XREFs of sub_14026CF88 @ 0x14026CF88
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 * Callees:
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 */

__int64 __fastcall sub_14026CF88(__int64 a1, __int64 *a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  int v6; // ebx
  ULONG_PTR v9; // rbp
  __int16 v10; // si
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v16; // r8d
  __int64 v17; // rax
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v4 = *a2;
  v6 = 0;
  *a4 = 3;
  v18[0] = 0LL;
  v20 = 0;
  v9 = sub_140286F90(a1, v4, v18);
  if ( v9 )
  {
    v10 = 136;
    v11 = v18[0] + a3;
    if ( !v18[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (*(_BYTE *)(a1 + 62) & 0xC) != 0 )
        {
          v20 = 1;
          if ( a3 == *(_DWORD *)(v9 + 44) && !*(_QWORD *)(v9 + 8) )
            v10 = 1160;
        }
      }
    }
    v12 = sub_140311CC0(v9);
    v13 = v12;
    if ( (v10 & 0x400) != 0 )
    {
      if ( v12 >= 0 )
      {
        v14 = 1;
        goto LABEL_5;
      }
      v13 = sub_140311CC0(v9);
    }
    v14 = 0;
    if ( (v13 & 0x80000000) != 0 )
      return v13;
LABEL_5:
    if ( v20 )
    {
      if ( v14 )
      {
        LOBYTE(v6) = (*(_DWORD *)(v9 + 48) & 0xC0000000) == 0x40000000;
        *a4 = v6;
      }
      else
      {
        v16 = sub_14059F23C(v9, v11);
        if ( v16 != -1 )
        {
          while ( a3 % qword_14001C780[v16] )
          {
            if ( (unsigned int)++v16 > 1 )
            {
              v17 = sub_140287180(a1, (a3 << 12) + *a2 - 1, 0LL);
              sub_14059DF58(v9, v17);
              return v13;
            }
          }
          *a4 = v16;
        }
      }
    }
    return v13;
  }
  return 3221225503LL;
}
