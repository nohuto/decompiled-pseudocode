/*
 * XREFs of sub_1C0080978 @ 0x1C0080978
 * Callers:
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 */

__int64 __fastcall sub_1C0080978(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  unsigned int i; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a2 + 12);
  if ( v6 + v4 > *(_DWORD *)(a1 + 8) )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x24u, (__int64)&unk_1C008B728, v6);
    return (unsigned int)-1073741435;
  }
  else
  {
    v7 = (_QWORD *)(a2 + 16);
    if ( v6 <= 8 )
    {
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 15) > 2 )
      {
        *v7 = 0LL;
        for ( i = 0; i < v6; v6 = *(_DWORD *)(a2 + 12) )
        {
          v9 = i;
          v10 = *(_DWORD *)(a1 + 12) - i++ + v6 - 1;
          *(_BYTE *)(v9 + a2 + 16) = *(_BYTE *)(v10 + *(_QWORD *)a1);
        }
      }
      else
      {
        *v7 = 0LL;
        memmove(v7, (const void *)(*(_QWORD *)a1 + *(unsigned int *)(a1 + 12)), *(unsigned int *)(a2 + 12));
      }
    }
    else
    {
      *v7 = *(_QWORD *)a1 + v4;
    }
    *(_DWORD *)(a1 + 12) += *(_DWORD *)(a2 + 12);
  }
  return v3;
}
