/*
 * XREFs of sub_140548A90 @ 0x140548A90
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_1405492D8 @ 0x1405492D8 (sub_1405492D8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548A90(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // eax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = a1;
  v2 = HvlInvokeFastExtendedHypercall(65699LL, (__int64)v6, 8u, 0LL, 0);
  v3 = sub_14054CA70(v2);
  if ( (dword_140D0688C & 2) != 0 )
  {
    v4 = sub_1405492D8(a1);
    if ( v3 >= 0 && v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v3;
}
