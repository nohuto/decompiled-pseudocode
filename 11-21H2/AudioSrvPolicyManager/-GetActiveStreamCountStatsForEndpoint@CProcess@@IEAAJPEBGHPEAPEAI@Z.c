/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18001718C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?8GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18000E9F8 (--$-8GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int **a4)
{
  unsigned int v6; // ebx
  char *v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r8
  unsigned int v10; // r11d
  char v11; // r14
  int v12; // r11d
  unsigned int *v13; // rsi
  HANDLE ProcessHeap; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  unsigned int **v21; // rax
  char *v23[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  unsigned __int64 v25; // [rsp+58h] [rbp-18h]

  v6 = 0;
  v7 = (char *)this + 280;
  if ( !a3 )
    v7 = (char *)this + 256;
  v24 = 0LL;
  v25 = 7LL;
  LOWORD(v23[0]) = 0;
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  std::wstring::assign(v23, a2, v9);
  v10 = 0;
  v11 = 1;
  if ( *((int *)v7 + 4) <= 0 )
  {
LABEL_8:
    v13 = 0LL;
  }
  else
  {
    while ( !std::operator==<unsigned short>((char *)(*(_QWORD *)v7 + 32LL * v10), v23) )
    {
      v10 = v12 + 1;
      if ( (signed int)v10 >= *((_DWORD *)v7 + 4) )
        goto LABEL_8;
    }
    v13 = *(unsigned int **)(*((_QWORD *)v7 + 1) + 8LL * v12);
  }
  if ( v25 >= 8 )
    std::_Deallocate<16,0>(v23[0], 2 * v25 + 2);
  if ( v13 )
    goto LABEL_30;
  ProcessHeap = GetProcessHeap();
  v15 = (unsigned int *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
  v13 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x60uLL);
    v24 = 0LL;
    v25 = 7LL;
    LOWORD(v23[0]) = 0;
    do
      ++v8;
    while ( a2[v8] );
    std::wstring::assign(v23, a2, v8);
    v17 = _o__recalloc(*(_QWORD *)v7, *((_DWORD *)v7 + 4) + 1, 32LL);
    if ( v17 )
    {
      *(_QWORD *)v7 = v17;
      v18 = _o__recalloc(*((_QWORD *)v7 + 1), *((_DWORD *)v7 + 4) + 1, 8LL);
      v19 = v18;
      if ( v18 )
      {
        *((_QWORD *)v7 + 1) = v18;
        v20 = *((int *)v7 + 4);
        if ( *(_QWORD *)v7 + 32 * v20 )
        {
          std::wstring::wstring((_QWORD *)(*(_QWORD *)v7 + 32 * v20), (__int64)v23);
          v19 = *((_QWORD *)v7 + 1);
        }
        v21 = (unsigned int **)(v19 + 8 * v20);
        if ( v21 )
          *v21 = v13;
        ++*((_DWORD *)v7 + 4);
        v11 = 0;
      }
    }
    if ( v25 >= 8 )
      std::_Deallocate<16,0>(v23[0], 2 * v25 + 2);
    if ( v11 )
    {
      v6 = -2147024882;
      v16 = v13;
      goto LABEL_14;
    }
    operator delete(0LL);
LABEL_30:
    *a4 = v13;
    return v6;
  }
  v6 = -2147024882;
  v16 = 0LL;
LABEL_14:
  operator delete(v16);
  return v6;
}
