/*
 * XREFs of sub_140A49130 @ 0x140A49130
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     sub_140A49208 @ 0x140A49208 (sub_140A49208.c)
 */

__int64 __fastcall sub_140A49130(__int64 a1)
{
  int i; // r11d
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 result; // rax

  for ( i = 4; i >= 0; i = v7 - 1 )
  {
    v3 = a1 + 72 + 72LL * i;
    sub_140A49208(v3, a1 + 88 + 72LL * i);
    sub_140A49208(v3, a1 + 120 + 8 * v4);
    sub_140A49208(v3, a1 + 104 + 8 * v5);
    v8 = *(_QWORD **)(v6 - 16);
    while ( v8 != (_QWORD *)v3 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      *((_DWORD *)v9 + 25) = *((_DWORD *)v9 + 24);
      v10 = *((_DWORD *)v9 + 22);
      *((_DWORD *)v9 + 23) = v10;
      if ( !v10 )
      {
        if ( (_QWORD *)v8[1] != v9
          || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9)
          || (*v11 = v8, v8[1] = v11, v12 = *(_QWORD **)(v6 + 8), *v12 != v6) )
        {
          __fastfail(3u);
        }
        *v9 = v6;
        v9[1] = v12;
        *v12 = v9;
        *(_QWORD *)(v6 + 8) = v9;
      }
    }
    result = *(unsigned int *)(v6 - 24);
    *(_DWORD *)(v6 - 20) = result;
  }
  return result;
}
