/*
 * XREFs of sub_18002205C @ 0x18002205C
 * Callers:
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E63A4 @ 0x1800E63A4 (sub_1800E63A4.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002205C(__int64 a1, __int64 *a2)
{
  int v4; // ecx
  unsigned __int64 v5; // r8
  void *v6; // rdx
  size_t v7; // r8
  _QWORD *v8; // rax

  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v4 = *(_DWORD *)(a1 + 136);
  if ( (v4 & 2) == 0 )
  {
    v5 = **(_QWORD **)(a1 + 88);
    if ( v5 )
    {
      v6 = **(void ***)(a1 + 56);
      if ( v5 < *(_QWORD *)(a1 + 128) )
        v5 = *(_QWORD *)(a1 + 128);
      v7 = v5 - (_QWORD)v6;
      goto LABEL_9;
    }
  }
  if ( (v4 & 4) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 80);
    if ( *v8 )
    {
      v6 = **(void ***)(a1 + 48);
      v7 = *v8 + **(int **)(a1 + 104) - (_QWORD)v6;
LABEL_9:
      sub_180012190(a2, v6, v7);
    }
  }
  return a2;
}
