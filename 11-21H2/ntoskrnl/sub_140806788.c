/*
 * XREFs of sub_140806788 @ 0x140806788
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403970F0 @ 0x1403970F0 (sub_1403970F0.c)
 *     sub_1403971A8 @ 0x1403971A8 (sub_1403971A8.c)
 *     sub_14098F20C @ 0x14098F20C (sub_14098F20C.c)
 *     sub_14098F5E8 @ 0x14098F5E8 (sub_14098F5E8.c)
 */

__int64 __fastcall sub_140806788(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // r10
  _QWORD *v12; // r11
  _QWORD *v13; // r8
  unsigned int v14; // edi
  __int64 v16; // rsi
  __int64 v17; // r14
  _QWORD *v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rcx
  _DWORD *v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // r8
  _DWORD *v25; // rdi
  _QWORD *v26; // r14
  unsigned __int64 v27; // rsi
  __int64 v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+A0h] [rbp+8h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  _QWORD *v32; // [rsp+B8h] [rbp+20h] BYREF

  v29 = (int)a1;
  v32 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&stru_140C23780, Executive, 0, 0, 0LL);
  v5 = sub_1403971A8((__int64 *)&v32);
  v8 = v32;
  v9 = v5;
  v31 = v5;
  v10 = (int)(4 * v5 + 4);
  if ( v5 )
  {
    v7 = (__int64)v32;
    v11 = v5;
    do
    {
      v6 = *(_QWORD *)v7;
      v12 = (_QWORD *)(*(_QWORD *)v7 + 24LL);
      v13 = (_QWORD *)*v12;
      v10 = 4 * *(_DWORD *)(*(_QWORD *)v7 + 40LL) + 4 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v13 != v12 )
      {
        v23 = sub_14098F5E8(v13);
        v13 = (_QWORD *)*v24;
        v10 = v23 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v7 += 8LL;
      --v11;
    }
    while ( v11 );
  }
  if ( v10 <= v3 )
  {
    *v4 = v9;
    v28 = v9;
    v16 = (__int64)&v4[v9 + 1];
    v17 = v9;
    if ( (_DWORD)v9 )
    {
      v18 = v8;
      v19 = v4 + 1;
      do
      {
        v20 = *v18;
        v21 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v21 = *(_DWORD *)(*v18 + 40LL);
        *v19 = ((v16 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v16 = (__int64)&v21[*(unsigned int *)(v20 + 40) + 1];
        v22 = *(_QWORD **)(v20 + 24);
        if ( v22 != (_QWORD *)(v20 + 24) )
        {
          v25 = v21 + 1;
          v26 = (_QWORD *)(v20 + 24);
          do
          {
            v27 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v25++ = v27 - (_DWORD)v21;
            sub_14098F20C(v27, v6, v22, v7);
            v22 = (_QWORD *)*v22;
            v16 = *(unsigned int *)(v27 + 4) + v27;
          }
          while ( v22 != v26 );
          LODWORD(v4) = v29;
          v17 = v28;
        }
        ++v18;
        ++v19;
        v28 = --v17;
      }
      while ( v17 );
      LODWORD(v9) = v31;
      v8 = v32;
    }
    v2 = a2;
    v14 = 0;
  }
  else
  {
    v14 = -1073741789;
  }
  if ( (_DWORD)v9 )
    sub_1403970F0(v9, v8);
  *v2 = v10;
  return v14;
}
