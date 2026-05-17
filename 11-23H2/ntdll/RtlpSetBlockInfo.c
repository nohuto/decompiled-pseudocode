/*
 * XREFs of RtlpSetBlockInfo @ 0x1801050F0
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1801049F0 (RtlpLeakCallbackRoutine.c)
 *     RtlpPushPageDescriptor @ 0x180104B68 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1801050F0 (RtlpSetBlockInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpInitializeMap @ 0x1801049A8 (RtlpInitializeMap.c)
 *     RtlpSetBlockInfo @ 0x1801050F0 (RtlpSetBlockInfo.c)
 */

unsigned __int64 __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  _QWORD *v13; // rbx
  _QWORD *Heap; // rax

  result = a3 + a2 - 1;
  if ( result >= a1[1] && a2 <= a1[2] )
  {
    v9 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v10 = 0LL;
    else
      v10 = v9 / *a1;
    v11 = (v9 + a3 - 1) % *a1;
    v12 = (v9 + a3 - 1) / *a1;
    result = 255LL;
    if ( v12 > 0xFF )
      v12 = 255LL;
    if ( v10 <= v12 )
    {
      v13 = &a1[v10 + 7];
      do
      {
        if ( *a1 == 4096LL )
        {
          if ( a4 )
          {
            if ( *v13 )
            {
              if ( *v13 != a4 )
                result = DbgPrint("Error\n", v11);
            }
            *v13 = a4;
          }
          else
          {
            v11 = v10 >> 3;
            result = v10 & 7;
            *((_BYTE *)a1 + (v10 >> 3) + 24) |= 1 << result;
          }
        }
        else
        {
          if ( !*v13 )
          {
            Heap = (_QWORD *)RtlAllocateHeap(RtlpLeakHeap, 0, 2112LL);
            *v13 = Heap;
            if ( !Heap )
              return DbgPrint("Not enough memory to complete\n");
            RtlpInitializeMap(Heap, a1);
            *(_QWORD *)(*v13 + 8LL) = a1[1] + *a1 * v10;
            *(_QWORD *)(*v13 + 16LL) = a1[1] - 1LL + *a1 * (v10 + 1);
          }
          result = RtlpSetBlockInfo(*v13, a2, a3, a4);
        }
        ++v10;
        ++v13;
      }
      while ( v10 <= v12 );
    }
  }
  return result;
}
