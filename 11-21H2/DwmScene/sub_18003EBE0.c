/*
 * XREFs of sub_18003EBE0 @ 0x18003EBE0
 * Callers:
 *     sub_18003EB7C @ 0x18003EB7C (sub_18003EB7C.c)
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18006C254 @ 0x18006C254 (sub_18006C254.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003EBE0(__int64 *a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int128 *, __int64 *))
{
  __int64 *i; // rdi
  __int64 *v7; // r12
  __int64 *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *j; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v16 = *(_OWORD *)i;
      v8 = i + 1;
      *i = 0LL;
      i[1] = 0LL;
      if ( a3(&v16, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v8 -= 2;
            v9 = *(v8 - 1);
            v10 = *v8;
            *(v8 - 1) = 0LL;
            *v8 = 0LL;
            v18[0] = v8[1];
            v8[1] = v9;
            v18[1] = v8[2];
            v8[2] = v10;
            sub_180010910((__int64)v18);
          }
          while ( v8 - 1 != a1 );
        }
        v17 = v16;
        *(_QWORD *)&v17 = *a1;
        *a1 = v16;
        v11 = a1[1];
        a1[1] = *((_QWORD *)&v17 + 1);
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 2;
          if ( !a3(&v16, j) )
            break;
          v13 = *j;
          v14 = j[1];
          *j = 0LL;
          j[1] = 0LL;
          v19[0] = *v7;
          *v7 = v13;
          v19[1] = v7[1];
          v7[1] = v14;
          sub_180010910((__int64)v19);
        }
        v17 = v16;
        *(_QWORD *)&v17 = *v7;
        *v7 = v16;
        v11 = v7[1];
        v7[1] = *((_QWORD *)&v17 + 1);
      }
      v16 = 0LL;
      *((_QWORD *)&v17 + 1) = v11;
      sub_180010910((__int64)&v17);
      sub_180010910((__int64)&v16);
    }
  }
  return a2;
}
