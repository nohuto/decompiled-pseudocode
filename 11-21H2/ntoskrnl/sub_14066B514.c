/*
 * XREFs of sub_14066B514 @ 0x14066B514
 * Callers:
 *     sub_14066B464 @ 0x14066B464 (sub_14066B464.c)
 *     sub_14080C0F4 @ 0x14080C0F4 (sub_14080C0F4.c)
 * Callees:
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 */

__int64 __fastcall sub_14066B514(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v8 = *(_QWORD *)(a2 + 136);
  if ( v8 )
  {
    if ( *(int *)(v8 + 36) < 1 )
      return 3221225506LL;
    v13 = *(_QWORD *)(v8 + 48);
LABEL_12:
    *a3 = v13;
    *a5 = 0;
    return 0LL;
  }
  v9 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
    return 3221225506LL;
  if ( !v9 )
    return 3221225506LL;
  v10 = *(_DWORD *)(v9 + 416);
  if ( (v10 & 6) != 4 )
    return 3221225506LL;
  if ( (v10 & 0x400) == 0 )
  {
    v13 = *(_QWORD *)(v9 + 80);
    if ( !v13 )
      return 3221225506LL;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(a2 + 32);
  if ( !v11 )
    return 3221225506LL;
  result = SeCreateClientSecurityEx(v11, v9 + 260, 0LL);
  if ( (int)result < 0 )
    return result;
  *a3 = *(_QWORD *)(a4 + 16);
  *a5 = 1;
  return 0LL;
}
