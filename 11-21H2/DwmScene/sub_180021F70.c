/*
 * XREFs of sub_180021F70 @ 0x180021F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_180021F70(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  __int64 *v4; // r14
  unsigned __int64 v7; // r11
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // ecx

  v4 = *(__int64 **)(a1 + 56);
  v7 = *a3 + a3[1];
  v8 = *v4;
  v9 = **(_QWORD **)(a1 + 64);
  if ( v9 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  v10 = *(_QWORD *)(a1 + 104);
  v11 = **(_QWORD **)(a1 + 24);
  if ( v7 > v10 - v11 || v7 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v9) )
  {
    *a2 = -1LL;
  }
  else
  {
    v12 = v11 + v7;
    if ( (a4 & 1) != 0 && v8 )
    {
      *v4 = v12;
      **(_DWORD **)(a1 + 80) = v10 - v12;
    }
    if ( (a4 & 2) != 0 && v9 )
    {
      v13 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v12;
      **(_QWORD **)(a1 + 32) = v11;
      **(_QWORD **)(a1 + 64) = v12;
      **(_DWORD **)(a1 + 88) = v13;
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
