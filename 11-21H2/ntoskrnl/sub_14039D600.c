/*
 * XREFs of sub_14039D600 @ 0x14039D600
 * Callers:
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 * Callees:
 *     sub_140233430 @ 0x140233430 (sub_140233430.c)
 */

__int64 __fastcall sub_14039D600(__int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  __int64 v6; // rcx
  int *v8; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r11
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  v8 = (int *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) )
  {
    *a2 = *(_QWORD *)(a1 + 32);
    result = 65407LL;
    v10 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_WORD *)(a1 + 26) &= ~0x80u;
    *(_DWORD *)(a1 + 72) = 0;
    if ( !v10 )
      goto LABEL_4;
LABEL_9:
    v11 = *v8 + v10 - 1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    result = sub_140233430((_QWORD **)(a1 + 40), a2, &v13);
    --*(_DWORD *)(v12 + 76);
    v10 = 1;
    v6 = v13;
    goto LABEL_9;
  }
  *a2 = 0LL;
  result = 65407LL;
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v10 = 0;
LABEL_4:
  *(_WORD *)(a1 + 24) = 0;
  v11 = 0;
LABEL_5:
  *v8 = v11;
  *a3 = v6;
  *a4 = v10;
  return result;
}
