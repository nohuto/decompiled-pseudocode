/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x1801B060C
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFD80 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180091978 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801B0134 (--$_Try_emplace@AEBK$$V@-$map@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801B05B8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(MagnifierRecognizer *this, const struct PointerInputInfo *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r12d
  unsigned int v6; // r10d
  char v7; // al
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // eax
  _BYTE v16[16]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int128 v19; // [rsp+50h] [rbp-10h]
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0;
  *((_DWORD *)this + 1) = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 79) )
  {
    do
    {
      if ( (*((_BYTE *)a2 + 144 * v5 + 332) & 4) != 0 )
      {
        ++*((_DWORD *)this + 1);
        v20 = *((_DWORD *)a2 + 36 * v5 + 81);
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
          (__int64 *)this + 2,
          (__int64)&v18,
          &v20);
        if ( *(_BYTE *)(v19 + 25) || v6 < *(_DWORD *)(v19 + 32) || (v7 = 0, (_QWORD)v19 == *((_QWORD *)this + 2)) )
          v7 = 1;
        if ( v7 )
        {
          v8 = *((_QWORD *)a2 + 2);
          *((_QWORD *)&v19 + 1) = 0LL;
          *((_QWORD *)&v18 + 1) = 0LL;
          *(_QWORD *)&v18 = *((_QWORD *)a2 + 18 * v5 + 47);
          v9 = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v21, v8);
          v10 = *((_DWORD *)a2 + 36 * v5 + 81);
          *(_QWORD *)&v19 = v9;
          v20 = v10;
          v11 = (__int64 *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long const &,>(
                             (__int64 *)this + 2,
                             (__int64)v16,
                             &v20);
          v12 = v19;
          v13 = *v11;
          *(_OWORD *)(v13 + 40) = v18;
          *(_OWORD *)(v13 + 56) = v12;
          v6 = *((_DWORD *)a2 + 36 * v5 + 81);
        }
        v20 = v6;
        v14 = *(_QWORD *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long const &,>(
                           (__int64 *)this + 2,
                           (__int64)v17,
                           &v20);
        *(_DWORD *)(v14 + 48) = *((_DWORD *)a2 + 36 * v5 + 94);
        *(_DWORD *)(v14 + 52) = *((_DWORD *)a2 + 36 * v5 + 95);
        *(_QWORD *)(v14 + 64) = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v22, *((_QWORD *)a2 + 2));
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 79) );
    v2 = *((_DWORD *)this + 1);
  }
  v15 = *((_DWORD *)this + 2);
  if ( v15 <= v2 )
    v15 = v2;
  *((_DWORD *)this + 2) = v15;
}
