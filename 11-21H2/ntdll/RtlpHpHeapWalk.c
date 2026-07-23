/*
 * XREFs of RtlpHpHeapWalk @ 0x1800574B8
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180057468 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpSegWalk @ 0x1800575A8 (RtlpHpSegWalk.c)
 *     RtlpHpLargeWalkHeap @ 0x1800590B0 (RtlpHpLargeWalkHeap.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rdx
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = a3;
  v5 = *a2;
  if ( !v5 )
  {
    *((_DWORD *)a2 + 7) = 0;
    *((_WORD *)a2 + 9) = -32766;
    result = 0LL;
    *a2 = a1;
    a2[1] = 4096LL;
    *((_BYTE *)a2 + 17) = 0;
    *((_DWORD *)a2 + 6) = 4096;
    a2[4] = a1;
    a2[5] = a1;
    return result;
  }
  if ( v5 == a1 )
  {
    *a2 = 0LL;
LABEL_4:
    v7 = 0;
    while ( 1 )
    {
      LOBYTE(a3) = v4;
      result = RtlpHpSegWalk(a1 + 192LL * v7 + 320, a2, a3);
      if ( (_DWORD)result != -2147483622 )
        break;
      *a2 = 0LL;
      ++v7;
LABEL_6:
      if ( v7 >= 2 )
        return RtlpHpLargeWalkHeap(a1, a2);
    }
    return result;
  }
  if ( (_WORD)v5 )
    goto LABEL_4;
  v9 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(v5 - qword_18017B718) >> 20));
  if ( v9 )
  {
    v7 = v9 - 1;
    goto LABEL_6;
  }
  return RtlpHpLargeWalkHeap(a1, a2);
}
