/*
 * XREFs of sub_140565ED4 @ 0x140565ED4
 * Callers:
 *     sub_140A748B4 @ 0x140A748B4 (sub_140A748B4.c)
 *     sub_140A74AA0 @ 0x140A74AA0 (sub_140A74AA0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140565ED4(_BYTE *a1, __int64 a2, char a3)
{
  switch ( a3 )
  {
    case 1:
      *a1 = a2;
      break;
    case 2:
      *(_WORD *)a1 = a2;
      break;
    case 4:
      *(_DWORD *)a1 = a2;
      break;
    case 8:
      *(_QWORD *)a1 = a2;
      break;
  }
}
