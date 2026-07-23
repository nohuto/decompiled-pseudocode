/*
 * XREFs of RtlpHpHeapWalk @ 0x180063ABC
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180063A6C (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpLargeWalkHeap @ 0x1800639AC (RtlpHpLargeWalkHeap.c)
 *     RtlpHpSegWalk @ 0x180063BB0 (RtlpHpSegWalk.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063E58 (RtlCSparseBitmapBitmaskRead.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  unsigned __int64 v5; // rdx
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = a3;
  v5 = *(_QWORD *)a2;
  if ( !v5 )
  {
    *(_DWORD *)(a2 + 28) = 0;
    *(_WORD *)(a2 + 18) = -32766;
    result = 0LL;
    *(_QWORD *)a2 = a1;
    *(_QWORD *)(a2 + 8) = 4096LL;
    *(_BYTE *)(a2 + 17) = 0;
    *(_DWORD *)(a2 + 24) = 4096;
    *(_QWORD *)(a2 + 32) = a1;
    *(_QWORD *)(a2 + 40) = a1;
    return result;
  }
  if ( v5 == a1 )
  {
    *(_QWORD *)a2 = 0LL;
LABEL_4:
    v7 = 0;
    while ( 1 )
    {
      LOBYTE(a3) = v4;
      result = RtlpHpSegWalk(a1 + 192LL * v7 + 320, a2, a3);
      if ( (_DWORD)result != -2147483622 )
        break;
      *(_QWORD *)a2 = 0LL;
      ++v7;
LABEL_6:
      if ( v7 >= 2 )
        return RtlpHpLargeWalkHeap(a1, (unsigned __int64 *)a2);
    }
    return result;
  }
  if ( (_WORD)v5 )
    goto LABEL_4;
  v9 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((v5 - qword_180188A88) >> 20));
  if ( v9 )
  {
    v7 = v9 - 1;
    goto LABEL_6;
  }
  return RtlpHpLargeWalkHeap(a1, (unsigned __int64 *)a2);
}
