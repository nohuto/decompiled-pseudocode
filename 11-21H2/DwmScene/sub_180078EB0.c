/*
 * XREFs of sub_180078EB0 @ 0x180078EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_180026948 @ 0x180026948 (sub_180026948.c)
 */

__int64 __fastcall sub_180078EB0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_180026948(*a2, &v7);
  if ( sub_1800122C0(&v7) )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = (_QWORD *)v3[1];
    if ( v4 == (_QWORD *)v3[2] )
    {
      sub_180012720(v3, (__int64)v4, &v7);
    }
    else
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v5 = v8;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v5 = v8;
      }
      *v4 = v7;
      v4[1] = v5;
      v3[1] += 16LL;
    }
  }
  return sub_180010910((__int64)&v7);
}
