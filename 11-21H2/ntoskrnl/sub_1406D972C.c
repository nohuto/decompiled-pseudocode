/*
 * XREFs of sub_1406D972C @ 0x1406D972C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1406D9680 (RtlIsApiSetImplemented.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_140861984 @ 0x140861984 (sub_140861984.c)
 * Callees:
 *     sub_140251894 @ 0x140251894 (sub_140251894.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 sub_1406D972C()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)sub_140347DB0() + 130);
  sub_140251894(&v1, &v2);
  return *(_QWORD *)v1;
}
