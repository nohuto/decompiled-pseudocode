/*
 * XREFs of sub_1402F5D4C @ 0x1402F5D4C
 * Callers:
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

char __fastcall sub_1402F5D4C(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r12
  unsigned int v8; // ecx
  _DWORD *v9; // rax
  char v11; // bl
  _QWORD **v12; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx

  v4 = a2[2];
  v6 = a4;
  v8 = 0;
  v9 = (_DWORD *)(a2[35] + 404LL * a4);
  v11 = 1;
  v12 = (_QWORD **)(a2[29] + 16LL * a4);
  if ( dword_140C49B14 )
  {
    while ( *v9 >= 0x3Fu )
    {
      ++v8;
      ++v9;
      if ( v8 >= dword_140C49B14 )
        goto LABEL_6;
    }
    return 0;
  }
  else
  {
LABEL_6:
    if ( a3 )
    {
      *a3 = 0LL;
      ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
      v14 = *v12;
      if ( *v12 != v12 )
      {
        if ( (_QWORD **)v14[1] != v12 || (v15 = (_QWORD *)*v14, *(_QWORD **)(*v14 + 8LL) != v14) )
          __fastfail(3u);
        *v12 = v15;
        v15[1] = v12;
        *a3 = v14;
        ++*(_DWORD *)(a2[30] + 4 * v6);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1232)) <= 1 )
          __fastfail(0xEu);
        if ( v4 && _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
          __fastfail(0xEu);
      }
      ExReleasePushLockEx(a1 + 1160, 0LL);
      if ( !*a3 )
        _InterlockedAdd(&dword_140D01818, 1u);
    }
  }
  return v11;
}
