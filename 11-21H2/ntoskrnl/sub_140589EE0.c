/*
 * XREFs of sub_140589EE0 @ 0x140589EE0
 * Callers:
 *     sub_140589FC0 @ 0x140589FC0 (sub_140589FC0.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

void __fastcall sub_140589EE0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  bool v7; // zf
  signed __int32 v8; // eax

  sub_14028CE10(a1, a2);
  v4 = a2;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v6 != -1 )
    {
      if ( a2 + v6 <= 0x100 )
      {
        do
        {
          if ( a2 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v6 + a2, v6);
          v7 = (_DWORD)v6 == v8;
          LODWORD(v6) = v8;
          if ( v7 )
            goto LABEL_14;
        }
        while ( v8 != -1 && a2 + v8 <= 0x100 );
      }
      if ( (int)v6 > 192
        && (_DWORD)v6 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v6) )
      {
        v4 = a2 + (int)v6 - 192;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v4);
  if ( (ULONG_PTR *)a1 == &StartContext )
LABEL_14:
    _InterlockedExchangeAdd64(&qword_140C53530, -(__int64)a2);
}
