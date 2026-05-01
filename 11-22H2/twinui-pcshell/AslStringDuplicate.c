/*
 * XREFs of AslStringDuplicate @ 0x1800EF328
 * Callers:
 *     AslRegistryGetString @ 0x1800EF1D0 (AslRegistryGetString.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800EF3EC (RtlStringCchCopyW.c)
 *     RtlStringLengthWorkerW @ 0x1800EF414 (RtlStringLengthWorkerW.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  unsigned __int64 v6; // rsi
  PVOID Heap; // rax
  void *v8; // rbp
  int v9; // eax
  unsigned int v10; // edi
  const char *v12; // r9
  int v13; // r8d
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  if ( a2 )
  {
    v5 = RtlStringLengthWorkerW(a2, 0x7FFFFFFFLL, &v14);
    if ( v5 < 0 )
    {
      v12 = "RtlStringCchLengthW failed [%x]";
      v13 = 574;
    }
    else
    {
      v6 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v13 = 585;
      }
      else
      {
        if ( is_mul_ok(v6, 2uLL) )
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v6);
          v8 = Heap;
          if ( Heap )
          {
            v9 = RtlStringCchCopyW(Heap, v6, a2);
            v10 = v9;
            if ( v9 < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"AslStringDuplicate",
                608,
                (unsigned int)"RtlStringCchCopyW failed [%x]",
                v9);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
              return v10;
            }
            else
            {
              *a1 = v8;
            }
          }
          else
          {
            v2 = -1073741801;
            AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"Out of memory");
          }
          return v2;
        }
        v13 = 591;
      }
      v12 = "SIZE_T arithmetic failed [%x]";
      v5 = -1073741675;
    }
    v2 = v5;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v13, (_DWORD)v12, v5);
  }
  return v2;
}
