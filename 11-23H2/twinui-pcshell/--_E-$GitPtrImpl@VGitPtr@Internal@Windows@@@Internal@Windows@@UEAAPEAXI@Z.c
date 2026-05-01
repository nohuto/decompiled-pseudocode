/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x1803CAB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x1803CAF6C (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  *(_QWORD *)a1 = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( a1[2] )
    Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
