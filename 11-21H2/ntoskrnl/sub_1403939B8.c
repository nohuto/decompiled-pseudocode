/*
 * XREFs of sub_1403939B8 @ 0x1403939B8
 * Callers:
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 * Callees:
 *     sub_1403B1A00 @ 0x1403B1A00 (sub_1403B1A00.c)
 */

__int64 __fastcall sub_1403939B8(signed __int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // zf
  signed __int32 v9; // eax
  unsigned int v10; // ecx

  if ( a3 )
  {
    if ( qword_140D321B8 == a1 )
    {
      _InterlockedExchange64(&qword_140D321B8, 0LL);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = a2 + 48;
      v7 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v7 != -1 )
      {
        if ( v6 + v7 <= 0x100 )
        {
          do
          {
            if ( v6 >= 0x80000 )
              break;
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 + v6, v7);
            v8 = (_DWORD)v7 == v9;
            LODWORD(v7) = v9;
            if ( v8 )
              return 1;
          }
          while ( v9 != -1 && v6 + v9 <= 0x100 );
        }
        if ( (int)v7 > 192
          && (_DWORD)v7 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v7) )
        {
          v6 += (int)v7 - 192;
        }
      }
      if ( v6 )
        _InterlockedExchangeAdd64(&qword_140C591C0, v6);
    }
    return 1;
  }
  else
  {
    v10 = sub_1403B1A00(a2);
    if ( !v10 )
    {
      if ( qword_140D321B8 )
        return 0;
      v10 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_140D321B8, a1, 0LL) )
        return 0;
    }
  }
  return v10;
}
