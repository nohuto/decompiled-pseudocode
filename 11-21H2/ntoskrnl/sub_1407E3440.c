/*
 * XREFs of sub_1407E3440 @ 0x1407E3440
 * Callers:
 *     sub_1407E1754 @ 0x1407E1754 (sub_1407E1754.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     sub_1407E1FE0 @ 0x1407E1FE0 (sub_1407E1FE0.c)
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 *     sub_140A0F874 @ 0x140A0F874 (sub_140A0F874.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407E3440(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5)
{
  int v5; // esi
  int v6; // edi
  int v10; // ebx
  int v11; // ebp
  __int64 v12; // rax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v10 = 0;
  v11 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v10 = (v6 + v5) / 2;
      v12 = sub_14042A5E0(*(_QWORD *)((unsigned int)(v10 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)), a2);
      if ( !v12 )
        break;
      if ( v12 < 0 )
        v6 = v10 - 1;
      else
        v5 = ++v10;
      if ( v5 > v6 )
        goto LABEL_9;
    }
    v11 = 0;
  }
LABEL_9:
  if ( a5 )
    *a5 = v10;
  result = (unsigned int)v11;
  if ( a4 )
  {
    if ( v11 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(v10 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
