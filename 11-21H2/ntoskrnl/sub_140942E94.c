/*
 * XREFs of sub_140942E94 @ 0x140942E94
 * Callers:
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 */

__int64 __fastcall sub_140942E94(__int64 a1, int a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  int v6; // esi
  int v7; // ebx
  int v8; // r12d
  unsigned __int64 v9; // rdi
  _WORD *v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r11
  unsigned __int16 *v19; // r12
  unsigned __int16 *v20; // r13
  WCHAR *v21; // r15
  _WORD *v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  WCHAR *v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-30h]
  _QWORD *v27; // [rsp+50h] [rbp-28h]
  unsigned __int16 *v28; // [rsp+58h] [rbp-20h]
  __int64 *v29; // [rsp+60h] [rbp-18h]
  unsigned __int64 v30; // [rsp+C0h] [rbp+48h] BYREF
  int v31; // [rsp+C8h] [rbp+50h]
  _WORD *v32; // [rsp+D0h] [rbp+58h]
  unsigned int v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = *(_QWORD *)(a1 + 32);
  v30 = 0LL;
  v6 = 0;
  v24 = a4;
  v7 = 0;
  v25 = 0LL;
  v8 = a2;
  v9 = a4;
  v10 = a3;
  v23 = a3;
  sub_1407756F4(0);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_34;
    }
    v11 = sub_14076BBF4(v5);
  }
  else
  {
    v11 = sub_140775110(v5);
  }
  v12 = (__int64 *)*v11;
  v13 = v11;
  v26 = v11;
  if ( v12 != v11 )
  {
    do
    {
      v14 = sub_14055F84C((__int64)v12, v8);
      v12 = (__int64 *)*v12;
      v29 = v12;
      if ( v8 )
        v15 = *(_QWORD *)(v14 + 40);
      else
        v15 = *(_QWORD *)(v14 + 32);
      v16 = *(_QWORD *)(v15 + 48);
      if ( v16 && (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) != 0 && *(_QWORD *)(v17 + 48) )
      {
        v7 = sub_1402E0AC4(*(_WORD **)(v17 + 48), 0xC8uLL, &v30);
        if ( v7 < 0 )
          goto LABEL_34;
        v6 += ++v30;
        if ( v30 <= v9 )
        {
          v7 = sub_1402E0340(v10, v9, *(const WCHAR **)(v18 + 48), &v23, &v24, 2048);
          if ( v7 < 0 )
            goto LABEL_34;
          v10 = v23 + 1;
          v9 = v24 - 1;
          ++v23;
          --v24;
        }
      }
      else
      {
        v19 = *(unsigned __int16 **)(v15 + 56);
        v28 = (unsigned __int16 *)(v15 + 56);
        if ( v19 != (unsigned __int16 *)(v15 + 56) )
        {
          while ( 1 )
          {
            v20 = v19;
            v19 = *(unsigned __int16 **)v19;
            v27 = v20 + 8;
            v7 = sub_140779CA0((__int16 **)&v25, 0LL, v20 + 8);
            if ( v7 < 0 )
              goto LABEL_34;
            v21 = v25;
            v7 = sub_1402E0AC4(v25, 0x7FFFuLL, &v30);
            if ( v7 < 0 )
              goto LABEL_29;
            v6 += ++v30;
            if ( v30 <= v9 )
            {
              v7 = sub_1402E0340(v10, v9, v21, &v23, &v24, 2048);
              if ( v7 < 0 )
              {
LABEL_29:
                sub_14077BAB8(v21, (__int64)(v20 + 8));
                goto LABEL_34;
              }
              v10 = v23 + 1;
              v9 = v24 - 1;
              ++v23;
              --v24;
            }
            sub_14077BAB8(v21, (__int64)v27);
            if ( v19 == v28 )
            {
              v12 = v29;
              v13 = v26;
              break;
            }
          }
        }
        if ( v7 < 0 )
          goto LABEL_34;
        v8 = v31;
      }
    }
    while ( v12 != v13 );
    if ( v7 < 0 )
      goto LABEL_34;
  }
  if ( ++v6 <= v33 )
    v32[v6 - 1] = 0;
  else
    v7 = -1073741789;
LABEL_34:
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0);
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
  {
    if ( a5 )
      *a5 = v6;
  }
  return (unsigned int)v7;
}
