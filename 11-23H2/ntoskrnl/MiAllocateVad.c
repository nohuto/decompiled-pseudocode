/*
 * XREFs of MiAllocateVad @ 0x1407CFEA8
 * Callers:
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiAllocateProcessVads @ 0x1407CFE00 (MiAllocateProcessVads.c)
 *     MiCreatePlaceholderStorage @ 0x140A47EE0 (MiCreatePlaceholderStorage.c)
 * Callees:
 *     MiUpdateVadStartVpn @ 0x14029CB98 (MiUpdateVadStartVpn.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  _QWORD *Pool; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // edx
  unsigned __int64 v11; // r8

  Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
  v7 = (__int64)Pool;
  if ( Pool )
  {
    Pool[2] = -2LL;
    MiUpdateVadStartVpn((__int64)Pool, a1 >> 12);
    v9 = *(_DWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 40) = 0LL;
    v10 = v9 & 0xFFFFF07F | 0x80;
    *(_DWORD *)(v8 + 28) = a2 >> 12;
    *(_BYTE *)(v8 + 33) = a2 >> 44;
    if ( (a3 & 1) != 0 )
    {
      v11 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
          + 1;
      *(_DWORD *)(v7 + 52) |= 0x80000000;
    }
    else if ( (a3 & 2) != 0 )
    {
      v11 = 0x7FFFFFFFDLL;
      v10 = v10 & 0xFFFFF07F | 0xC00;
    }
    else
    {
      v11 = 0x7FFFFFFFFLL;
    }
    *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ v11) & 0x7FFFFFFF;
    *(_BYTE *)(v7 + 34) = v11 >> 31;
    *(_DWORD *)(v7 + 48) = v10 | 0x200000;
    if ( (a3 & 2) != 0 || MiAddSecureEntry(v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  return 0LL;
}
