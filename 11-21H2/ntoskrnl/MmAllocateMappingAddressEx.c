/*
 * XREFs of MmAllocateMappingAddressEx @ 0x1407F9D50
 * Callers:
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     sub_1409525B4 @ 0x1409525B4 (sub_1409525B4.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140386294 @ 0x140386294 (sub_140386294.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B6C18 @ 0x1405B6C18 (sub_1405B6C18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rax
  _QWORD *v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rbp
  int v10; // r13d
  _QWORD *v12; // [rsp+30h] [rbp-88h]
  _QWORD v13[5]; // [rsp+38h] [rbp-80h] BYREF
  int v14; // [rsp+60h] [rbp-58h]
  int v15; // [rsp+64h] [rbp-54h]
  __int64 v16; // [rsp+68h] [rbp-50h]
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+0h]

  v3 = a2;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 0LL;
  v5 = (unsigned __int64)(a1 + 4095) >> 12;
  if ( !v5 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, a2, BugCheckParameter4);
  if ( !a2 )
    return 0LL;
  if ( v5 >= 0x100000000LL )
    return 0LL;
  v12 = sub_1402828F0(64, 0x30uLL, 0x6D72694Du);
  if ( !v12 )
    return 0LL;
  v6 = sub_1403095B0((__int64)&qword_140C534C0, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  v8 = 0;
  v12[4] = v5;
  v9 = (__int64)(v6 << 25) >> 16;
  v12[3] = v9;
  *((_DWORD *)v12 + 10) = v3;
  *((_DWORD *)v12 + 11) = a3;
  do
  {
    v10 = 0;
    if ( sub_140317A80((unsigned __int64)v7) && (unsigned int)sub_140229550() )
      v10 = 1;
    *v7 = 0LL;
    if ( v10 )
      sub_1402294F0((__int64)v7, 0LL);
    ++v8;
    ++v7;
  }
  while ( v8 < v5 );
  if ( (dword_140D051BC & 1) != 0 )
  {
    v13[0] = 0LL;
    v13[1] = 0LL;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v13[3] = v9;
    v13[4] = v3;
    v13[2] = v5 << 12;
    sub_1405B6C18((__int64)v13, 2, 0, 1);
  }
  sub_140386294(v12);
  return v9;
}
