/*
 * XREFs of PopExtendConnectionState @ 0x14080187C
 * Callers:
 *     PopSetSessionUserStatus @ 0x1407A5FAC (PopSetSessionUserStatus.c)
 *     PopInitializeAdpm @ 0x140B35EB4 (PopInitializeAdpm.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopExtendConnectionState(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  void *v3; // rdi
  PVOID v4; // rsi

  if ( PopMaximumConnectionSessions )
  {
    if ( 2 * PopMaximumConnectionSessions <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = (unsigned int)PopMaximumConnectionSessions >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePool2(256LL, v1, 1936020304LL);
  v3 = (void *)result;
  if ( result )
  {
    v4 = PopConnectionState;
    if ( PopConnectionState )
    {
      memmove((void *)result, PopConnectionState, (unsigned __int64)(unsigned int)PopMaximumConnectionSessions >> 3);
      ExFreePoolWithTag(v4, 0x73655350u);
    }
    result = 8 * v1;
    PopConnectionState = v3;
    PopMaximumConnectionSessions = 8 * v1;
    PopConnectionBitmap.SizeOfBitMap = 8 * v1;
    PopConnectionBitmap.Buffer = (unsigned int *)v3;
  }
  else
  {
    PopMaximumConnectionSessions = 0;
  }
  return result;
}
