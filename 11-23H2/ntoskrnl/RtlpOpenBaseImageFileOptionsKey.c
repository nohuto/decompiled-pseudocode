/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1407CE1DC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1407CE0B0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140854690 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140860254 (RtlpOpenBaseImageFileOptionsKeyEx.c)
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
