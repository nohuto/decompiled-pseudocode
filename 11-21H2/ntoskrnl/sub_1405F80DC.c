/*
 * XREFs of sub_1405F80DC @ 0x1405F80DC
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140379950 @ 0x140379950 (sub_140379950.c)
 *     sub_14038217C @ 0x14038217C (sub_14038217C.c)
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 */

__int64 __fastcall sub_1405F80DC(__int64 a1)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // r14d
  unsigned int v5; // esi
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  _WORD *v9; // r15
  _WORD *v10; // r12
  _WORD *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // rax
  int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+88h] [rbp+10h]
  _WORD *v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v24 = v1;
  v3 = 0;
  sub_1405F9824(a1, 0LL, 0LL);
  v5 = (unsigned int)(v1 - 4096) >> 4;
  v6 = 0;
  v23 = v5;
  v7 = sub_1402F5718();
  v8 = *(_QWORD *)(a1 + 1032);
  v26 = v7;
  v9 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 1096));
  v25 = v9;
  v10 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_29;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6592LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL)
        && (v6 & 7) == 0
        && v6 )
      {
        v12 = sub_1402F5718() - v26;
        if ( !(v13 >= 0x40 ? v12 < 0x1C9C380 : v12 < 0x2FAF080) )
          break;
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_27;
      v15 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( !sub_14038770C(*(_QWORD *)(a1 + 800), v15) )
      {
        v17 = v16 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v17 = 0;
        if ( (_DWORD)v15 == *(_DWORD *)(a1 + 16 * (v17 + 78LL)) )
          goto LABEL_26;
        ++v6;
        if ( (int)sub_14038FC10(a1, 0LL, v15, 0LL, v15, 0) >= 0 )
          goto LABEL_24;
        if ( (unsigned int)sub_14038217C(a1, 2) != 2 )
          break;
        v18 = sub_1403790A8(a1, v15, 0, 1);
        if ( v18 )
        {
          if ( v18 != -1 )
          {
            if ( (int)sub_14038FC10(a1, v18, v15, v18, v15, 0) < 0 )
              __int2c();
            sub_140379950(a1, v15, v19);
LABEL_24:
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6216LL) + 8LL * (unsigned int)v15);
            if ( v21 >= 0 )
            {
              v20 = (16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000;
              sub_140395958(v20 + (v21 & 0x7FFFFFFFFFFF0000LL), v24 - v20);
            }
            goto LABEL_26;
          }
        }
      }
      v3 = 1;
LABEL_26:
      v5 = v23;
LABEL_27:
      ++v11;
    }
    while ( v11 < v10 );
    v9 = v25;
    v5 = v23;
LABEL_29:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1032) )
      {
        v10 = v9;
        v25 = *(_WORD **)(a1 + 1032);
        v9 = v25;
        continue;
      }
    }
    else
    {
      v2 = ((__int64)v11 - *(_QWORD *)(a1 + 1032)) >> 1;
    }
    break;
  }
  *(_DWORD *)(a1 + 1096) = v2;
  return v3 != 0 ? 0xC000022D : 0;
}
