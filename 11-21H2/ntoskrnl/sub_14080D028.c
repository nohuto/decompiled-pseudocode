/*
 * XREFs of sub_14080D028 @ 0x14080D028
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_140752B6C @ 0x140752B6C (sub_140752B6C.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_14080D164 @ 0x14080D164 (sub_14080D164.c)
 *     sub_14080D294 @ 0x14080D294 (sub_14080D294.c)
 *     sub_14080D2E0 @ 0x14080D2E0 (sub_14080D2E0.c)
 */

void __fastcall sub_14080D028(unsigned int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_140C548DC != a1 )
  {
    dword_140C548DC = a1;
    sub_14080D2E0();
    sub_1407EED48();
    Buffer = dword_140C548DC;
    sub_1407525EC(&stru_14000FFE8, 4u, &Buffer);
    sub_14080D294(a1);
    Buffer = dword_140C548DC != 0;
    sub_1407525EC(&stru_14000FFD8, 4u, &Buffer);
    ZwUpdateWnfStateData(&stru_14000FFD0, &Buffer, 4u, 0LL, 0LL, 0, 0);
    sub_14080D164(0LL);
    sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
    sub_140752B6C();
    dword_140C09600 = a1;
    sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
  }
}
