/*
 * XREFs of sub_140A0FC24 @ 0x140A0FC24
 * Callers:
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 * Callees:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     sub_1407E4008 @ 0x1407E4008 (sub_1407E4008.c)
 */

__int64 __fastcall sub_140A0FC24(int *a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  void **v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  const void *v22; // r15
  unsigned __int64 v23; // rax
  unsigned int v24; // r14d
  unsigned __int64 v25; // rcx
  unsigned int *Source1; // [rsp+68h] [rbp-40h]
  SIZE_T Length; // [rsp+C8h] [rbp+20h]

  v5 = *a1;
  if ( *a1 == 1 )
  {
    Source1 = (unsigned int *)*((_QWORD *)a1 + 1);
    v6 = 16LL * Source1[60];
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = 16 * Source1[60];
    v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v6 > 0xFFFFFFFF )
      goto LABEL_54;
    v9 = v7 + 248;
    v10 = -1;
    if ( v7 + 248 >= v7 )
      v10 = v7 + 248;
    v8 = v9 < v7 ? 0xC0000095 : 0;
    if ( v9 < v7 )
      goto LABEL_54;
    v11 = 1;
    Length = 248LL;
  }
  else
  {
    if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
      sub_14042A5E0(15104858LL, &qword_14000FFC8);
    if ( v5 )
    {
      v8 = -1073741811;
      goto LABEL_54;
    }
    Source1 = (unsigned int *)*((_QWORD *)a1 + 1);
    v12 = 12LL * Source1[60];
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = 12 * Source1[60];
    v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_54;
    v14 = v13 + 244;
    v10 = -1;
    if ( v13 + 244 >= v13 )
      v10 = v13 + 244;
    v8 = v14 < v13 ? 0xC0000095 : 0;
    if ( v14 < v13 )
      goto LABEL_54;
    v11 = 0;
    Length = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v11;
  *(_DWORD *)(a3 + 52) = a1[1];
  v15 = (void **)(a3 + 56);
  v8 = sub_1407E3010(v10, (_QWORD *)(a3 + 56));
  if ( v8 >= 0 )
  {
    if ( v10 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      v17 = v16 + v10;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v15, *(const void **)(a2 + 8), v10);
    v8 = sub_1407E4008(*(PVOID *)(a2 + 8), v10, 1);
    if ( v8 >= 0 )
    {
      v8 = sub_1407E2020((char *)*v15, v10);
      if ( v8 >= 0 )
      {
        if ( RtlCompareMemory(Source1, *v15, Length) != Length )
        {
          v8 = -1073741811;
          goto LABEL_54;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v18 = *v15;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          v19 = v18[12];
          v20 = v18[11];
        }
        else
        {
          if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
            sub_14042A5E0(15104858LL, &qword_14000FFC8);
          if ( *(_DWORD *)(a3 + 48) )
          {
            v8 = -1073741811;
            goto LABEL_54;
          }
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
            sub_14042A5E0(15104858LL, &qword_14000FFC8);
          if ( *(_DWORD *)(a3 + 48) )
          {
            v8 = -1073741811;
            goto LABEL_54;
          }
          v19 = *((_DWORD *)*v15 + 12);
          v20 = *((_DWORD *)*v15 + 11);
        }
        v21 = v20 & 0xFFFFFFF;
        if ( !v19 )
        {
LABEL_50:
          *(_DWORD *)(a3 + 16) = 1;
          goto LABEL_54;
        }
        v22 = (const void *)(*(_QWORD *)(a3 + 32) + v21);
        v23 = 4LL * v19;
        v24 = -1;
        if ( v23 <= 0xFFFFFFFF )
          v24 = 4 * v19;
        v8 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v23 <= 0xFFFFFFFF )
        {
          if ( v24 )
          {
            v25 = (unsigned __int64)v22 + v24;
            if ( v25 > 0x7FFFFFFF0000LL || v25 < (unsigned __int64)v22 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v8 = sub_1407E3010(v24, (_QWORD *)(a3 + 40));
          if ( v8 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v22, v24);
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_54:
  *(_DWORD *)(a3 + 20) = v8;
  return (unsigned int)v8;
}
