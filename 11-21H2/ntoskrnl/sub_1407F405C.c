/*
 * XREFs of sub_1407F405C @ 0x1407F405C
 * Callers:
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x14041F200 (ZwUnloadKeyEx.c)
 */

NTSTATUS __fastcall sub_1407F405C(UNICODE_STRING *a1, void *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a1;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx(&v3, a2);
  else
    return ZwUnloadKey2(&v3, 0);
}
