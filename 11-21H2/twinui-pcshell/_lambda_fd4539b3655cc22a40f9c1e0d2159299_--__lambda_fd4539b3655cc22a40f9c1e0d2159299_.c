/*
 * XREFs of _lambda_fd4539b3655cc22a40f9c1e0d2159299_::__lambda_fd4539b3655cc22a40f9c1e0d2159299_ @ 0x1805847BC
 * Callers:
 *     _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$3 @ 0x180585EC5 (_StartupFolderNotification--CheckForRemovedStartupApp_--_1_--dtor$3.c)
 *     _StartupRegKeyNotification::CheckForRemovedStartupApp_::_1_::dtor$2 @ 0x18058618D (_StartupRegKeyNotification--CheckForRemovedStartupApp_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall lambda_fd4539b3655cc22a40f9c1e0d2159299_::__lambda_fd4539b3655cc22a40f9c1e0d2159299_(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::wstring::_Tidy_deallocate((__int64)(v3 + 2));
      std::_Deallocate<16,0>(v3, 0x30uLL);
      v3 = v4;
    }
    while ( v4 );
    v2 = *(_QWORD ***)(a1 + 8);
  }
  std::_Deallocate<16,0>(v2, 0x30uLL);
}
