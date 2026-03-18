/*
 * XREFs of RIMRegOpenKey @ 0x1C006DADC
 * Callers:
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C006D7B8 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMRegQueryDWord @ 0x1C006DA64 (RIMRegQueryDWord.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01997AC (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     <none>
 */

void *__fastcall RIMRegOpenKey(struct _UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  struct _OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF
  void *v4; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0LL;
  v3.ObjectName = a1;
  v4 = 0LL;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v4, 0x20019u, &v3) >= 0 )
    return v4;
  return (void *)v1;
}
