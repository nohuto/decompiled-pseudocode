/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180627C28
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627A6C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627D7C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1801CC480 (IsPicRetrieveFileInfoPresent.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppInventoryData(__int64 a1, __int64 a2)
{
  char *v4; // r14
  char *v5; // rsi
  _WORD *v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  _WORD *v9; // rdx
  unsigned __int64 v10; // r8
  _WORD *v11; // rdx
  _QWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v4 = (char *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  v5 = (char *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v13 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v13) >= 0 )
    {
      v6 = (_WORD *)v13[6];
      v7 = -1LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      std::wstring::assign((char *)a1, v6, v8);
      v9 = (_WORD *)v13[7];
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      std::wstring::assign(v4, v9, v10);
      v11 = (_WORD *)v13[2];
      do
        ++v7;
      while ( v11[v7] );
      std::wstring::assign(v5, v11, v7);
    }
    if ( v13 )
      PicFreeFileInfo(v13);
  }
  return a1;
}
