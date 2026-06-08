/*
 * XREFs of PerfSelectionPTStates @ 0x1C00010F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // r10
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 i; // rbx
  __int64 (__fastcall *v16)(_QWORD); // rax
  __int64 v18; // [rsp+70h] [rbp+48h]

  v9 = *(_QWORD *)(a1 + 56);
  if ( (a7 & 1) != 0 )
  {
    v11 = *(_DWORD *)(v9 + 64);
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 68);
    if ( !v11 )
      v11 = 1;
  }
  v12 = *(_QWORD *)(v9 + 56);
  if ( (a7 & 2) != 0 )
  {
    v13 = 0;
    for ( i = *(_QWORD *)(v9 + 56); v13 < v11; v12 += 32LL )
    {
      i = v12;
      if ( *(unsigned __int8 *)(v12 + 24) <= a2 )
        break;
      ++v13;
    }
    if ( v13 == v11 )
      v13 = v11 - 1;
  }
  else
  {
    v13 = v11;
    do
      i = v12 + 32LL * --v13;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v13 );
  }
  for ( ; *(unsigned __int8 *)(i + 24) < a3; i = *(_QWORD *)(v9 + 56) + 32LL * --v13 )
  {
    if ( !v13 )
      break;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = *(_QWORD *)(v9 + 56) + 32LL * ++v13 )
  {
    if ( v13 == *(_DWORD *)(v9 + 64) - 1 )
      break;
  }
  if ( a9 )
  {
    v16 = *(__int64 (__fastcall **)(_QWORD))(v9 + 32);
    v18 = v13;
    if ( v16 )
      HIDWORD(v18) = v16(a5);
    *a9 = v18;
  }
  if ( a8 )
    *a8 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
