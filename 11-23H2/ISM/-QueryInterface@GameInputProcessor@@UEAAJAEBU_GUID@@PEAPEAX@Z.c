/*
 * XREFs of ?QueryInterface@GameInputProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800386D0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?QueryInterface@GameInputProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ABB0 (-QueryInterface@GameInputProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameInputProcessor::QueryInterface(
        GameInputProcessor *this,
        const struct _GUID *a2,
        GameInputProcessor **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  GameInputProcessor *v5; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
  {
    v5 = (GameInputProcessor *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
LABEL_8:
    if ( !a3 )
      return 2147500035LL;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    *a3 = v5;
    return 0LL;
  }
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4;
  if ( !v4 )
  {
    v5 = this;
    goto LABEL_8;
  }
  if ( a3 )
    *a3 = 0LL;
  return 2147500034LL;
}
