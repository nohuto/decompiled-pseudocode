/*
 * XREFs of sub_140228AA0 @ 0x140228AA0
 * Callers:
 *     sub_1402287C8 @ 0x1402287C8 (sub_1402287C8.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 *     sub_140352D04 @ 0x140352D04 (sub_140352D04.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 * Callees:
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

void __fastcall sub_140228AA0(unsigned __int64 *a1, int a2, char a3)
{
  unsigned __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // zf
  signed __int32 v11; // eax
  unsigned __int64 v12; // rax

  if ( qword_140C593D8 )
  {
    v6 = a1[4] - a1[1];
    sub_14028CE10(&StartContext, v6);
    if ( a2 == 2 )
    {
      sub_140229640(&StartContext, v6, (a3 & 4) != 0 ? 15 : 5);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *a1;
      v9 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v9 != -1 )
      {
        if ( v8 + v9 <= 0x100 )
        {
          do
          {
            if ( v8 >= 0x80000 )
              break;
            v11 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v9 + v8, v9);
            v10 = (_DWORD)v9 == v11;
            LODWORD(v9) = v11;
            if ( v10 )
              goto LABEL_7;
          }
          while ( v11 != -1 && v8 + v11 <= 0x100 );
        }
        if ( (int)v9 > 192
          && (_DWORD)v9 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v9) )
        {
          v8 += (int)v9 - 192;
        }
      }
      if ( v8 )
        _InterlockedExchangeAdd64(&qword_140C591C0, v8);
LABEL_7:
      v12 = -(__int64)a1[4];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140C53520, v12);
      else
        _InterlockedExchangeAdd64(&qword_140C53518, v12);
    }
  }
}
