/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C0021B28
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x1C00226AC (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     memmove @ 0x1C0004880 (memmove.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     NVMeQueueWorkItem @ 0x1C0016BF8 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax

  StorPortExtendedFunction(0LL, a1, 6144LL);
  result = (unsigned int)(*(_DWORD *)(a1 + 4484) + 1);
  *(_DWORD *)(a1 + 4484) = result;
  if ( *(_BYTE *)(a1 + 22) )
    result = StorPortExtendedFunction(85LL, a1, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  return result;
}
