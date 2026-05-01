/*
 * XREFs of ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x1802E59BE
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E42B0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall GridLayout::HitTestRow(GridLayout *this, const struct Geometry::CPoint *a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v7; // rdi
  int v8; // r8d
  struct tagRECT rc; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( !*((_QWORD *)this + 7) )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 1);
    rc = *(struct tagRECT *)(56 * v7 + *((_QWORD *)this + 6) + 8);
    InflateRect(&rc, 0, v8);
    if ( *((_DWORD *)a2 + 1) - rc.top <= (unsigned int)(rc.bottom - rc.top) )
      break;
    v7 = ++v3;
    if ( (unsigned __int64)v3 >= *((_QWORD *)this + 7) )
      return 0;
  }
  *a3 = v7;
  return 1;
}
