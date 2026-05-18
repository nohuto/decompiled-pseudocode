/*
 * XREFs of sub_18008C8C8 @ 0x18008C8C8
 * Callers:
 *     sub_18008CDA8 @ 0x18008CDA8 (sub_18008CDA8.c)
 * Callees:
 *     sub_18008CDD4 @ 0x18008CDD4 (sub_18008CDD4.c)
 *     sub_18008D4EC @ 0x18008D4EC (sub_18008D4EC.c)
 */

void __fastcall sub_18008C8C8(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v2 = a2;
    sub_18008D4EC();
    v4 = *(_DWORD **)a1;
    do
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4 += 3;
      --v2;
    }
    while ( v2 );
    v5 = 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    sub_18008CDD4(&v5);
  }
}
