/*
 * XREFs of sub_140AF7D88 @ 0x140AF7D88
 * Callers:
 *     sub_140AF77F8 @ 0x140AF77F8 (sub_140AF77F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140AF7D88(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 1:
      *a2 = 1;
LABEL_6:
      v3 = *(_QWORD *)(a1 + 4);
      goto LABEL_4;
    case 2:
      *a2 = 0;
      v3 = *(unsigned __int16 *)(a1 + 4);
LABEL_4:
      *a3 = v3;
      return;
    case 3:
    case 7:
      *a2 = 2;
      goto LABEL_6;
  }
  *a3 = 0LL;
  *a2 = 4;
}
