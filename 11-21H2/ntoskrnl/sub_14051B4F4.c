/*
 * XREFs of sub_14051B4F4 @ 0x14051B4F4
 * Callers:
 *     sub_14051A460 @ 0x14051A460 (sub_14051A460.c)
 *     sub_140528160 @ 0x140528160 (sub_140528160.c)
 *     sub_140528320 @ 0x140528320 (sub_140528320.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140517D9C @ 0x140517D9C (sub_140517D9C.c)
 *     sub_14051A824 @ 0x14051A824 (sub_14051A824.c)
 *     sub_14051B094 @ 0x14051B094 (sub_14051B094.c)
 *     sub_14051B360 @ 0x14051B360 (sub_14051B360.c)
 */

__int64 __fastcall sub_14051B4F4(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( byte_140C4BCBC )
  {
    v4 = sub_14042A5E0(*(_QWORD *)(a1 + 32), a2);
    v5 = v4;
    if ( (_WORD)v4 != 118 )
    {
      if ( v4 < 0 )
        KeBugCheckEx(0x1D9u, 2uLL, v4, a2, 0LL);
      goto LABEL_17;
    }
LABEL_6:
    v5 = 0;
LABEL_17:
    *(_QWORD *)(a1 + 24) = 0LL;
    return v5;
  }
  if ( sub_14051B360(a1, a2) )
    goto LABEL_6;
  result = sub_14051B094(a2, *(_QWORD *)(a1 + 32), 0, 0, (__int64 *)&v8);
  v5 = result;
  if ( (int)result < 0 )
    return result;
  if ( dword_140C4BCB8 != 1 || !*(_BYTE *)(a1 + 56) )
  {
    if ( !byte_140C4BCBC )
      sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), *(_QWORD *)(a1 + 40));
    goto LABEL_15;
  }
  result = sub_14051B094(qword_140C4BC80, *(_QWORD *)(a1 + 32), 0, 0, &v7);
  if ( (int)result >= 0 )
  {
    result = sub_140517D9C(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
    v5 = result;
    if ( (int)result >= 0 )
    {
LABEL_15:
      if ( v8 )
        sub_14051A824(a2, v8);
      goto LABEL_17;
    }
  }
  return result;
}
