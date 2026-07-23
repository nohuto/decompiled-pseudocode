/*
 * XREFs of sub_140461DE4 @ 0x140461DE4
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     sub_140642384 @ 0x140642384 (sub_140642384.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 * Callees:
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 */

__int64 __fastcall sub_140461DE4(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 *v5; // rax

  v1 = sub_140366FB0(a1);
  v4 = v2;
  if ( v1 != 32 )
    v4 = v1;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = v3 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL)
                                 + 14584LL);
  }
  else
  {
    v5 = qword_140CE1A40;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CE1A60 )
        return v2;
    }
    return 1;
  }
  return v2;
}
