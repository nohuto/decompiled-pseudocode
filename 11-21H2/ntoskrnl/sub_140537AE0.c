/*
 * XREFs of sub_140537AE0 @ 0x140537AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14053799C @ 0x14053799C (sub_14053799C.c)
 */

__int64 __fastcall sub_140537AE0(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  unsigned __int64 v6; // r15
  unsigned int v7; // ebx
  _QWORD **v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  __int64 result; // rax

  v3 = *(_DWORD **)(a1 + 344);
  v6 = a1;
  if ( *a2 >= *v3 )
  {
    v7 = 0;
    v8 = (_QWORD **)(v3 + 2);
    v9 = 0;
    v10 = *v8;
    while ( v10 != v8 )
    {
      a1 = sub_14053799C(a1, (__int64)v10);
      *(_QWORD *)(a3 + 8LL * v9) = a1;
      if ( !a1 )
      {
        v7 = -1073741670;
        break;
      }
      v10 = (_QWORD *)*v10;
      ++v9;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  result = v7;
  *a2 = **(_DWORD **)(v6 + 344);
  return result;
}
