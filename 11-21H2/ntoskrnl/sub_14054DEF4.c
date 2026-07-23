/*
 * XREFs of sub_14054DEF4 @ 0x14054DEF4
 * Callers:
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054DEF4(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v10; // ebx
  _QWORD v12[14]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v13[112]; // [rsp+90h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  v6 = *(char **)(a3 + 32);
  v7 = *(_DWORD *)(a3 + 8) >> 12;
  LODWORD(v12[1]) = v7;
  if ( ((unsigned __int16)v6 & 0xFFF) != 0 || v6 != *(char **)a3 || (*(_DWORD *)(a3 + 40) & 0xFFF) != 0 || v7 > 0xB )
  {
    v10 = -1073741811;
LABEL_10:
    memset(v13, 0, 0x68uLL);
    sub_140358A20(2u, 60, 0, (__int64)v13);
    return (unsigned int)v10;
  }
  v8 = 0LL;
  if ( v7 )
  {
    do
    {
      PhysicalAddress = MmGetPhysicalAddress(v6);
      v6 += 4096;
      v12[v8 + 2] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < LODWORD(v12[1]) );
  }
  v10 = sub_140358A20(2u, 59, 0, (__int64)v12);
  if ( v10 < 0 )
    goto LABEL_10;
  *a1 = v12[2];
  *a2 = v12[3];
  *(_DWORD *)(a3 + 40) = v12[4];
  return (unsigned int)v10;
}
