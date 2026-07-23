/*
 * XREFs of sub_1406DE960 @ 0x1406DE960
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 *     sub_1403CF9A0 @ 0x1403CF9A0 (sub_1403CF9A0.c)
 *     sub_1403DB834 @ 0x1403DB834 (sub_1403DB834.c)
 *     sub_1403DD580 @ 0x1403DD580 (sub_1403DD580.c)
 *     sub_140559190 @ 0x140559190 (sub_140559190.c)
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_14084C474 @ 0x14084C474 (sub_14084C474.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_14085D4CC @ 0x14085D4CC (sub_14085D4CC.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     sub_14093CA08 @ 0x14093CA08 (sub_14093CA08.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall sub_1406DE960(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
