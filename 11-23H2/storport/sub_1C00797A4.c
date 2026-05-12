/*
 * XREFs of sub_1C00797A4 @ 0x1C00797A4
 * Callers:
 *     sub_1C0056144 @ 0x1C0056144 (sub_1C0056144.c)
 * Callees:
 *     sub_1C00B1DDC @ 0x1C00B1DDC (sub_1C00B1DDC.c)
 */

void __fastcall sub_1C00797A4(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v1 = *(_QWORD **)a1;
  if ( **(_DWORD **)a1 == 56 )
  {
    v1[6] = 0LL;
    if ( v1[5] )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 160LL, 1666477136LL);
      v4 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 160;
        v5 = v1[5];
        Pool2[1] = v5;
        Pool2[2] = *(_QWORD *)(v5 + 104);
        *(_QWORD *)(v5 + 104) = v1[4];
        sub_1C00B1DDC(Pool2);
        v1[6] = v4;
        *(_DWORD *)(a1 + 8) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = -1073741670;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741811;
  }
}
