/*
 * XREFs of MiMapSystemImage @ 0x140695E88
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B280 (MiMakeZeroedPageTables.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiDeleteSessionDriverProtos @ 0x140682C1C (MiDeleteSessionDriverProtos.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiBytesToMapSystemImage @ 0x140696AE4 (MiBytesToMapSystemImage.c)
 *     MiAddMappedPtes @ 0x1406AD7D0 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5FE0 (MiCreatePerSessionProtos.c)
 *     MiMapPatchTable @ 0x140A3A510 (MiMapPatchTable.c)
 *     MiUnmapPatchTable @ 0x140A3C460 (MiUnmapPatchTable.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rbp
  char v9; // r9
  int v10; // r12d
  int v11; // esi
  __int64 result; // rax
  int PteAddress; // eax
  unsigned __int64 v14; // rdi
  int v15; // r15d
  __int64 v16; // rdi
  unsigned int SessionId; // eax
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h] BYREF

  v22 = 0LL;
  v7 = (__int64 *)MiSectionControlArea(a1);
  v8 = *(unsigned int *)(*v7 + 8);
  if ( (v9 & 1) == 0 )
  {
    v10 = 1;
    v11 = -1;
    result = MiChargeSystemImageCommitment(v6, 1LL);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = MiGetPteAddress(a2);
    v14 = 0LL;
    v21 = PteAddress;
    if ( a3 )
    {
      v14 = a2 + ((unsigned __int64)*(unsigned int *)(*v7 + 8) << 12);
      v15 = MiMapPatchTable(v14, a3);
      if ( v15 < 0 )
      {
LABEL_23:
        if ( v10 == 1 )
        {
          MiChargeSystemImageCommitment(a1, 0LL);
        }
        else if ( (v7[7] & 0x8000000) != 0 )
        {
          MiDereferencePerSessionProtos(v7);
        }
        if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*v7 + 32) )
          MiDeleteSessionDriverProtos(v7);
        return (unsigned int)v15;
      }
      PteAddress = v21;
    }
    v15 = MiAddMappedPtes(PteAddress, v8, (_DWORD)v7, (unsigned int)&v22, v11, 1);
    if ( v15 >= 0 )
    {
      if ( v10 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65950 + 3, v8);
      return 0LL;
    }
    if ( v14 )
    {
      v20 = MiGetPteAddress(v14);
      MiUnmapPatchTable(v20);
    }
    goto LABEL_23;
  }
  v16 = MiBytesToMapSystemImage(v8 << 12);
  if ( !v16 )
    return 3221225503LL;
  v10 = 0;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( (v7[7] & 0x8000000) == 0 || (result = MiCreatePerSessionProtos(v7, SessionId), (int)result >= 0) )
  {
    MiGetPteAddress(v16 + a2 - 1);
    v18 = MiGetPteAddress(a2);
    if ( (unsigned int)MiMakeZeroedPageTables(v18, v19, 1, 1) )
      goto LABEL_3;
    if ( (v7[7] & 0x8000000) != 0 )
      MiDereferencePerSessionProtos(v7);
    return 3221225495LL;
  }
  return result;
}
