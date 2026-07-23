/*
 * XREFs of sub_140981A04 @ 0x140981A04
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405BF56C @ 0x1405BF56C (sub_1405BF56C.c)
 */

void __fastcall sub_140981A04(_QWORD *a1, ULONG_PTR *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  unsigned __int64 v7; // rbx

  BugCheckParameter4 = a1[2090];
  sub_1405BF56C((__int64)a1);
  v5 = 0;
  if ( word_140D05000 )
  {
    v6 = (ULONG_PTR *)(a1[2] + 22904LL);
    do
    {
      if ( *v6 )
        KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
      v6 += 3064;
      ++v5;
    }
    while ( v5 < (unsigned __int16)word_140D05000 );
  }
  if ( a1[816] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, a1[2090], a1[2112]);
  if ( a1[2090] )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, a1[2090], a1[2112]);
  if ( a1[2112] )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, a1[2112], 0LL);
  if ( a1[2157] )
    KeBugCheckEx(0x1Au, 0x41009uLL, a1[2157], a1[2187], BugCheckParameter4);
  if ( a1[2120] != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2120], a1[2187]);
  sub_140216E18((__int64)a2, a1[2120]);
  v7 = a1[2187];
  if ( a2 == &StartContext )
  {
    sub_14028CE10((__int64)a2, v7);
    _InterlockedExchangeAdd64(&qword_140C53530, -(__int64)v7);
  }
  else
  {
    sub_1403CF51C((__int64)a2, v7, v7, 0, 0LL);
  }
}
