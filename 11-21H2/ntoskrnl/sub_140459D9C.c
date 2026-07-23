/*
 * XREFs of sub_140459D9C @ 0x140459D9C
 * Callers:
 *     sub_140417D50 @ 0x140417D50 (sub_140417D50.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140559350 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405593B0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140559460 (IoSetFsZeroingOffsetRequired.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 * Callees:
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 */

bool __fastcall sub_140459D9C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  __int16 v8; // cx
  __int16 v10; // ax

  v3 = a2;
  if ( *(char *)(a1 + 71) < 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 1;
  v5 = dword_140C0959C;
  if ( (unsigned int)dword_140C0959C >= 2 )
    v5 = (unsigned __int8)sub_14065863C(a1, a2, a3);
  v6 = 1 << v3;
  v7 = (1 << v3) & 0xB2;
  if ( v5 )
  {
    if ( !v7 )
    {
      if ( (v6 & 0x200) == 0 )
        return 1;
      v10 = *(_WORD *)(v4 + 2);
      return (v10 & 0x200) == 0 || (v10 & 0x200) == v6;
    }
  }
  else if ( !v7 )
  {
    return 1;
  }
  v8 = *(_WORD *)(v4 + 2);
  if ( (v8 & 0xB2) == 0 || (v8 & 0xB2) == v6 )
    return 1;
  if ( v3 != 1 && (v8 & 2) != 0 )
  {
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_WORD *)(v4 + 2) = v8 & 0xFFFE;
    return 1;
  }
  return 0;
}
