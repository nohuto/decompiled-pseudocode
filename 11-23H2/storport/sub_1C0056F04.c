/*
 * XREFs of sub_1C0056F04 @ 0x1C0056F04
 * Callers:
 *     sub_1C0037340 @ 0x1C0037340 (sub_1C0037340.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0056F04(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *v8; // rax
  __int64 result; // rax

  v4 = 0;
  v8 = (_DWORD *)sub_1C0007CF4(64LL, 108LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( v8 )
  {
    v8[4] = 2954880;
    *v8 = 28;
    v8[3] = *(_DWORD *)(a1 + 4060);
    v8[6] = 80;
    v8[8] = 80;
    v8[7] = 1;
  }
  else
  {
    v4 = -1073741670;
  }
  *a3 = v8;
  result = v4;
  *a4 = 108;
  return result;
}
