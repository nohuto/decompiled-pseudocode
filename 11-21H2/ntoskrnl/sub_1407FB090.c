/*
 * XREFs of sub_1407FB090 @ 0x1407FB090
 * Callers:
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 *     sub_1407FB114 @ 0x1407FB114 (sub_1407FB114.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407FB090(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  unsigned int v7; // ecx
  bool v8; // zf
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v10 = 0LL;
    v2 = (unsigned int)a1[22];
    v9 = 0LL;
    if ( v2 != 0xFFFFFFFFLL )
    {
      v7 = a1[23];
      *(_QWORD *)&v9 = v2;
      DWORD2(v9) = (unsigned __int16)v7;
      v8 = (a1[14] & 0x20000000) == 0;
      LODWORD(v10) = (v7 >> 20) & 3;
      if ( v8 )
      {
        BYTE12(v9) = 0;
      }
      else
      {
        BYTE12(v9) = 1;
        BYTE13(v9) = BYTE2(v7) & 1;
      }
      sub_1406FC148((__int64)&v9);
      a1[22] = -1;
    }
    sub_1407FB114(a2 + 9);
    v5 = (_QWORD *)a2[2];
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(a2, 0);
  }
}
