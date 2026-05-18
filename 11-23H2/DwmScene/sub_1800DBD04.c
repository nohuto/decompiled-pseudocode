/*
 * XREFs of sub_1800DBD04 @ 0x1800DBD04
 * Callers:
 *     sub_1800DBDA0 @ 0x1800DBDA0 (sub_1800DBDA0.c)
 *     sub_1800DE2E4 @ 0x1800DE2E4 (sub_1800DE2E4.c)
 *     sub_1800F1E46 @ 0x1800F1E46 (sub_1800F1E46.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_1800DBD04(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rdi
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  v2 = *(_QWORD ***)(a1 + 48);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_180010574(v4);
      sub_1800100E8(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  result = sub_1800100E8(*(void **)(a1 + 48), 0x20uLL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    result = sub_180010530(v7);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010574(v8);
  return result;
}
