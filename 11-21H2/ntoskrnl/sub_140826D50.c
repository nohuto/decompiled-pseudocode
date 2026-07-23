/*
 * XREFs of sub_140826D50 @ 0x140826D50
 * Callers:
 *     sub_140B01250 @ 0x140B01250 (sub_140B01250.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 */

_QWORD *__fastcall sub_140826D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rax
  unsigned int i; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax

  v7 = sub_1402D84BC(0x60uLL);
  v8 = v7;
  if ( !v7 )
    goto LABEL_8;
  *((_DWORD *)v7 + 6) = 256;
  v7[5] = v7 + 4;
  v7[4] = v7 + 4;
  v7[9] = a2;
  v7[10] = a3;
  v7[11] = a4;
  *((_DWORD *)v7 + 3) = 223;
  v9 = sub_1402D84BC(0xDF0uLL);
  v8[2] = v9;
  if ( !v9 )
  {
    sub_1402D8494(0LL);
LABEL_8:
    sub_1402D8494(v8);
    return 0LL;
  }
  for ( i = 0; i < *((_DWORD *)v8 + 3); *v12 = v12 )
  {
    v11 = i++;
    v12 = (_QWORD *)(v8[2] + 16 * v11);
    v12[1] = v12;
  }
  *v8 = 0LL;
  return v8;
}
