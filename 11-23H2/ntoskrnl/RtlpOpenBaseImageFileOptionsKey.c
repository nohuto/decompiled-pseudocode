/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1407CE4AC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1407CE380 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140854990 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140860494 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  void *CurrentServerSiloGlobals; // rbx
  HANDLE v3; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 156);
  Handle = v3;
  if ( v3 )
  {
LABEL_2:
    *a1 = v3;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching
      && _InterlockedCompareExchange64(
           (volatile signed __int64 *)CurrentServerSiloGlobals + 156,
           (signed __int64)Handle,
           0LL) )
    {
      ZwClose(Handle);
      v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 156);
    }
    else
    {
      v3 = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
