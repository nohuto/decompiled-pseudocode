/*
 * XREFs of sub_14052936C @ 0x14052936C
 * Callers:
 *     sub_1405284B0 @ 0x1405284B0 (sub_1405284B0.c)
 *     sub_1405286D0 @ 0x1405286D0 (sub_1405286D0.c)
 *     sub_1405287F0 @ 0x1405287F0 (sub_1405287F0.c)
 *     sub_140528E60 @ 0x140528E60 (sub_140528E60.c)
 * Callees:
 *     sub_140529408 @ 0x140529408 (sub_140529408.c)
 */

__int64 __fastcall sub_14052936C(__int64 a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r8
  _QWORD *v11; // r11
  unsigned __int64 v12; // rax

  if ( !*(_DWORD *)a1 )
  {
    if ( (unsigned __int8)sub_140529408(*(_QWORD *)(a1 + 8)) )
    {
      v12 = (unsigned __int64)*(unsigned int *)(v9 + 44) >> 12;
      *v10 = 0;
      v6 = *(unsigned int *)(v9 + 40);
      *v11 = v6;
      v5 = v9 + 8 * (v12 + 6);
      goto LABEL_9;
    }
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    *a3 = 1;
    v6 = *(_QWORD *)(a1 + 16);
    *a2 = v6;
    *a5 = v7;
    if ( !(v7 % 4096) )
      goto LABEL_10;
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 != 2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 8);
  *a3 = 0;
  v6 = *(_QWORD *)(a1 + 16) << 12;
  *a2 = v6;
LABEL_9:
  *a4 = v5;
LABEL_10:
  if ( !v6 )
    return 3221225485LL;
  return 0LL;
}
