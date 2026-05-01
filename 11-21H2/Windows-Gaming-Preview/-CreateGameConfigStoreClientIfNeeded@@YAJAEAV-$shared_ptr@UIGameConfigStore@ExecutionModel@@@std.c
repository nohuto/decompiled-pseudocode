/*
 * XREFs of ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800183A8
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001F2AC (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x18001FE34 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AD04 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateGameConfigStoreClientIfNeeded(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  char *v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp+18h]

  if ( !*a1 )
  {
    v12 = 0LL;
    v2 = CreateGameConfigStoreClient(&v12);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    v11 = 0;
    v5 = v12;
    v7 = v12;
    v8 = &v11;
    v9 = 1;
    v6 = operator new(0x18uLL);
    v13 = v6;
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_18004FB10;
    *((_QWORD *)v6 + 2) = v5;
    v7 = *a1;
    *a1 = v5;
    v8 = (char *)a1[1];
    a1[1] = (__int64)v6;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v7);
  }
  return 0LL;
}
