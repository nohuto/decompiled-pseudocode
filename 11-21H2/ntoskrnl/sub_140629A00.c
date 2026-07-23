/*
 * XREFs of sub_140629A00 @ 0x140629A00
 * Callers:
 *     sub_14062B664 @ 0x14062B664 (sub_14062B664.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_14062A7C8 @ 0x14062A7C8 (sub_14062A7C8.c)
 *     sub_14062A8C0 @ 0x14062A8C0 (sub_14062A8C0.c)
 *     sub_140653EC4 @ 0x140653EC4 (sub_140653EC4.c)
 *     sub_140654038 @ 0x140654038 (sub_140654038.c)
 */

__int64 __fastcall sub_140629A00(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v6; // esi
  _QWORD *v9; // r14
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v6 = a3;
  if ( a3 != 512 )
    goto LABEL_17;
  if ( (*a4 & 0x1FFLL) != 0 )
    goto LABEL_17;
  v9 = a4 + 1;
  v10 = a4[1];
  if ( (v10 & 0x1FF) != 0 )
    goto LABEL_17;
  v11 = a4 + 1024;
  if ( a4[1022] != *a4 + 511LL || a4[1023] != v10 + 511 )
    goto LABEL_17;
  for ( i = a4 + 2; i < v11; i += 2 )
  {
    if ( *i != *(i - 2) + 1LL )
      goto LABEL_17;
    if ( i[1] != *(i - 1) + 1LL )
      break;
  }
  if ( i == v11 )
  {
    *(_WORD *)(a1 + 104) |= 1u;
    if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 )
    {
      if ( sub_1402A2000(qword_140C18EA0, 1LL) )
        sub_14062A7C8(v13, *a4, *v9, a2);
    }
    result = sub_140653EC4(*(_QWORD *)(a1 + 72), *a4, a2 | 0x80000000, 1, (__int64)v9, (__int64)a5);
    *a5 <<= 9;
  }
  else
  {
LABEL_17:
    if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 && sub_1402A2000(qword_140C18EA0, 1LL) )
      sub_14062A8C0(v15, a4, v6, a2);
    return sub_140654038(*(_QWORD *)(a1 + 72), a2, v6, (_DWORD)a4, (__int64)a5);
  }
  return result;
}
