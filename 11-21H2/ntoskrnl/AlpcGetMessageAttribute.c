/*
 * XREFs of AlpcGetMessageAttribute @ 0x14036A1D0
 * Callers:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_1407EFAD0 @ 0x1407EFAD0 (sub_1407EFAD0.c)
 *     sub_14081AE90 @ 0x14081AE90 (sub_14081AE90.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14036A270 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
