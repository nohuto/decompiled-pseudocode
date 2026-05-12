/*
 * XREFs of sub_1C0036230 @ 0x1C0036230
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0034218 @ 0x1C0034218 (sub_1C0034218.c)
 *     sub_1C0056B9C @ 0x1C0056B9C (sub_1C0056B9C.c)
 *     sub_1C005C994 @ 0x1C005C994 (sub_1C005C994.c)
 */

__int64 __fastcall sub_1C0036230(__int64 a1, IRP *a2)
{
  PVOID v2; // rbp
  signed int v5; // edi
  ULONG v7; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( *(_QWORD *)(a1 + 568) && *(_QWORD *)(a1 + 576) )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x10 )
    {
      v5 = -1073741820;
LABEL_5:
      a2->IoStatus.Information = 0LL;
      return sub_1C0003440(a2, 0, v5);
    }
    sub_1C0056B9C(*(_QWORD *)(a1 + 8), a2, &P, &v7);
    v2 = P;
    if ( !P )
    {
      v5 = -1073741801;
      goto LABEL_5;
    }
    v5 = sub_1C001F308(a1, a2, (unsigned int *)P, v7, (__int64 (__fastcall *)(_QWORD))sub_1C0020E00, 1, 128);
  }
  else
  {
    v5 = -1073741823;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
  if ( v5 < 0 )
    goto LABEL_5;
  sub_1C005C994(a1, 0LL, 1074004128LL, 5LL);
  if ( (*(_BYTE *)(a1 + 110) & 2) == 0 || !sub_1C0034218(a1, (struct _IO_WORKITEM *)a2) )
    goto LABEL_5;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return 259LL;
}
