/*
 * XREFs of ?ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z @ 0x1801CCE10
 * Callers:
 *     ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801CCE90 (-OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TouchInfoAdapter::ExistingTouchContactWithId(
        TouchInfoAdapter *this,
        __int16 a2,
        struct TouchContact **a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  struct TouchContact *v6; // rdx
  __int16 v7; // ax

  if ( !*((_BYTE *)this + 696) )
    return 0;
  v4 = 0;
  if ( !*((_BYTE *)this + 135) )
    return 0;
  while ( 1 )
  {
    v5 = 56LL * v4;
    v6 = (struct TouchContact *)((char *)this + v5 + 136);
    if ( a2 == v6->ContactID )
    {
      v7 = *(_WORD *)((char *)this + v5 + 138);
      if ( *((_BYTE *)this + 32) )
      {
        if ( (v7 & 4) != 0 )
          return 0;
      }
      else if ( (v7 & 8) == 0 )
      {
        return 0;
      }
      if ( a3 )
        break;
    }
    if ( ++v4 >= *((unsigned __int8 *)this + 135) )
      return 0;
  }
  *a3 = v6;
  return 1;
}
