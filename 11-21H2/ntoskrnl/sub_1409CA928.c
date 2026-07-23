/*
 * XREFs of sub_1409CA928 @ 0x1409CA928
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 * Callees:
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 */

__int64 __fastcall sub_1409CA928(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // r10
  __int64 result; // rax

  v9 = *a1;
  if ( !v9 )
    v9 = a1[2];
  v10 = a1[2];
  v11 = *(_QWORD *)(v9 + 168);
  *a2 = *(_QWORD *)(*(_QWORD *)(v9 + 152) + 16LL * *(unsigned int *)(v9 + 144));
  v12 = *(_QWORD *)(v9 + 184);
  *a3 = v11;
  *a8 = v12;
  *a4 = *(_QWORD *)(*(_QWORD *)(v10 + 152) + 16LL * *(unsigned int *)(v10 + 144));
  *a5 = *(_QWORD *)(v10 + 168);
  v13 = (_QWORD *)sub_1402ED9BC(v9);
  if ( v13 )
    *a6 = *v13;
  else
    *a6 = Buf2;
  result = sub_140232910(v14);
  *a7 = result;
  return result;
}
