/*
 * XREFs of TppInitializeTimer @ 0x18001EDC4
 * Callers:
 *     TpAllocTimer @ 0x18001F8B0 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18001F9C0 (TpAllocWait.c)
 * Callees:
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 */

__int64 __fastcall TppInitializeTimer(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = TppWorkInitialize(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 1LL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      TppCleanupGroupAddMember(a1);
    return 0LL;
  }
  return result;
}
