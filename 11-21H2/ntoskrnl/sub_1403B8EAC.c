/*
 * XREFs of sub_1403B8EAC @ 0x1403B8EAC
 * Callers:
 *     sub_1403B8E60 @ 0x1403B8E60 (sub_1403B8E60.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B90AC @ 0x1403B90AC (sub_1403B90AC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

PVOID sub_1403B8EAC()
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _OWORD *v1; // rdi
  PHYSICAL_ADDRESS v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r8d
  int v6; // r11d
  int v7; // r8d
  unsigned __int64 v8; // rax
  PVOID result; // rax

  PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
  v1 = BaseAddress;
  v2 = PhysicalAddress;
  memmove(BaseAddress, &sub_140025050, 0x679uLL);
  v1 = (_OWORD *)((char *)v1 + 1657);
  v3 = (int)v1;
  *v1 = xmmword_140024FF0;
  v1[1] = xmmword_140025000;
  v1[2] = xmmword_140025010;
  v1[3] = xmmword_140025020;
  v1[4] = xmmword_140025030;
  *((_QWORD *)v1 + 10) = 0x90878B300FLL;
  *((_DWORD *)v1 + 22) = -4185585;
  *((_WORD *)v1 + 46) = 26223;
  v1 = (_OWORD *)((char *)v1 + 94);
  *((_WORD *)BaseAddress + 50) = 48;
  *((_DWORD *)BaseAddress + 24) = v2.LowPart + v3 - (_DWORD)BaseAddress;
  memmove(v1, sub_14041B0B0, algn_14041B0C3 - (_BYTE *)sub_14041B0B0);
  *((_WORD *)BaseAddress + 53) = 16;
  *(_DWORD *)((char *)BaseAddress + 102) = v2.LowPart + (_DWORD)v1 - (_DWORD)BaseAddress;
  *((_QWORD *)BaseAddress + 15) = BaseAddress;
  *((_QWORD *)BaseAddress + 14) = qword_14041B0E0;
  sub_1403B90AC((_DWORD)BaseAddress + 24, 48, v4, -1, 27, 0);
  sub_1403B90AC((_DWORD)BaseAddress + 24, 32, v5, v6, 19, 0);
  sub_1403B90AC((_DWORD)BaseAddress + 24, 16, v7, 0, 27, 1);
  *((_WORD *)BaseAddress + 6) = 63;
  *(_DWORD *)((char *)BaseAddress + 14) = v2.LowPart + 24;
  *((_QWORD *)BaseAddress + 16) = __readmsr(0x277u);
  v8 = __readmsr(0xC0000080);
  *((_QWORD *)BaseAddress + 17) = ((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8;
  result = BaseAddress;
  *((_QWORD *)BaseAddress + 17) &= ~0x400uLL;
  qword_140C4E1F8 = v2.QuadPart;
  return result;
}
