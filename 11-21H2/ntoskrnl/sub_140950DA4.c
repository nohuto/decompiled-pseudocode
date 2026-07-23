/*
 * XREFs of sub_140950DA4 @ 0x140950DA4
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 */

bool __fastcall sub_140950DA4(unsigned int **a1, char a2)
{
  bool result; // al
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = sub_1407667B0(a1, &v6, &v8, 0LL, 0LL);
    if ( !result )
      break;
    if ( v8 )
      v5 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v5 = 0LL;
    if ( a2 )
      sub_140767220(v5, 256);
    else
      sub_14074A08C(v5, 256);
  }
  return result;
}
