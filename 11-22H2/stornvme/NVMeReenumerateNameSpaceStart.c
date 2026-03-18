/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x1C00226AC
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0022AF0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0021B28 (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1840) + 516LL) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 232); i = (unsigned int)(i + 1) )
  {
    v3 = *(void **)(a1 + 8 * i + 1952);
    if ( v3 )
      memset(v3, 0, 0x1A8uLL);
  }
  *(_DWORD *)(a1 + 220) = 0;
  result = StorPortNotification(7LL, a1, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  return result;
}
