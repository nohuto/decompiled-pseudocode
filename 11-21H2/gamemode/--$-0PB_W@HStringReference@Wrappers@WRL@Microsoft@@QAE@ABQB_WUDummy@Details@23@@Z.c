/*
 * XREFs of ??$?0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z @ 0x1000595B
 * Callers:
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81 (-RaiseException@Details@WRL@Microsoft@@YGXJK@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AAEXPB_WII@Z @ 0x10005A95 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AAEXPB_WII@Z.c)
 */

HSTRING_HEADER *__thiscall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        PCWSTR *a2,
        int a3)
{
  PCWSTR v4; // edx
  UINT32 v6; // edx
  Microsoft::WRL::Details *v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]
  unsigned int v10; // [esp+8h] [ebp-4h]

  this[1].Reserved.Reserved1 = 0;
  v4 = *a2;
  while ( *v4++ )
    ;
  v6 = v4 - (*a2 + 1);
  if ( v6 + 1 < v6 )
  {
    Microsoft::WRL::Details::RaiseException(v8, v9, v10);
    JUMPOUT(0x100059A7);
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, *a2, v6 + 1, v6);
  return this;
}
