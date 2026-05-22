/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x1801DC2B0
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DBA20 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BA934 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??$_Try_emplace@K$$V@?$map@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@_N@1@$$QEAK@Z @ 0x1801DBDDC (--$_Try_emplace@K$$V@-$map@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801DC25C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(MagnifierRecognizer *this, const struct PointerInputInfo *a2)
{
  __int64 i; // r15
  unsigned int v5; // r10d
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  _BYTE v15[16]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int128 v18; // [rsp+50h] [rbp-10h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF

  *((_DWORD *)this + 1) = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 79); i = (unsigned int)(i + 1) )
  {
    if ( (*((_BYTE *)a2 + 144 * i + 332) & 4) != 0 )
    {
      ++*((_DWORD *)this + 1);
      v19 = *((_DWORD *)a2 + 36 * i + 81);
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
        (__int64 *)this + 2,
        (__int64)&v17,
        &v19);
      if ( *(_BYTE *)(v18 + 25) || v5 < *(_DWORD *)(v18 + 32) || (_QWORD)v18 == *((_QWORD *)this + 2) )
      {
        v7 = *((_QWORD *)a2 + 2);
        *((_QWORD *)&v18 + 1) = 0LL;
        *((_QWORD *)&v17 + 1) = 0LL;
        *(_QWORD *)&v17 = *((_QWORD *)a2 + 18 * i + 47);
        v8 = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v20, v7);
        v9 = *((_DWORD *)a2 + 36 * i + 81);
        *(_QWORD *)&v18 = v8;
        v19 = v9;
        v10 = (__int64 *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long,>(
                           (__int64 *)this + 2,
                           (__int64)v15,
                           &v19);
        v11 = v18;
        v12 = *v10;
        *(_OWORD *)(v12 + 40) = v17;
        *(_OWORD *)(v12 + 56) = v11;
      }
      v19 = *((_DWORD *)a2 + 36 * i + 81);
      v13 = *(_QWORD *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long,>(
                         (__int64 *)this + 2,
                         (__int64)v16,
                         &v19);
      *(_DWORD *)(v13 + 48) = *((_DWORD *)a2 + 36 * i + 94);
      *(_DWORD *)(v13 + 52) = *((_DWORD *)a2 + 36 * i + 95);
      *(_QWORD *)(v13 + 64) = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v21, *((_QWORD *)a2 + 2));
    }
  }
  v14 = *((_DWORD *)this + 2);
  if ( v14 <= *((_DWORD *)this + 1) )
    v14 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v14;
}
