/*
 * XREFs of sub_14065DC44 @ 0x14065DC44
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14065DDC4 @ 0x14065DDC4 (sub_14065DDC4.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065DC44(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int *v14; // rcx
  ULONG_PTR v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r9d
  int v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+44h] [rbp+Ch]

  v20 = -1;
  v4 = a1[13];
  v21 = 0;
  v7 = a1[6];
  v8 = *(_QWORD *)(v7 + 32);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v8, *(unsigned int *)(v7 + 40));
  else
    v9 = sub_1407C9820(v8);
  v10 = v9;
  v11 = a1[14];
  v12 = *(unsigned __int16 *)(v11 + 8);
  if ( *(_DWORD *)(v10 + 60) < v12 )
  {
    *(_DWORD *)(v10 + 60) = v12;
    *(_WORD *)(a1[6] + 178LL) = *(_WORD *)(a1[14] + 8LL);
    v11 = a1[14];
  }
  v13 = *(_DWORD *)(v11 + 12);
  if ( *(_DWORD *)(v10 + 64) < v13 )
  {
    *(_DWORD *)(v10 + 64) = v13;
    *(_DWORD *)(a1[6] + 180LL) = *(_DWORD *)(a1[14] + 12LL);
  }
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(a1[6] + 168LL) = *a2;
  ++*(_QWORD *)(a1[6] + 304LL);
  v14 = (unsigned int *)a1[14];
  v15 = v14[1];
  if ( (_DWORD)v15 != -1 )
  {
    sub_14079B22C(v8, v15);
    v14 = (unsigned int *)a1[14];
  }
  sub_140346D64(v14, 0x77554D43u);
  a1[14] = 0LL;
  if ( *(_DWORD *)v4 == 1 )
  {
    v16 = *(_QWORD *)(v10 + 36);
    *(_QWORD *)(v10 + 36) = *(_QWORD *)(v4 + 4);
    *(_QWORD *)(v4 + 4) = v16;
    sub_14071EE7C(a1[6], a3);
    v17 = a1[6];
    v18 = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v17 + 96) = *(_DWORD *)(v10 + 36);
    *(_DWORD *)(v17 + 100) = v18;
  }
  sub_14065DDC4(v8, v4);
  a1[13] = 0LL;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    return sub_1406BF450(v8, &v20);
  else
    return sub_1407C97C0(v8, &v20);
}
