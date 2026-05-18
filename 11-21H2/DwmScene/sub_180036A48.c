/*
 * XREFs of sub_180036A48 @ 0x180036A48
 * Callers:
 *     sub_180035680 @ 0x180035680 (sub_180035680.c)
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 *     sub_180099C10 @ 0x180099C10 (sub_180099C10.c)
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180036A48(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v6; // rdx
  __int64 *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  sub_18002C5FC(a1 + 112, (__int64)&v12);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *(__int64 **)(a1 + 96);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_6;
    }
    if ( (unsigned int)sub_180028544(*v6) == a3 )
      break;
    v6 = v8 + 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v11 = v8[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v9 = *v8;
    v11 = v8[1];
  }
  *a2 = v9;
  a2[1] = v11;
LABEL_6:
  if ( v13 )
    sub_18002C8E4(v12);
  return a2;
}
