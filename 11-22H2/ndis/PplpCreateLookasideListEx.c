/*
 * XREFs of PplpCreateLookasideListEx @ 0x1C00CE63C
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00CD300 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 * Callees:
 *     <none>
 */

int *__fastcall PplpCreateLookasideListEx(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, SIZE_T Size)
{
  int v6; // esi
  int *Pool3; // rbx
  int v8; // r14d
  __int64 v9; // rbp
  int *v10; // rdi
  int *result; // rax
  _QWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF

  v12[0] = 1LL;
  v12[1] = 0LL;
  v6 = a1 + 1;
  Pool3 = (int *)ExAllocatePool3(72LL, ((unsigned __int64)(unsigned int)(a1 + 1) << 7) + 64, 1650738254LL, v12, 1);
  if ( !Pool3 )
    return 0LL;
  v8 = 0;
  if ( v6 > 0 )
  {
    v9 = 0LL;
    do
    {
      v10 = &Pool3[32 * v9];
      KeInitializeSpinLock((PKSPIN_LOCK)v10 + 21);
      if ( v9 )
      {
        *((_BYTE *)v10 + 176) = 0;
        *((_QWORD *)v10 + 20) = Pool3 + 16;
      }
      else
      {
        if ( ExInitializeLookasideListEx(
               (PLOOKASIDE_LIST_EX)(v10 + 16),
               0LL,
               0LL,
               NonPagedPoolNx,
               0,
               Size,
               0x6264444Eu,
               0) < 0 )
        {
          ExFreePoolWithTag(Pool3, 0x6264444Eu);
          return 0LL;
        }
        *((_QWORD *)v10 + 20) = 0LL;
        *((_BYTE *)v10 + 176) = 1;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  *Pool3 = v6;
  result = Pool3;
  Pool3[1] = 0;
  Pool3[2] = 1650738254;
  Pool3[3] = 1650738254;
  *((_QWORD *)Pool3 + 2) = Size;
  Pool3[6] = 512;
  *((_WORD *)Pool3 + 14) = 0;
  return result;
}
