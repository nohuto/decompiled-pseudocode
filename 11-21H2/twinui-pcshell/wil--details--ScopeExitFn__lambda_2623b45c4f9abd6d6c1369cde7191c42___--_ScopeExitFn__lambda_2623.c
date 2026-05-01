/*
 * XREFs of wil::details::ScopeExitFn__lambda_2623b45c4f9abd6d6c1369cde7191c42___::_ScopeExitFn__lambda_2623b45c4f9abd6d6c1369cde7191c42___ @ 0x18054F340
 * Callers:
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$1 @ 0x180552679 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::ScopeExitFn__lambda_2623b45c4f9abd6d6c1369cde7191c42___::_ScopeExitFn__lambda_2623b45c4f9abd6d6c1369cde7191c42___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *(_QWORD *)(v1 + 80);
    v3 = *(_QWORD *)(v1 + 88);
    v4 = v2 + 8 * v3;
    while ( v2 != v4 )
    {
      LODWORD(v3) = DestroyWindow(*(HWND *)(*(_QWORD *)v2 + 8LL));
      v2 += 8LL;
    }
  }
  return v3;
}
