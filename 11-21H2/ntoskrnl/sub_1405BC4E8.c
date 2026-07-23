/*
 * XREFs of sub_1405BC4E8 @ 0x1405BC4E8
 * Callers:
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 */

__int64 __fastcall sub_1405BC4E8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v7; // rdx
  bool v8; // zf
  signed __int32 v9; // eax

  v2 = *(_QWORD *)(a1 + 248);
  v3 = 1LL;
  if ( (int)sub_14026A784(v2, 1LL, 128LL, 2u) >= 0 )
  {
    v5 = sub_1403250B0(v2, a2, 0x302u);
    if ( v5 == -1 )
    {
      ++dword_140C52AD0;
      sub_14028CE10(v2, 1LL);
      if ( (ULONG_PTR *)v2 != &StartContext )
        goto LABEL_13;
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v7 == -1 )
        goto LABEL_13;
      if ( (unsigned __int64)(v7 + 1) <= 0x100 )
      {
        do
        {
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 + 1, v7);
          v8 = (_DWORD)v7 == v9;
          LODWORD(v7) = v9;
          if ( v8 )
            return v5;
        }
        while ( v9 != -1 && (unsigned __int64)(v9 + 1LL) <= 0x100 );
      }
      if ( (int)v7 > 192
        && (_DWORD)v7 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v7) )
      {
        v3 = (int)v7 - 192 + 1LL;
      }
      if ( v3 )
LABEL_13:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 16960), v3);
    }
    else
    {
      _InterlockedAdd64(&qword_140C53DA8, 1uLL);
    }
    return v5;
  }
  ++dword_140C52AD0;
  return -1LL;
}
