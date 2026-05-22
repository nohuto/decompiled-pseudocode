/*
 * XREFs of ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801B0F90
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801B1460 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180011EC4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@AEAAXQEAU?$pair@KPEAVInputRedirectionTarget@@@2@_K1@Z @ 0x1801B1884 (-_Change_array@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInp.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
        char **a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  size_t size_of; // rax
  char *v15; // rax
  _OWORD *v16; // r10
  char *v17; // r14
  char *v18; // rcx
  char *v19; // rax
  _OWORD *v20; // rdx
  __int64 v21; // rax
  char *result; // rax
  void *v23; // [rsp+58h] [rbp+10h]

  v6 = a2;
  v8 = a2 - *a1;
  v9 = (a1[1] - *a1) >> 4;
  v10 = 0xFFFFFFFFFFFFFFFLL;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v9 + 1;
  v12 = (a1[2] - *a1) >> 4;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v10 = v13 + v12;
    if ( v13 + v12 < v11 )
      v10 = v9 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v10);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = v15;
  v23 = v15;
  try
  {
    v17 = &v15[v8 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_DWORD *)v17 = *a3;
    *((_QWORD *)v17 + 1) = *a4;
    v18 = a1[1];
    v19 = *a1;
    v20 = v16;
    if ( v6 == v18 )
    {
      while ( v19 != v18 )
      {
        *v20++ = *(_OWORD *)v19;
        v19 += 16;
      }
    }
    else
    {
      if ( v19 != v6 )
      {
        do
        {
          *v20++ = *(_OWORD *)v19;
          v19 += 16;
        }
        while ( v19 != v6 );
        v18 = a1[1];
      }
      if ( v6 != v18 )
      {
        v21 = v17 + 16 - v6;
        do
        {
          *(_OWORD *)&v6[v21] = *(_OWORD *)v6;
          v6 += 16;
        }
        while ( v6 != v18 );
      }
    }
    std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Change_array(a1, v16, v11, v10);
    result = v17;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, 16 * v10);
    throw;
  }
  return result;
}
