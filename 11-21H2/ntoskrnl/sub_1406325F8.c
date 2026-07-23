/*
 * XREFs of sub_1406325F8 @ 0x1406325F8
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     sub_14063D728 @ 0x14063D728 (sub_14063D728.c)
 * Callees:
 *     sub_1406324DC @ 0x1406324DC (sub_1406324DC.c)
 */

signed __int64 __fastcall sub_1406325F8(int a1, __int64 a2, unsigned int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v8; // rdi
  __int16 v9; // r15
  unsigned __int8 v10; // r12
  signed __int64 result; // rax
  signed __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = __rdtsc();
  v9 = *((unsigned __int8 *)CurrentPrcb + 208);
  v10 = *((_BYTE *)CurrentPrcb + 209);
  ++*((_DWORD *)CurrentPrcb + 8796);
  LOWORD(v14) = v9;
  HIWORD(v14) = v10;
  result = sub_1406324DC(a2, a1 & 0xFFFF0000);
  v12 = result;
  if ( result )
  {
    ++*((_DWORD *)CurrentPrcb + 8797);
    result = 4294967263LL;
    if ( ((a1 - 65569) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 65585) & 0xFFFFFFDF) != 0 )
        return result;
      if ( *(_DWORD *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 36) >= a3 )
        {
LABEL_16:
          *(_DWORD *)(v12 + 32) = 1;
          return result;
        }
LABEL_15:
        *(_DWORD *)(v12 + 36) = a3;
        goto LABEL_16;
      }
      *(_QWORD *)(v12 + 8) = 2LL;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 32) == 4;
      *(_QWORD *)(v12 + 8) = v8;
      if ( !v13 )
      {
        *(_QWORD *)v12 = 0LL;
        goto LABEL_14;
      }
      if ( *(_WORD *)(v12 + 24) == v9 && *(_BYTE *)(v12 + 26) == v10 )
      {
        *(_QWORD *)v12 = v8 - *(_QWORD *)v12;
        goto LABEL_14;
      }
    }
    *(_QWORD *)v12 = 1LL;
LABEL_14:
    result = v14;
    *(_DWORD *)(v12 + 24) = v14;
    *(_DWORD *)(v12 + 44) = a4;
    goto LABEL_15;
  }
  return result;
}
