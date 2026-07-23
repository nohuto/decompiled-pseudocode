/*
 * XREFs of sub_140A68220 @ 0x140A68220
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A6804C @ 0x140A6804C (sub_140A6804C.c)
 */

__int64 __fastcall sub_140A68220(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  int v6; // r10d
  __int64 v7; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  LODWORD(v5) = HIDWORD(KeGetPcr()[1].LockArray);
  v6 = 0;
  v7 = (unsigned int)v5;
  if ( a1 == 0x7FFFFFFFFFFFFFFFLL
    || (v6 = sub_140A6804C(*(_QWORD *)(qword_140C448A8 + 136) + 24 * v5, a1, a3, a4), v6 >= 0) )
  {
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v6 = sub_140A6804C(*(_QWORD *)(qword_140C448A8 + 144) + 24 * v7, a2, a3, a5);
      if ( v6 < 0 )
      {
        v13 = qword_140C448A8;
        v14 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v14 )
          v14 = 4241;
        *(_DWORD *)(qword_140C448A8 + 33272) = v14;
        v15 = *(_DWORD *)(v13 + 33276);
        if ( !v15 )
          v15 = 10;
        *(_DWORD *)(v13 + 33276) = v15;
      }
    }
  }
  else
  {
    v10 = qword_140C448A8;
    v11 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v11 )
      v11 = 4229;
    *(_DWORD *)(qword_140C448A8 + 33272) = v11;
    v12 = *(_DWORD *)(v10 + 33276);
    if ( !v12 )
      v12 = 10;
    *(_DWORD *)(v10 + 33276) = v12;
  }
  return (unsigned int)v6;
}
