/*
 * XREFs of sub_1406A1DE0 @ 0x1406A1DE0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

LONG_PTR __fastcall sub_1406A1DE0(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v4; // r9d
  int v5; // r8d
  unsigned int v6; // edx
  signed __int32 v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  LONG_PTR result; // rax

  CurrentThread = KeGetCurrentThread();
  sub_1406FFED4(a2, CurrentThread);
  v4 = *(_DWORD *)(a2 + 1512);
  do
  {
    v5 = 0;
    v6 = v4;
    if ( (v4 & 0x4000) != 0 && (v6 = v4 & 0xFFFFBFFF, (*(_DWORD *)(a2 + 1068) & 0x800) != 0) )
    {
      v5 = 11;
    }
    else if ( (v6 & 0x10000) != 0 && (v6 &= ~0x10000u, (*(_DWORD *)(a2 + 1068) & 0x1000) != 0) )
    {
      v5 = 12;
    }
    else if ( (v6 & 0x8000) != 0 )
    {
      v6 &= ~0x8000u;
      if ( (*(_BYTE *)(a2 + 1068) & 0x10) != 0 )
        v5 = 4;
    }
    v7 = v4;
    v8 = v6 & 0xFFFFFFF7;
    if ( v5 )
      v8 = v6;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1512), v8, v4);
  }
  while ( v7 != v4 );
  v9 = *(_QWORD *)(a2 + 552) != 0LL ? v5 : 0;
  if ( v9 )
  {
    IoSetIoCompletionEx(*(_QWORD *)(a2 + 552), *(_QWORD *)(a2 + 560), 0LL, 0, v9, 0, *(_QWORD *)(a2 + 1192));
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 568));
  }
  result = sub_1406FFE90(a2, CurrentThread);
  if ( !v9 )
    return ObfDereferenceObjectWithTag((PVOID)a2, 0x624A7350u);
  return result;
}
