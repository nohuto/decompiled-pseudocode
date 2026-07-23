/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x14077DF6C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14077DE4C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1403C4220 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x14054B790 (VslGetEtwDebugId.c)
 *     EtwpFindDebugId @ 0x14077E0BC (EtwpFindDebugId.c)
 *     MmGetImageInformation @ 0x14077E470 (MmGetImageInformation.c)
 *     EtwpGetImageSize @ 0x140875690 (EtwpGetImageSize.c)
 */

NTSTATUS __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax
  ULONG64 v8; // rdx
  ULONG64 Size; // [rsp+28h] [rbp-20h] BYREF
  PVOID BaseOfImage; // [rsp+30h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-10h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  OutHeaders = 0LL;
  BaseOfImage = 0LL;
  Size = 0LL;
  v5 = *(void **)(a2 + 88);
  if ( !v5 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v5, &BaseOfImage);
    if ( !BaseOfImage )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL), Size, &OutHeaders);
    if ( result >= 0 )
    {
      v8 = Size;
      if ( !Size )
      {
        result = EtwpGetImageSize(OutHeaders, &Size);
        v8 = Size;
      }
      if ( result >= 0 )
      {
        if ( a1 == 1
          && v8
          && ((unsigned __int64)BaseOfImage + v8 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v8 < BaseOfImage) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
        return EtwpFindDebugId(BaseOfImage);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation(v5, &BaseOfImage, &Size, &v12);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
