/*
 * XREFs of sub_140752F30 @ 0x140752F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1406E8E9C @ 0x1406E8E9C (sub_1406E8E9C.c)
 *     sub_140752B6C @ 0x140752B6C (sub_140752B6C.c)
 *     sub_140752BB4 @ 0x140752BB4 (sub_140752BB4.c)
 *     sub_140752DA8 @ 0x140752DA8 (sub_140752DA8.c)
 */

__int64 sub_140752F30()
{
  bool v0; // si
  int v2; // ecx
  int v3; // ebx
  unsigned __int8 v4; // di
  unsigned __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  v0 = stru_140C21D40.Header.SignalState == 0;
  sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
  while ( _BitScanForward((unsigned int *)&v2, dword_140C1FC20) )
  {
    _InterlockedAnd(&dword_140C1FC20, ~(1 << v2));
    if ( v2 == 2 )
      sub_1406E8E9C(2u);
  }
  sub_140752B6C();
  v3 = dword_140C095F4;
  v4 = sub_140752BB4((__int64)&unk_140C09608, dword_140C095F4, &v6, (__int64)&unk_140C09708);
  dword_140C096E8 = dword_140C095F0;
  sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
  if ( byte_140C5AE3C )
    sub_1402D6330(v3, v6 / (unsigned int)dword_140C09830);
  sub_140752DA8(dword_140C096E8, v4, (__int64)&unk_140C096F0);
  sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
  dword_140C096E8 = 0;
  sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
  if ( v0 )
    KeSetEvent(&stru_140C21D40, 0, 0);
  return 0LL;
}
