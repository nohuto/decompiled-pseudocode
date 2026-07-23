/*
 * XREFs of sub_1407428FC @ 0x1407428FC
 * Callers:
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1407428FC(HANDLE *a1, struct _KRESOURCEMANAGER *a2, struct _KTRANSACTION *a3, void *a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+50h] [rbp-38h] BYREF

  *(&v5.Length + 1) = 0;
  *(&v5.Attributes + 1) = 0;
  if ( byte_140D01104 == 1 )
    return -1073741431;
  v5.Length = 48;
  v5.RootDirectory = 0LL;
  v5.Attributes = 512;
  v5.ObjectName = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return TmCreateEnlistment_0(a1, 0, 0xF001Fu, &v5, a2, a3, 0, 0xEu, a4);
}
