/*
 * XREFs of sub_1405F64CC @ 0x1405F64CC
 * Callers:
 *     sub_1405F64CC @ 0x1405F64CC (sub_1405F64CC.c)
 *     sub_1405F6C04 @ 0x1405F6C04 (sub_1405F6C04.c)
 *     sub_1405F71B0 @ 0x1405F71B0 (sub_1405F71B0.c)
 * Callees:
 *     sub_1405F64CC @ 0x1405F64CC (sub_1405F64CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405F64CC(__int64 a1, char *a2)
{
  char *v4; // rbp
  char *v5; // rdi
  unsigned __int64 v6; // rsi
  char *v7; // r15
  char *v8; // rax

  if ( !a2[3] )
  {
    v4 = a2 + 16;
    v5 = a2 + 16;
    v6 = (unsigned __int64)&a2[16 * (unsigned __int16)*(_DWORD *)a2 + 16];
    if ( (unsigned __int64)(a2 + 16) <= v6 )
    {
      v7 = a2 + 8;
      do
      {
        v8 = v5 - 8;
        if ( v5 <= v4 )
          v8 = v7;
        if ( *(_QWORD *)v8 )
          sub_1405F64CC(a1);
        v5 += 16;
      }
      while ( (unsigned __int64)v5 <= v6 );
    }
  }
  ExFreePoolWithTag(a2, 0);
}
