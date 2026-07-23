/*
 * XREFs of sub_140594F80 @ 0x140594F80
 * Callers:
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1403936C0 @ 0x1403936C0 (sub_1403936C0.c)
 */

void __fastcall sub_140594F80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // rdx
  bool v12; // zf
  signed __int32 v13; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = *(_QWORD *)(a2 + 88);
  if ( v6 )
  {
    sub_1403936C0(v6);
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( a4 && *(_DWORD *)(a1 + 16) )
  {
    v9 = 512LL;
    sub_14028CE10(a3, 512LL);
    if ( (ULONG_PTR *)a3 != &StartContext )
      goto LABEL_15;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v11 == -1 )
      goto LABEL_15;
    if ( (unsigned __int64)(v11 + 512) <= 0x100 )
    {
      do
      {
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v11 + 512, v11);
        v12 = (_DWORD)v11 == v13;
        LODWORD(v11) = v13;
        if ( v12 )
          goto LABEL_16;
      }
      while ( v13 != -1 && (unsigned __int64)(v13 + 512LL) <= 0x100 );
    }
    if ( (int)v11 > 192
      && (_DWORD)v11 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v11) )
    {
      v9 = (int)v11 - 192 + 512LL;
    }
    if ( v9 )
LABEL_15:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 16960), v9);
LABEL_16:
    *(_DWORD *)(a1 + 16) = 0;
  }
}
