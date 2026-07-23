/*
 * XREFs of sub_14028ADEC @ 0x14028ADEC
 * Callers:
 *     sub_14023F590 @ 0x14023F590 (sub_14023F590.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14028ADEC(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r10
  ULONG_PTR **v3; // rax
  int v5; // eax

  v2 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(a2 + 62) & 1) != 0 )
    {
      if ( v2 == *(ULONG_PTR **)(qword_140C51F48
                               + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL)) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x2000000;
LABEL_9:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &StartContext )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x4000000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x4000000;
    goto LABEL_9;
  }
  if ( *v3 == v2 && ((*(_BYTE *)(a1 + 3) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x2000000u;
  return 3221226614LL;
}
