/*
 * XREFs of sub_140262FAC @ 0x140262FAC
 * Callers:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     sub_140262F20 @ 0x140262F20 (sub_140262F20.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

void __fastcall sub_140262FAC(unsigned __int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  if ( (a2 & 2) != 0 && !a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = a1;
    v6 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v6 != -1 )
    {
      if ( v6 + a1 <= 0x100 )
      {
        do
        {
          if ( a1 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v6 + a1, v6);
          v7 = (_DWORD)v6 == v8;
          LODWORD(v6) = v8;
          if ( v7 )
            goto LABEL_2;
        }
        while ( v8 != -1 && a1 + v8 <= 0x100 );
      }
      if ( (int)v6 > 192
        && (_DWORD)v6 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v6) )
      {
        v5 = a1 + (int)v6 - 192;
      }
    }
    if ( v5 )
      _InterlockedExchangeAdd64(&qword_140C591C0, v5);
  }
LABEL_2:
  if ( (a2 & 1) != 0 )
    sub_14028CE10(&StartContext, a1);
}
