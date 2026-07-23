/*
 * XREFs of sub_14065D320 @ 0x14065D320
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

__int64 __fastcall sub_14065D320(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v15 = -1;
  v3 = *(_QWORD *)(a1 + 104);
  v16 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v8, *(unsigned int *)(v5 + 40));
  else
    v9 = sub_1407C9820(v8);
  v10 = v9;
  sub_14079B22C(v8, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  sub_140346D64(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v3 == 1 )
  {
    v12 = *(_QWORD *)(v10 + 36);
    *(_QWORD *)(v10 + 36) = *(_QWORD *)(v3 + 4);
    *(_QWORD *)(v3 + 4) = v12;
    sub_14071EE7C(*(_QWORD *)(a1 + 48), a3);
    v13 = *(_QWORD *)(a1 + 48);
    v14 = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v13 + 96) = *(_DWORD *)(v10 + 36);
    *(_DWORD *)(v13 + 100) = v14;
    if ( !*(_DWORD *)(v10 + 36) )
    {
      *(_QWORD *)(v10 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  sub_14065DDC4(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    return sub_1406BF450(v8, &v15);
  else
    return sub_1407C97C0(v8, &v15);
}
