/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1803DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x1803D4200 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_System_error_category::message(__int64 a1, __int64 a2, DWORD a3)
{
  DWORD v4; // eax
  size_t v5; // r8
  const char *v6; // rdx
  unsigned __int8 *v7; // rcx
  HLOCAL hMem[4]; // [rsp+48h] [rbp-20h] BYREF

  hMem[0] = 0LL;
  v4 = FormatMessageA(0x1300u, 0LL, a3, 0, (LPSTR)hMem, 0, 0LL);
  v5 = v4;
  v6 = (const char *)hMem[0];
  if ( v4 )
  {
    v7 = (unsigned __int8 *)hMem[0] + v4 - 1;
    do
    {
      if ( !byte_1808A9D50[*v7] )
        break;
      --v7;
      --v5;
    }
    while ( v5 );
  }
  hMem[1] = (HLOCAL)v5;
  if ( !v5 )
  {
    v5 = 13LL;
    v6 = "unknown error";
  }
  std::string::string(a2, v6, v5);
  LocalFree(hMem[0]);
  return a2;
}
