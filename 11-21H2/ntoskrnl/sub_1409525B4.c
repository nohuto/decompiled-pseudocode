/*
 * XREFs of sub_1409525B4 @ 0x1409525B4
 * Callers:
 *     sub_140951C58 @ 0x140951C58 (sub_140951C58.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmAllocateMappingAddressEx @ 0x1407F9D50 (MmAllocateMappingAddressEx.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 */

__int64 __fastcall sub_1409525B4(__int16 a1, __int64 a2)
{
  unsigned int v4; // esi
  void *MappingAddress; // rax
  void *v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  PMDL Mdl; // rax

  v4 = 0;
  MappingAddress = (void *)MmAllocateMappingAddressEx(0x10000LL, 0x51706E50u, 0);
  v6 = MappingAddress;
  if ( MappingAddress )
  {
    Mdl = IoAllocateMdl(MappingAddress, 0x10000u, 0, 0, 0LL);
    if ( Mdl )
    {
      *(_QWORD *)a2 = Mdl;
      *(_QWORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 16) = a1;
      return v4;
    }
    MmFreeMappingAddress(v6, 0x51706E50u);
    v7 = 3936;
  }
  else
  {
    v7 = 3921;
  }
  v8 = qword_140C448A8;
  v4 = -1073741670;
  v9 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v9 )
    v9 = v7;
  *(_DWORD *)(qword_140C448A8 + 33272) = v9;
  v10 = *(_DWORD *)(v8 + 33276);
  if ( !v10 )
    v10 = 10;
  *(_DWORD *)(v8 + 33276) = v10;
  return v4;
}
