/*
 * XREFs of sub_14039D2EC @ 0x14039D2EC
 * Callers:
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     sub_14039D010 @ 0x14039D010 (sub_14039D010.c)
 * Callees:
 *     sub_140233430 @ 0x140233430 (sub_140233430.c)
 */

__int64 __fastcall sub_14039D2EC(__int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  __int64 v4; // r11
  __int64 v5; // rcx
  int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v5 = 0LL;
  v11 = 0LL;
  v8 = 1;
  if ( *(_DWORD *)(v4 + 64) > 1u )
    goto LABEL_4;
  if ( *(_DWORD *)(v4 + 76) )
  {
    sub_140233430((_QWORD **)(v4 + 40), a2, &v11);
    --*(_DWORD *)(v4 + 76);
    *(_WORD *)(v4 + 26) |= 0x80u;
    v5 = v11;
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 72) )
    {
LABEL_4:
      v8 = 0;
      *a2 = 0LL;
      goto LABEL_5;
    }
    *a2 = *(_QWORD *)(v4 + 32);
    v8 = *(_DWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 32) = 0LL;
  }
LABEL_5:
  result = (unsigned int)(v8 - 1);
  v10 = (_DWORD)result + *(_DWORD *)(v4 + 64) == 0;
  *(_DWORD *)(v4 + 64) += result;
  if ( v10 )
    *(_WORD *)(v4 + 24) = 0;
  *a4 = v8;
  *a3 = v5;
  return result;
}
