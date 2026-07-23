/*
 * XREFs of sub_14051BF88 @ 0x14051BF88
 * Callers:
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 *     sub_14051C4E0 @ 0x14051C4E0 (sub_14051C4E0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14051BF88()
{
  __int64 result; // rax
  volatile signed __int32 *v1; // rcx
  __int64 v2; // rdx

  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0LL;
    do
    {
      v1 = (volatile signed __int32 *)((char *)&unk_140C4B100 + 80 * v2);
      if ( !_InterlockedCompareExchange(v1, 1, 0) )
        break;
      v1 = 0LL;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < 0x20 );
  }
  else
  {
    result = ExAllocatePool2(256LL, 80LL, 1634035799LL);
    v1 = (volatile signed __int32 *)result;
    if ( !result )
      return result;
    *(_OWORD *)(result + 8) = 0LL;
    *(_OWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 24) = sub_14051C010;
    *(_BYTE *)(result + 32) = 0;
    *(_DWORD *)result = -1;
  }
  return (__int64)v1;
}
