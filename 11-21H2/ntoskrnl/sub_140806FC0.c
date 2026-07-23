/*
 * XREFs of sub_140806FC0 @ 0x140806FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140397BB4 @ 0x140397BB4 (sub_140397BB4.c)
 *     sub_14039ADE8 @ 0x14039ADE8 (sub_14039ADE8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 */

__int64 __fastcall sub_140806FC0(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    v2 = sub_14039ADE8(*(_DWORD *)(a1 + 60));
    memset(v6, 0, sizeof(v6));
    v3 = v2 & 0xFFFFFF;
    LODWORD(v6[0]) = 5;
    sub_140809310(a1, v6);
    sub_1402935D0((ULONG_PTR)&qword_140C21D20);
    if ( qword_140C5AD70 )
      sub_14042A5E0(1LL, v4);
    sub_140753094(1);
    sub_140397BB4(10, 1);
    sub_1402935D0((ULONG_PTR)&qword_140C24280);
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    sub_140809838(3LL, v3);
    sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  }
  return 0LL;
}
