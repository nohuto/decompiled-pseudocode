/*
 * XREFs of sub_140990740 @ 0x140990740
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038ACD0 @ 0x14038ACD0 (sub_14038ACD0.c)
 *     sub_14038B198 @ 0x14038B198 (sub_14038B198.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1405D0668 @ 0x1405D0668 (sub_1405D0668.c)
 *     sub_1405D36C0 @ 0x1405D36C0 (sub_1405D36C0.c)
 *     sub_1405D3D68 @ 0x1405D3D68 (sub_1405D3D68.c)
 *     sub_1405D44DC @ 0x1405D44DC (sub_1405D44DC.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 *     sub_140990924 @ 0x140990924 (sub_140990924.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140990740(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 145) )
  {
    sub_1407FD7A8(a1 + 504, *(_BYTE *)(a1 + 80));
    sub_14038ACD0(a1);
  }
  if ( *(_BYTE *)(a1 + 505) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 69);
    sub_14081CEB4(a1 + 504, v2);
    sub_14038B198(a1);
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    sub_1405D36C0(*(_QWORD *)(a1 + 48), 0LL);
    sub_1402D66A8((ULONG_PTR)&qword_140C22060);
    --dword_140C22074;
    sub_1405D44DC(dword_140C22078, a1);
    if ( !dword_140C22074 )
    {
      sub_1405D3D68();
      if ( HIBYTE(word_140C22070) == 1 )
      {
        sub_1405D0668(0);
        HIBYTE(word_140C22070) = 0;
      }
    }
    sub_1402935D0((ULONG_PTR)&qword_140C22060);
  }
  if ( *(_BYTE *)(a1 + 73) )
    sub_140990924(a1);
  sub_1402D40E4(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--dword_140C222F4 )
  {
    sub_140A48330(v3);
    if ( BYTE13(xmmword_140C23400) )
    {
      BYTE13(xmmword_140C23400) = 0;
      sub_1408193F4();
    }
    sub_140A47CF8(v5, v4);
  }
  sub_1403C0F80(0);
  v6 = *(void **)(a1 + 1048);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
