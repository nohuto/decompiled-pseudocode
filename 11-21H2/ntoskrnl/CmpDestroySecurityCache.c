/*
 * XREFs of CmpDestroySecurityCache @ 0x14067C45C
 * Callers:
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140715FA8 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpDestroySecurityCache(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx

  result = *(unsigned int *)(a1 + 1872);
  v2 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v2 + 8);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v5 + 8) != v4 + 8 || (v6 = *(_QWORD **)(v4 + 16), *v6 != v4 + 8) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v4, (unsigned int)(*(_DWORD *)(v4 + 24) + 32));
      result = *(unsigned int *)(a1 + 1872);
      ++v2;
    }
    while ( v2 < (unsigned int)result );
    if ( (_DWORD)result )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(
                 *(_QWORD *)(a1 + 1888),
                 (unsigned int)(16 * *(_DWORD *)(a1 + 1876)));
  }
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1876) = 0;
  return result;
}
