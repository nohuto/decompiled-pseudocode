/*
 * XREFs of sub_18007F664 @ 0x18007F664
 * Callers:
 *     sub_18006CDA0 @ 0x18006CDA0 (sub_18006CDA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 */

__int64 __fastcall sub_18007F664(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  for ( i = *(__int64 **)(a1 + 40); i != v2 && !sub_180016240(i, a2); i += 2 )
    ;
  v6 = sub_18001287C((__int64)i);
  if ( (__int64 *)v6 != v2 )
  {
    v7 = (__int64 *)(v6 + 16);
    if ( (__int64 *)(v6 + 16) != v2 )
    {
      do
      {
        v8 = *v7;
        *v7 = 0LL;
        v9 = v7[1];
        v7[1] = 0LL;
        v12[0] = *(v7 - 2);
        v10 = *(v7 - 1);
        *(v7 - 2) = v8;
        v12[1] = v10;
        *(v7 - 1) = v9;
        sub_180010910((__int64)v12);
        v7 += 2;
      }
      while ( v7 != v2 );
      v2 = *(__int64 **)(a1 + 48);
    }
    sub_180010910((__int64)(v2 - 2));
    *(_QWORD *)(a1 + 48) -= 16LL;
  }
  return sub_180010910((__int64)a2);
}
