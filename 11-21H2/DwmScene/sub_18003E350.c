/*
 * XREFs of sub_18003E350 @ 0x18003E350
 * Callers:
 *     sub_18003DDF8 @ 0x18003DDF8 (sub_18003DDF8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003E6C4 @ 0x18003E6C4 (sub_18003E6C4.c)
 *     sub_18003EE90 @ 0x18003EE90 (sub_18003EE90.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 */

__int64 __fastcall sub_18003E350(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char *v7; // r14
  char *v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rcx
  char *v22; // rdx
  __int64 v23; // rcx
  char *v24; // rcx
  char *i; // rdx
  __int64 v26; // rcx
  _QWORD v27[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = a3;
  v9 = a1;
  if ( a4 )
  {
    if ( !a5 )
      return (__int64)a1;
    if ( a4 <= a5 && a4 <= a7 )
    {
      v11 = sub_18003F2E0(a1, a2, a6);
      v12 = sub_18003EE90(a2, v7, v9);
      sub_18003EE90(a6, v11, v12);
      v13 = v11;
LABEL_7:
      sub_18003E6C4(a6, v13);
      return v12;
    }
    if ( a5 <= a7 )
    {
      v14 = sub_18003F2E0(a2, a3, a6);
      if ( a2 != v9 )
      {
        v15 = (__int64 *)(a2 + 8);
        v16 = v7 - a2;
        do
        {
          v15 -= 2;
          v17 = *v15;
          v18 = *(v15 - 1);
          *(v15 - 1) = 0LL;
          *v15 = 0LL;
          v27[0] = *(__int64 *)((char *)v15 + v16 - 8);
          v19 = *(__int64 *)((char *)v15 + v16);
          *(__int64 *)((char *)v15 + v16 - 8) = v18;
          v27[1] = v19;
          *(__int64 *)((char *)v15 + v16) = v17;
          sub_180010910((__int64)v27);
        }
        while ( v15 - 1 != (__int64 *)v9 );
      }
      v12 = sub_18003EE90(a6, v14, v9);
      v13 = v14;
      goto LABEL_7;
    }
    if ( a1 != a2 )
    {
      if ( a2 == a3 )
      {
        return (__int64)a1;
      }
      else
      {
        do
        {
          if ( a1 == a2 - 16 )
            break;
          sub_18003F44C();
          a1 = (char *)(v20 + 16);
        }
        while ( a1 != a2 );
        v21 = a2;
        v22 = v7;
        do
        {
          if ( v21 == v22 - 16 )
            break;
          sub_18003F44C();
          v21 = (char *)(v23 + 16);
        }
        while ( v21 != v22 );
        v24 = v9;
        for ( i = v7; v24 != i; v24 = (char *)(v26 + 16) )
        {
          if ( v24 == i - 16 )
            break;
          sub_18003F44C();
        }
        return (__int64)&v9[(v7 - a2) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return (__int64)v7;
}
