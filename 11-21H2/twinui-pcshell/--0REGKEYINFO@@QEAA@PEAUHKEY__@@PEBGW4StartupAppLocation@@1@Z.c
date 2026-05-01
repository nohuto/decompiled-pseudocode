/*
 * XREFs of ??0REGKEYINFO@@QEAA@PEAUHKEY__@@PEBGW4StartupAppLocation@@1@Z @ 0x18010AA24
 * Callers:
 *     ??0StartupAppMonitor@@QEAA@XZ @ 0x18010A6FC (--0StartupAppMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall REGKEYINFO::REGKEYINFO(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8

  v8 = (_QWORD *)(a1 + 8);
  v8[2] = 0LL;
  v8[3] = 7LL;
  *(_WORD *)v8 = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)a1 = a2;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a3 + 2 * v10) );
  std::wstring::assign(v8);
  *(_DWORD *)(a1 + 40) = a4;
  do
    ++v9;
  while ( *(_WORD *)(a5 + 2 * v9) );
  std::wstring::assign((void *)(a1 + 48));
  return a1;
}
