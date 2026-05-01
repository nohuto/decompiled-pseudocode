/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&_::_scalar_deleting_destructor_ @ 0x180584E80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  _QWORD **v2; // r8
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx

  v2 = (_QWORD **)*((_QWORD *)a1 + 3);
  *v2[1] = 0LL;
  v5 = *v2;
  if ( *v2 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::wstring::_Tidy_deallocate((__int64)(v5 + 2));
      std::_Deallocate<16,0>(v5, 0x30uLL);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)a1 + 3), 0x30uLL);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
