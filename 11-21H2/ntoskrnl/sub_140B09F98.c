/*
 * XREFs of sub_140B09F98 @ 0x140B09F98
 * Callers:
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     sub_140978260 @ 0x140978260 (sub_140978260.c)
 */

__int64 sub_140B09F98()
{
  PVOID *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rdx
  PVOID v4; // rsi
  _QWORD *v5; // rax

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  while ( v0 != &PsLoadedModuleList )
  {
    if ( (*((_DWORD *)v0 + 49) & 0x20) == 0 )
    {
      v2 = (__int64)v0[35];
      if ( v2 )
      {
        v4 = v0[17];
        if ( v4 != (PVOID)1 )
        {
          v5 = sub_140978260((__int64 *)v0[17], v2);
          if ( !v5 )
            return (unsigned int)-1073741670;
          v0[17] = v5;
          sub_1406EB3D4(v4);
        }
      }
    }
    v0 = (PVOID *)*v0;
  }
  return v1;
}
