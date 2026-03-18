/*
 * XREFs of WmipRemoveDS @ 0x1408104C0
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipGenerateRegistrationNotification @ 0x14075D8DC (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1407838E0 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2u);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v1);
  }
  return result;
}
