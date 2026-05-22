/*
 * XREFs of ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800FDDF4
 * Callers:
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800FE6C0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcMessage::DiscardAttributes(AlpcMessage *this, void *a2)
{
  int v3; // eax
  int v4; // edx

  if ( (*((_DWORD *)this + 85) & 0x40000000) != 0 )
  {
    v3 = NtAlpcDeleteSectionView(a2, 0LL);
    if ( v3 < 0 )
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v3, v4);
    *((_DWORD *)this + 85) &= ~0x40000000u;
  }
  return 0LL;
}
