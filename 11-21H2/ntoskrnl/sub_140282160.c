/*
 * XREFs of sub_140282160 @ 0x140282160
 * Callers:
 *     sub_1402820F4 @ 0x1402820F4 (sub_1402820F4.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 */

__int64 __fastcall sub_140282160(__int64 a1, char a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v9; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v3 = 1LL;
  v5 = (a2 & 2) != 0 ? 0xFFFFFFFC : 0;
  v6 = sub_1402821F4(a1, 1LL, (unsigned int)-((a2 & 2) != 0));
  if ( v6 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)sub_14032A4B0(a1, 1LL, v5 + 8) )
      return v6;
    if ( (ULONG_PTR *)a1 != &StartContext )
      goto LABEL_16;
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v9 == -1 )
      goto LABEL_16;
    if ( (unsigned __int64)(v9 + 1) <= 0x100 )
    {
      do
      {
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v9 + 1, v9);
        v10 = (_DWORD)v9 == v11;
        LODWORD(v9) = v11;
        if ( v10 )
          return 0LL;
      }
      while ( v11 != -1 && (unsigned __int64)(v11 + 1LL) <= 0x100 );
    }
    if ( (int)v9 > 192
      && (_DWORD)v9 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v9) )
    {
      v3 = (int)v9 - 192 + 1LL;
    }
    if ( v3 )
LABEL_16:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v3);
  }
  return 0LL;
}
