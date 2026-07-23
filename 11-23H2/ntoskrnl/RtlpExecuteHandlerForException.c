/*
 * XREFs of RtlpExecuteHandlerForException @ 0x14042A470
 * Callers:
 *     RtlDispatchException @ 0x1402A4050 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpExecuteHandlerForException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64))(a4 + 48))(a1);
}
