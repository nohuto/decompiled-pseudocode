/*
 * XREFs of sub_140844508 @ 0x140844508
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 * Callees:
 *     HalConvertDeviceIdtToIrql @ 0x140844630 (HalConvertDeviceIdtToIrql.c)
 *     sub_140844658 @ 0x140844658 (sub_140844658.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140844508(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  int v5; // eax
  __int64 result; // rax
  _DWORD *v7; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int16 v12; // ax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  P = 0LL;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 != 129 )
    return (unsigned int)(v5 - 130) > 2 ? 0xC00000BB : 0;
  result = sub_140844658(&P);
  if ( (int)result >= 0 )
  {
    v7 = P;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(20 * *((_DWORD *)P + 9) + 39), 1886150984LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      Pool2[2] = -1;
      *Pool2 = 1;
      Pool2[1] = 15;
      Pool2[3] = 65537;
      Pool2[4] = v7[9];
      if ( v7[9] )
      {
        do
        {
          v10 = 8LL * v3;
          v11 = 5LL * v3;
          LOBYTE(v9[v11 + 5]) = BYTE1(v7[v10 + 10]);
          BYTE1(v9[v11 + 5]) = BYTE2(v7[v10 + 10]);
          HIWORD(v9[v11 + 5]) = v7[v10 + 11];
          ++v3;
          LOWORD(v9[v11 + 6]) = (unsigned __int8)HalConvertDeviceIdtToIrql((unsigned int)v7[v10 + 12]);
          v9[v11 + 7] = v7[v10 + 12];
          v12 = HIWORD(v7[v10 + 14]);
          *(_QWORD *)&v9[v11 + 8] = -1LL;
          HIWORD(v9[v11 + 6]) = v12;
        }
        while ( v3 < v7[9] );
      }
      *a2 = v9;
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    else
    {
      ExFreePoolWithTag(v7, 0);
      return 3221225626LL;
    }
  }
  return result;
}
