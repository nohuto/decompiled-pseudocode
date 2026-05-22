/*
 * XREFs of ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800675E8
 * Callers:
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010B554 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18010BA0C (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18005A9C4 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B27E0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x18010AFB0 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAA?A_TAEAI@Z @ 0x18010B12C (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAA-A_TAEAI@Z.c)
 *     ??1ContactData@PointerInputMediator@@QEAA@XZ @ 0x18010B764 (--1ContactData@PointerInputMediator@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18010C0CC (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     ?reserve@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAX_K@Z @ 0x18010C30C (-reserve@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x18010C3AC (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PointerInputMediator::PointerFrame::Initialize(
        PointerInputMediator::PointerFrame *this,
        const struct tagMANIPULATION_INPUT_INFO *a2)
{
  char *v4; // r14
  char *v5; // rbx
  char *v6; // r15
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  gsl::details *v10; // rcx
  char *v11; // rdi
  _DWORD *v12; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+20h] BYREF

  *(_DWORD *)this = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 22);
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 41) = 2;
  v4 = (char *)this + 168;
  *((_QWORD *)this + 22) = *((_QWORD *)this + 21);
  v5 = (char *)this + 192;
  *((_QWORD *)this + 25) = *((_QWORD *)this + 24);
  v6 = (char *)this + 216;
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::clear((char *)this + 216);
  std::vector<unsigned int>::reserve(v4, *((unsigned int *)this + 1));
  std::vector<unsigned int>::reserve(v5, *((unsigned int *)this + 1));
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::reserve(
    v6,
    *((unsigned int *)this + 1));
  v7 = (char *)a2 + 160;
  gsl::details::extent_type<-1>::extent_type<-1>(v13, *((unsigned int *)this + 1), v8, v9);
  if ( v13[0] == -1LL || a2 == (const struct tagMANIPULATION_INPUT_INFO *)-160LL && v13[0] )
  {
    gsl::details::terminate(v10);
    __debugbreak();
  }
  v11 = &v7[240 * v13[0]];
  if ( v7 != v11 )
  {
    v12 = v7 + 12;
    do
    {
      v16 = *(v12 - 2);
      std::vector<unsigned int>::emplace_back<unsigned int &>(v4, &v16);
      if ( (*v12 & 0x12000) == 0x12000 )
        *((_BYTE *)this + 160) = 1;
      v15 = 0LL;
      v14 = 0LL;
      std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::emplace<unsigned int &,PointerInputMediator::ContactData>(
        v6,
        v13,
        &v16,
        &v14);
      PointerInputMediator::ContactData::~ContactData((PointerInputMediator::ContactData *)&v14);
      v12 += 60;
    }
    while ( v12 - 3 != (_DWORD *)v11 );
  }
}
