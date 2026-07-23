/*
 * XREFs of sub_140995E60 @ 0x140995E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140809508 @ 0x140809508 (sub_140809508.c)
 *     sub_1409C56F0 @ 0x1409C56F0 (sub_1409C56F0.c)
 */

void sub_140995E60()
{
  char v0; // di
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  if ( byte_140C20C19 )
  {
    unk_140C20C18 = 0;
    v0 = 1;
    sub_140809508((__int64)&qword_140C20BC0);
  }
  else
  {
    byte_140C20C19 = 1;
    v1 = 1;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  if ( v0 )
  {
    sub_1409C56F0(v3, 0LL);
  }
  else if ( v1 )
  {
    LOBYTE(v2) = 1;
    sub_1409C56F0(v3, v2);
    v4[0] = 0LL;
    v4[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C20C40, -50000000LL, 0LL, (__int64)v4);
  }
}
