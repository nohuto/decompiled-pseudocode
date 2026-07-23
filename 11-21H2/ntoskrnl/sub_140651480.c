/*
 * XREFs of sub_140651480 @ 0x140651480
 * Callers:
 *     <none>
 * Callees:
 *     sub_140652340 @ 0x140652340 (sub_140652340.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

void __fastcall sub_140651480(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  if ( a2 > 14 )
  {
    switch ( a2 )
    {
      case '9':
        v4 = 304LL;
        break;
      case ':':
        v4 = 328LL;
        break;
      case '<':
        v4 = 368LL;
        break;
      case 'A':
        return;
      default:
        goto LABEL_18;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 14:
        v4 = 336LL;
        break;
      case 4:
        v4 = 312LL;
        break;
      case 6:
        v4 = 296LL;
        break;
      case 7:
        v4 = 344LL;
        break;
      case 8:
        v4 = 360LL;
        break;
      case 11:
        v4 = 352LL;
        break;
      default:
LABEL_18:
        sub_140652340(a1);
        return;
    }
  }
  v5 = (_QWORD *)(a1 + v4);
  if ( a1 + v4 )
  {
    if ( *v5 )
      sub_1406D9550(*v5);
    *v5 = a3;
  }
}
