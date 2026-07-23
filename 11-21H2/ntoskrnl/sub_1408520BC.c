/*
 * XREFs of sub_1408520BC @ 0x1408520BC
 * Callers:
 *     sub_140851DAC @ 0x140851DAC (sub_140851DAC.c)
 *     sub_140851EBC @ 0x140851EBC (sub_140851EBC.c)
 *     sub_140A01EE4 @ 0x140A01EE4 (sub_140A01EE4.c)
 * Callees:
 *     sub_1406DCB98 @ 0x1406DCB98 (sub_1406DCB98.c)
 *     sub_1408521A4 @ 0x1408521A4 (sub_1408521A4.c)
 *     sub_140A02158 @ 0x140A02158 (sub_140A02158.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408520BC(__int64 a1, int a2, int a3, unsigned __int16 *a4, int a5)
{
  _DWORD *PoolWithTag; // rbx
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // r9d
  int v13; // esi
  int v14; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2E0uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a4);
    sub_1408521A4((_DWORD)PoolWithTag, a2, a3, a1, (__int64)a4, a5);
    v13 = 0;
    if ( 2 * PoolWithTag[179] > 0 )
    {
      while ( 1 )
      {
        v14 = sub_1406DCB98(PoolWithTag, v10 + 276, v11, v12);
        if ( v14 < 0 )
          break;
        if ( ++v13 >= (2 * PoolWithTag[179]) >> 1 )
          goto LABEL_3;
      }
      sub_140A02158(PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
LABEL_3:
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5) = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
