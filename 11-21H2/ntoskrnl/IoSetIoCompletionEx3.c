/*
 * XREFs of IoSetIoCompletionEx3 @ 0x140257EE0
 * Callers:
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     sub_1402D3E44 @ 0x1402D3E44 (sub_1402D3E44.c)
 * Callees:
 *     sub_140311A50 @ 0x140311A50 (sub_140311A50.c)
 *     sub_1407D57AC @ 0x1407D57AC (sub_1407D57AC.c)
 */

__int64 __fastcall IoSetIoCompletionEx3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v13; // rbp
  __int64 v14; // r14

  v9 = a7;
  v10 = 0;
  v11 = a4;
  v13 = a2;
  v14 = a1;
  if ( a7 || (LOBYTE(a2) = a6, LOBYTE(a1) = 1, (v9 = sub_1407D57AC(a1, a2)) != 0) )
  {
    LOBYTE(a4) = a8;
    *(_QWORD *)(v9 + 48) = a5;
    *(_QWORD *)(v9 + 24) = v13;
    *(_QWORD *)(v9 + 32) = a3;
    *(_DWORD *)(v9 + 40) = v11;
    sub_140311A50(v14, v9, (unsigned int)a9, a4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
