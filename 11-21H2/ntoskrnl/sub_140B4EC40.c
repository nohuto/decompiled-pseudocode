/*
 * XREFs of sub_140B4EC40 @ 0x140B4EC40
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_140B2E564 @ 0x140B2E564 (sub_140B2E564.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140962C48 @ 0x140962C48 (sub_140962C48.c)
 *     sub_140B4EEC8 @ 0x140B4EEC8 (sub_140B4EEC8.c)
 */

__int64 __fastcall sub_140B4EC40(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  union _KIDTENTRY64 *IdtBase; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-49h]
  int v8; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-35h] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-29h] BYREF

  result = *(_QWORD *)(a1 + 240);
  v9[0] = 0;
  v8 = 0;
  if ( (*(_DWORD *)(result + 132) & 0x200) != 0 )
  {
    if ( !sub_140294D28(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, v3 & v7);
    memset(v10, 0, 0x68uLL);
    LODWORD(v10[1]) = 167772171;
    v10[2] = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL).QuadPart;
    sub_140B4EEC8(a1, v10);
    IdtBase = KeGetPcr()->IdtBase;
    v10[8] = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList).QuadPart;
    v10[10] = MmGetPhysicalAddress(IdtBase).QuadPart;
    sub_1403C2120((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    sub_14042A5E0(45LL, 8LL);
    MEMORY[0xFFFFF7800000036C] |= 0x100u;
    if ( dword_140D06C10 )
      HIDWORD(v10[1]) |= 1u;
    sub_140962C48(v9, 4u, &v8);
    v5 = HIDWORD(v10[1]);
    if ( ((v9[0] >> 4) & 1) != 0 )
    {
      v5 = HIDWORD(v10[1]) | 2;
      HIDWORD(v10[1]) |= 2u;
    }
    if ( qword_140C4E580 )
    {
      v5 |= 4u;
      HIDWORD(v10[1]) = v5;
    }
    if ( ((v9[0] >> 4) & 1) != 0 && dword_140D06B00 > 0 )
    {
      v5 |= 8u;
      HIDWORD(v10[1]) = v5;
    }
    if ( dword_140D06B8C )
      HIDWORD(v10[1]) = v5 | 0x10;
    v9[2] = dword_140E0184C & 2;
    v10[6] = qword_140D068D8;
    v10[7] = qword_140D06958;
    v6 = sub_140358A20(2u, 208, 0, (__int64)v10);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Fu, v6, 0LL, 1uLL, 0LL);
    if ( LODWORD(v10[2]) != 167772171 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    v9[1] = 0;
    qword_140C487B0 = (__int64)&qword_140C487A8;
    qword_140C487A8 = (__int64)&qword_140C487A8;
    dword_140C487A4 = HIDWORD(v10[2]);
    dword_140C487B8 = HIDWORD(v10[2]);
    byte_140C487A0 = 5;
    byte_140C487A2 = 8;
    byte_140D06888 = 1;
    sub_14042A5E0(16LL, 4LL);
    return sub_14042A5E0(18LL, 4LL);
  }
  return result;
}
