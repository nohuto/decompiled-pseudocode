/*
 * XREFs of sub_1405635D0 @ 0x1405635D0
 * Callers:
 *     sub_1405633A8 @ 0x1405633A8 (sub_1405633A8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056322C @ 0x14056322C (sub_14056322C.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 */

__int64 sub_1405635D0()
{
  int v0; // ebx
  __int64 v1; // rax
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx

  v0 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) && (*(_DWORD *)(qword_140C448A8 + 64) & 8) == 0 )
    sub_14056322C();
  v1 = qword_140C448A8;
  *(_DWORD *)(qword_140C448A8 + 64) &= ~4u;
  if ( (*(_DWORD *)(v1 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(qword_140C448A8 + 33232) )
  {
    v2 = sub_140A67C14(0LL);
    v3 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 33300) = v2;
    v0 = sub_14042A5E0(*(_QWORD *)(v3 + 33168), v4);
    if ( v0 < 0 )
    {
      v5 = qword_140C448A8;
      v6 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v6 )
        v6 = 2988;
      *(_DWORD *)(qword_140C448A8 + 33272) = v6;
      v7 = *(_DWORD *)(v5 + 33276);
      if ( !v7 )
        v7 = 8;
      *(_DWORD *)(v5 + 33276) = v7;
    }
    *(_DWORD *)(qword_140C448A8 + 33304) = sub_140A67C14(0LL);
  }
  return (unsigned int)v0;
}
