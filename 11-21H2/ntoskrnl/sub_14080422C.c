/*
 * XREFs of sub_14080422C @ 0x14080422C
 * Callers:
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 * Callees:
 *     sub_140250FF0 @ 0x140250FF0 (sub_140250FF0.c)
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     sub_140395610 @ 0x140395610 (sub_140395610.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14080422C(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  v1 = sub_14025DBFC(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)sub_14081287C(v1, &P, &v7) >= 0 && v7 )
  {
    v5 = P;
    v6 = v7;
    do
    {
      if ( (int)sub_140813164(v2, *v5, 983103LL, &v9) >= 0 && (int)sub_14080422C(v9) < 0 )
        sub_1408132F0(v9);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = sub_140395610(v2);
  if ( v3 >= 0 )
    sub_140250FF0(v2);
  return (unsigned int)v3;
}
