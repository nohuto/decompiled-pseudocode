/*
 * XREFs of sub_1403C0F80 @ 0x1403C0F80
 * Callers:
 *     sub_1408292C0 @ 0x1408292C0 (sub_1408292C0.c)
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

void __fastcall sub_1403C0F80(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1402D66A8((ULONG_PTR)&qword_140C222A0);
  if ( a1 )
  {
    if ( ++dword_140C22094 == 1 )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&unk_140C220A0, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--dword_140C22094 )
  {
    KeCancelTimer2((__int64)&unk_140C220A0);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222A0);
}
