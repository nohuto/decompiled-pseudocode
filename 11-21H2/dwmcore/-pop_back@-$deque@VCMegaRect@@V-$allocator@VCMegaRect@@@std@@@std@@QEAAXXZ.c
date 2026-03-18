/*
 * XREFs of ?pop_back@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXXZ @ 0x1800D012C
 * Callers:
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800D009C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CMegaRect>::pop_back(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rsi
  HANDLE ProcessHeap; // rax
  void **v5; // rbx
  _DWORD *v6; // rsi

  v2 = *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] + a1[4] - 1LL)));
  v3 = *(void **)(v2 + 16);
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  v5 = *(void ***)(v2 + 8);
  if ( v5 )
  {
    v6 = v5 + 1;
    if ( v5 + 1 != *v5 )
    {
      DefaultHeap::Free(*v5);
      *v5 = v6;
      *v6 = 0;
    }
    operator delete(v5, 0x48uLL);
  }
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
}
