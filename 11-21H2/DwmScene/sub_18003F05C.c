/*
 * XREFs of sub_18003F05C @ 0x18003F05C
 * Callers:
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18006C254 @ 0x18006C254 (sub_18006C254.c)
 * Callees:
 *     sub_18003E0C4 @ 0x18003E0C4 (sub_18003E0C4.c)
 *     sub_18003E248 @ 0x18003E248 (sub_18003E248.c)
 *     sub_18003EBE0 @ 0x18003EBE0 (sub_18003EBE0.c)
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 */

void __fastcall sub_18003F05C(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_18003F05C((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_18003F05C((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_18003E248((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_18003E248((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_18003E0C4((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18003EBE0(a1, a2, (unsigned __int8 (__fastcall *)(__int128 *, __int64 *))a6);
  }
}
