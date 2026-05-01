/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2_::_1_::dtor$0 @ 0x180258B11
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 41LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 88);
    operator delete(*(void **)(a2 + 56));
  }
}
