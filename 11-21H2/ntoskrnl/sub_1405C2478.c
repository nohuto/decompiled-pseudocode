/*
 * XREFs of sub_1405C2478 @ 0x1405C2478
 * Callers:
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 */

void __fastcall sub_1405C2478(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rbp
  ULONG_PTR v5; // rdi
  unsigned int v6; // r13d
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // r12d
  int v16; // eax
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // ebp
  __int64 v22; // r15
  __int64 v23; // r9
  __int64 v24; // r14
  _QWORD *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  sub_14026E1F4(a2);
  v3 = sub_14033D7D0(*(_DWORD *)(a1 + 36));
  v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v3;
  v7 = *(unsigned int *)(a1 + 48);
  if ( v5 != -1LL )
  {
    v8 = 48 * v5 - 0x220000000000LL;
    if ( (*(_BYTE *)(v8 + 34) & 7u) <= 1 && (unsigned int)sub_140235E10(v8) == (_DWORD)v7 )
    {
      v30 = 0;
      v9 = *(_QWORD *)(a1 + 56);
      v10 = qword_14001C780[v7];
      if ( v9 )
      {
        v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)v7 < 2 )
        {
          v12 = (unsigned int)(2 - v7);
          do
          {
            v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v12;
          }
          while ( v12 );
        }
        v13 = (v11 >> 3) & 0x1FF;
        if ( v4 > v10 * (512 - v13) )
          v4 = v10 * (512 - v13);
      }
      v14 = sub_1403872A4(*(_QWORD *)(a1 + 8), v5, v7, v4 / v10, 0, &v30);
      if ( v14 )
      {
        v15 = 1;
LABEL_19:
        v21 = 0;
        do
        {
          v22 = *(_QWORD *)v14;
          v23 = (unsigned int)sub_140235E10(v14);
          v24 = qword_14001C780[v23];
          v25 = &v31[3 * v23];
          v26 = (__int64 *)v25[1];
          if ( (_QWORD *)*v26 != v25 )
            __fastfail(3u);
          *(_QWORD *)v14 = v25;
          *(_QWORD *)(v14 + 8) = v26;
          *v26 = v14;
          v25[1] = v14;
          ++v25[2];
          *(_QWORD *)(a1 + 72) += v24;
          v27 = *(_QWORD *)(a1 + 56);
          if ( v27 )
          {
            v28 = v27 + (v24 << 12);
            *(_QWORD *)(a1 + 56) = v28;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v15 )
          {
            v29 = *(_QWORD *)(a1 + 40);
            if ( v29 + v24 > v29 )
            {
              if ( v28 && (_DWORD)v23 && ((v28 >> 12) & qword_14001C780[(unsigned int)(v23 - 1)]) == 0 )
                v21 = 1;
            }
            else
            {
              v21 = 1;
            }
            *(_QWORD *)(a1 + 40) = v29 + v24;
            if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v6 )
              sub_14026873C(0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), v24, v6);
          }
          sub_1402C38D0(*(_QWORD *)(a1 + 8), 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), v24, 1, 1);
          v14 = v22;
        }
        while ( v22 );
        if ( v21 )
          *(_QWORD *)(a1 + 40) = -1LL;
        return;
      }
    }
    *(_QWORD *)(a1 + 40) = -1LL;
  }
  v15 = 0;
  v16 = ~(unsigned __int8)(*(_DWORD *)a1 >> 1) & 4;
  if ( KeGetCurrentIrql() < 2u && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
    v16 |= 0x40u;
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_DWORD *)(a1 + 32);
  v19 = v16 | 1;
  v20 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)a1 & 1) == 0 )
    v19 = v16;
  *(_QWORD *)(a1 + 40) = -1LL;
  v14 = sub_1402662A0(*(_QWORD *)(a1 + 8), v18, v20 - *(_QWORD *)(a1 + 72), v17, *(_QWORD *)(a1 + 56), 1, v19, v6);
  if ( v14 )
    goto LABEL_19;
}
