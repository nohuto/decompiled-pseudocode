/*
 * XREFs of sub_140238AD8 @ 0x140238AD8
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall sub_140238AD8(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  signed __int32 v8; // eax

  v2 = a2 == 0;
  v4 = 26LL;
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v7 == -1 )
      goto LABEL_13;
    if ( (unsigned __int64)(v7 + 26) <= 0x100 )
    {
      do
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 + 26, v7);
        v2 = (_DWORD)v7 == v8;
        LODWORD(v7) = v8;
        if ( v2 )
          goto LABEL_8;
      }
      while ( v8 != -1 && (unsigned __int64)(v8 + 26LL) <= 0x100 );
    }
    if ( (int)v7 > 192
      && (_DWORD)v7 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v7) )
    {
      v4 = (int)v7 - 192 + 26LL;
    }
    if ( v4 )
LABEL_13:
      _InterlockedExchangeAdd64(&qword_140C591C0, v4);
LABEL_8:
    *(_BYTE *)(a1 + 1384) &= ~4u;
    v2 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
    if ( v2 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( (unsigned int)sub_1402821F4(&StartContext, 26LL, 1024LL) )
  {
    --*(_WORD *)(a1 + 486);
    *(_BYTE *)(a1 + 1384) |= 4u;
    return 0LL;
  }
  return 3221225626LL;
}
