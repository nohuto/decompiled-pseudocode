/*
 * XREFs of sub_14097A0B0 @ 0x14097A0B0
 * Callers:
 *     sub_1405A862C @ 0x1405A862C (sub_1405A862C.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 * Callees:
 *     sub_1406C321C @ 0x1406C321C (sub_1406C321C.c)
 *     sub_14097A08C @ 0x14097A08C (sub_14097A08C.c)
 */

void __fastcall sub_14097A0B0(volatile signed __int32 **a1, void *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 **v6; // rcx

  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == (volatile signed __int32 *)a1 )
      break;
    if ( a2 )
      sub_1406C321C(a2, *((_QWORD *)v4 + 2));
    v5 = *(_QWORD *)v4;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = (volatile signed __int32 **)*((_QWORD *)v4 + 1), *v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (volatile signed __int32 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    sub_14097A08C(v4);
  }
}
