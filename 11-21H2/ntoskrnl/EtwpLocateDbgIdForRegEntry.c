/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x140758C68
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140758DB8 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x14054E1F4 (VslGetEtwDebugId.c)
 *     EtwpFindDebugId @ 0x1407589DC (EtwpFindDebugId.c)
 *     MmGetImageInformation @ 0x140759008 (MmGetImageInformation.c)
 *     EtwpGetImageSize @ 0x1407FCA88 (EtwpGetImageSize.c)
 */

__int64 __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, __int64 *a3, ULONG *a4)
{
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  size_t v10; // rdx
  unsigned __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v7 = *(_QWORD *)(a2 + 88);
  if ( !v7 )
    return 3221225793LL;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &v12);
    if ( !v12 )
      return 3221226021LL;
LABEL_5:
    result = RtlImageNtHeaderEx(1, v12 & 0xFFFFFFFFFFFFFFFCuLL, v11, &v13);
    if ( (int)result >= 0 )
    {
      v10 = v11;
      if ( !v11 )
      {
        result = EtwpGetImageSize(v13, &v11);
        v10 = v11;
      }
      if ( (int)result >= 0 )
      {
        if ( a1 == 1 && v10 && (v10 + v12 > 0x7FFFFFFF0000LL || v10 + v12 < v12) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v10 = v11;
        }
        return EtwpFindDebugId(v12, v10, a3, a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), (void **)a3, a4);
  result = MmGetImageInformation(v7, &v12, &v11, &v14);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
