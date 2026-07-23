/*
 * XREFs of sub_140980B94 @ 0x140980B94
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140595D50 @ 0x140595D50 (sub_140595D50.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_14096D778 @ 0x14096D778 (sub_14096D778.c)
 *     sub_140983198 @ 0x140983198 (sub_140983198.c)
 *     sub_140983978 @ 0x140983978 (sub_140983978.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140980B94(_QWORD *P)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  unsigned __int64 i; // rbp
  __int64 v4; // rcx
  void *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *j; // rsi
  __int64 **v10; // rax
  __int64 *v11; // rsi
  unsigned int v12; // eax
  int v13; // ecx
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = P;
  for ( i = *((_QWORD *)KeGetCurrentThread() + 23); v1; v2 = v1 )
  {
    v1 = (_QWORD *)*v1;
    sub_14096D778(i, (__int64)v2, 4);
    if ( sub_14030FBE0((__int64)v2) )
    {
      v5 = (void *)sub_14030E280(v4, 16);
      sub_140983198(i, v2, v5, 1LL);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v6 = v2[12] & 0x70;
      if ( v6 == 80 )
      {
        if ( *(_QWORD *)(**((_QWORD **)v2 + 9) + 64LL) )
        {
          v7 = *((unsigned __int8 *)v2 + 32);
          v8 = (unsigned int)v2[6];
          v15 = 0LL;
          v14 = 0LL;
          sub_140319600((__int64)v2, v8 | (v7 << 32), 0, (__int64 *)&v15);
          sub_140319600(
            (__int64)v2,
            (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
            0,
            (__int64 *)&v14);
          for ( j = v15; ; j = (__int64 *)j[2] )
          {
            sub_14059DF58(j, j);
            if ( j == v14 )
              break;
          }
        }
      }
      else if ( v6 == 32 )
      {
        v10 = (__int64 **)*((_QWORD *)v2 + 9);
        v11 = *v10;
        if ( ((*v10)[7] & 0x8000000) != 0 )
        {
          v12 = sub_140287F30(i);
          sub_1406DDA18(v11, v12);
        }
      }
    }
    if ( (unsigned int)sub_140983978(v2) )
      sub_1406FC2F0(**((_QWORD ***)v2 + 9), i, 0);
    v13 = v2[12];
    if ( (v13 & 0x200000) == 0 && (v13 & 0x70) == 0x20 && (v13 & 0x400000) != 0 )
      --*(_QWORD *)(*(_QWORD *)(i + 1680) + 368LL);
    sub_1406EBA90((__int64)v2);
    sub_140595D50((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
