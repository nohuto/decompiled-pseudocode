/*
 * XREFs of sub_14077503C @ 0x14077503C
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_140774EC0 @ 0x140774EC0 (sub_140774EC0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 */

__int64 __fastcall sub_14077503C(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    sub_1407756F4(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL);
    if ( v3 )
    {
      sub_1408442B0(v2);
      sub_14085C97C(v2);
    }
    ExReleaseResourceLite(&stru_140C46AC0);
    sub_140775698(0LL);
    if ( v3 )
      sub_14076BC20();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
