/*
 * XREFs of StorUnitAssignNVMeIdentity @ 0x1C0090984
 * Callers:
 *     StorProcessNVMeNewUnit @ 0x1C0090898 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     memmove @ 0x1C0024080 (memmove.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1C0056700 (StorCopyNVMeFirmwareRevision.c)
 */

__int64 __fastcall StorUnitAssignNVMeIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  size_t v6; // r8

  result = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(result + 5848);
  if ( v5 )
  {
    *(_OWORD *)(a1 + 104) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 160) = 1699567182;
    *(_OWORD *)(a1 + 169) = *(_OWORD *)(v5 + 24);
    *(_OWORD *)(a1 + 185) = *(_OWORD *)(v5 + 40);
    *(_QWORD *)(a1 + 201) = *(_QWORD *)(v5 + 56);
    StorCopyNVMeFirmwareRevision(v5, a1 + 442, 4u);
    if ( *(_WORD *)(a2 + 10) )
    {
      v6 = 255LL;
      if ( *(_WORD *)(a2 + 8) < 0xFFu )
        v6 = *(unsigned __int16 *)(a2 + 8);
      memmove((void *)(a1 + 186), *(const void **)(a2 + 16), v6);
    }
    result = 0LL;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}
