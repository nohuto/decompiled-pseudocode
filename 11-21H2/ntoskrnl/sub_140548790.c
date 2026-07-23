/*
 * XREFs of sub_140548790 @ 0x140548790
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_140549218 @ 0x140549218 (sub_140549218.c)
 *     sub_1405492D8 @ 0x1405492D8 (sub_1405492D8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548790(unsigned int a1, int a2, int a3, unsigned int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-10h]
  int v15; // [rsp+4Ch] [rbp-Ch]

  v4 = 0;
  v5 = a1;
  if ( (dword_140D0688C & 2) != 0 )
  {
    v8 = sub_140549218(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v13 = v5;
  v14 = a2;
  v15 = a3;
  while ( 1 )
  {
    LOWORD(v9) = HvlInvokeFastExtendedHypercall(65698LL, (__int64)&v13, 0x10u, 0LL, 0);
    if ( (dword_140D0688C & 2) == 0 || !sub_140459C2A(v9) )
      break;
    if ( (int)sub_1405438E8(v10, v9, v11) < 0 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = sub_14054CA70((unsigned __int16)v9);
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_10:
  if ( v4 )
    sub_1405492D8((unsigned int)v5);
  return (unsigned int)v8;
}
