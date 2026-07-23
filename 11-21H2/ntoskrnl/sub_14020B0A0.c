/*
 * XREFs of sub_14020B0A0 @ 0x14020B0A0
 * Callers:
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 */

__int64 __fastcall sub_14020B0A0(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 != off_140C06A80 )
  {
    v2 = v1[8];
    if ( v2 )
    {
      *(_DWORD *)(v2 + 4) &= ~1u;
      return PsReleaseSiloHardReference(*(PVOID *)(v2 + 8));
    }
  }
  return result;
}
