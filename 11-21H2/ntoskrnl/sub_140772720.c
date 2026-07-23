/*
 * XREFs of sub_140772720 @ 0x140772720
 * Callers:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140772720(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 (**v3)[3]; // r9
  unsigned int v4; // ecx
  unsigned int i; // r10d
  __int64 *v7; // r11
  __int64 (**v8)[3]; // r8
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = &off_140A3AC00;
  v4 = 0;
  for ( i = 0; i < 0x21; ++i )
  {
    v7 = (__int64 *)*v3;
    v8 = v3;
    if ( v2 == LODWORD((**v3)[2]) )
    {
      v10 = *(_QWORD *)a2 - *v7;
      if ( *(_QWORD *)a2 == *v7 )
        v10 = *(_QWORD *)(a2 + 8) - v7[1];
      if ( !v10 )
        break;
    }
    v3 += 3;
    v8 = 0LL;
  }
  if ( v8 )
    return *((unsigned int *)v8 + 3);
  return v4;
}
