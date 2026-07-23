/*
 * XREFs of sub_14056322C @ 0x14056322C
 * Callers:
 *     sub_1405635D0 @ 0x1405635D0 (sub_1405635D0.c)
 * Callees:
 *     sub_140562A80 @ 0x140562A80 (sub_140562A80.c)
 *     sub_140562EBC @ 0x140562EBC (sub_140562EBC.c)
 *     sub_140563100 @ 0x140563100 (sub_140563100.c)
 *     sub_140563158 @ 0x140563158 (sub_140563158.c)
 */

__int64 sub_14056322C()
{
  __int64 LockArray_high; // rcx
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  sub_140562EBC((char **)(qword_140C448A8 + 216 + 8 * LockArray_high), qword_140C448A8 + 16600 + 8 * LockArray_high);
  v1 = qword_140C448A8;
  v2 = 0LL;
  if ( *(_DWORD *)(qword_140C448A8 + 176) )
  {
    while ( 1 )
    {
      v3 = sub_140563100(
             *(_QWORD *)(v1 + 8 * v2 + 216),
             *(_DWORD *)(v1 + 8 * v2 + 16600) - (unsigned int)*(_QWORD *)(v1 + 8 * v2 + 216));
      if ( v3 < 0 )
        break;
      if ( (_DWORD)v2 != *(_DWORD *)(qword_140C448A8 + 180) )
      {
        v3 = sub_140563158((__int64 *)(*(_QWORD *)(qword_140C448A8 + 144) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5619;
          goto LABEL_17;
        }
        v3 = sub_140563158((__int64 *)(*(_QWORD *)(qword_140C448A8 + 136) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5627;
          goto LABEL_17;
        }
      }
      v1 = qword_140C448A8;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(qword_140C448A8 + 176) )
        goto LABEL_7;
    }
    v9 = 5603;
LABEL_17:
    v10 = qword_140C448A8;
    v11 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v11 )
      v11 = v9;
    *(_DWORD *)(qword_140C448A8 + 33272) = v11;
    v12 = *(_DWORD *)(v10 + 33276);
    if ( !v12 )
      v12 = 1;
    *(_DWORD *)(v10 + 33276) = v12;
    return (unsigned int)v3;
  }
  else
  {
LABEL_7:
    result = sub_140563100(v1, 0x8238u);
    if ( (int)result >= 0 )
    {
      result = sub_140562A80();
      if ( (int)result >= 0 )
        return 0LL;
      v5 = 5651;
    }
    else
    {
      v5 = 5639;
    }
    v6 = qword_140C448A8;
    v7 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v7 )
      v7 = v5;
    *(_DWORD *)(qword_140C448A8 + 33272) = v7;
    v8 = *(_DWORD *)(v6 + 33276);
    if ( !v8 )
      v8 = 1;
    *(_DWORD *)(v6 + 33276) = v8;
  }
  return result;
}
