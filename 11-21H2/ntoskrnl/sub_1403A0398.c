/*
 * XREFs of sub_1403A0398 @ 0x1403A0398
 * Callers:
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 * Callees:
 *     sub_1403A0424 @ 0x1403A0424 (sub_1403A0424.c)
 */

void __fastcall sub_1403A0398(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rbp
  ULONG_PTR v6; // rax
  ULONG_PTR *v7; // rdx
  ULONG_PTR v8; // rax
  ULONG_PTR *v9; // rdx
  ULONG_PTR *v10; // rdx

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 2) != 0 )
  {
    v3 = a1 + 8;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *(_QWORD *)v4;
        if ( *(_DWORD *)(v4 + 36) == 512 )
        {
          v6 = *(_QWORD *)v4;
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            goto LABEL_10;
          v7 = *(ULONG_PTR **)(v4 + 8);
          if ( *v7 != v4 )
            goto LABEL_10;
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          sub_1403A0424(v4);
        }
        else if ( !*(_DWORD *)(v4 + 36) )
        {
          v8 = *(_QWORD *)v4;
          *(_DWORD *)(v4 + 40) = 1;
          if ( *(_QWORD *)(v8 + 8) != v4
            || (v9 = *(ULONG_PTR **)(v4 + 8), *v9 != v4)
            || (*v9 = v8, *(_QWORD *)(v8 + 8) = v9, v10 = *(ULONG_PTR **)(a1 + 32), *v10 != a1 + 24) )
          {
LABEL_10:
            __fastfail(3u);
          }
          *(_QWORD *)v4 = a1 + 24;
          *(_QWORD *)(v4 + 8) = v10;
          *v10 = v4;
          *(_QWORD *)(a1 + 32) = v4;
        }
        v4 = v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(a1 + 64) = v1 & 0xFFFFFFFD;
  }
}
