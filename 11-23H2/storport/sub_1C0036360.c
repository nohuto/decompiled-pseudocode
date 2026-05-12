/*
 * XREFs of sub_1C0036360 @ 0x1C0036360
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C001F9A4 @ 0x1C001F9A4 (sub_1C001F9A4.c)
 *     sub_1C00364AC @ 0x1C00364AC (sub_1C00364AC.c)
 *     sub_1C0056CF4 @ 0x1C0056CF4 (sub_1C0056CF4.c)
 */

__int64 __fastcall sub_1C0036360(__int64 a1, IRP *a2)
{
  PVOID v2; // rdi
  signed int v5; // ebx
  ULONG v7; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF

  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 568) || !*(_QWORD *)(a1 + 576) )
  {
    v5 = -1073741823;
    goto LABEL_13;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    v5 = -1073741820;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 5300) )
    goto LABEL_10;
  sub_1C001F9A4(*(_QWORD *)(a1 + 8), (__int64)a2, (__int64 *)&P, &v7);
  v2 = P;
  if ( !P )
  {
LABEL_7:
    v5 = -1073741801;
    goto LABEL_15;
  }
  v5 = sub_1C00364AC(a1, a2, P, v7);
  if ( v5 >= 0 )
  {
    ExFreePoolWithTag(v2, 0x72536152u);
    P = 0LL;
    v7 = 0;
LABEL_10:
    sub_1C0056CF4(*(_QWORD *)(a1 + 8), a2, &P, &v7);
    v2 = P;
    if ( !P )
      goto LABEL_7;
    v5 = sub_1C001F308(a1, a2, (unsigned int *)P, v7, (__int64 (__fastcall *)(_QWORD))sub_1C0020E00, 0, 128);
  }
LABEL_13:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v5);
}
