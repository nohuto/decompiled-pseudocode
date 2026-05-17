/*
 * XREFs of RtlCompressBuffer @ 0x180084780
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x1801266FC (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 5u )
    return 3221226079LL;
  return RtlCompressBufferProcs[(unsigned __int8)a1](a1 & 0xFF00);
}
