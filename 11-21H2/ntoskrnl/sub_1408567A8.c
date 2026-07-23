/*
 * XREFs of sub_1408567A8 @ 0x1408567A8
 * Callers:
 *     FsRtlRegisterUncProviderEx2 @ 0x140856780 (FsRtlRegisterUncProviderEx2.c)
 *     FsRtlRegisterUncProvider @ 0x14092E270 (FsRtlRegisterUncProvider.c)
 *     FsRtlRegisterUncProviderEx @ 0x14092E2B0 (FsRtlRegisterUncProviderEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1408568A0 @ 0x1408568A0 (sub_1408568A0.c)
 *     sub_14085698C @ 0x14085698C (sub_14085698C.c)
 */

__int64 __fastcall sub_1408567A8(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v5; // esi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = (HANDLE)-1LL;
  if ( a1 && *(_QWORD *)(a1 + 8) && *(_WORD *)a1 && *(_WORD *)(a1 + 2) && (*(_WORD *)(a3 + 2) < 0x101u || a2) )
  {
    KeWaitForSingleObject(&stru_140C48B40, Executive, 0, 0, 0LL);
    v5 = sub_14085698C(&Handle);
    if ( v5 < 0 || (v5 = sub_1408568A0(Handle), v5 < 0) )
    {
      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(Handle);
      *a4 = (HANDLE)-1LL;
    }
    else
    {
      ++dword_140D3B1D4;
      *a4 = Handle;
    }
    KeReleaseSemaphore(&stru_140C48B40, 0, 1, 0);
    return (unsigned int)v5;
  }
  else
  {
    *a4 = (HANDLE)-1LL;
    return 3221225485LL;
  }
}
