/*
 * XREFs of SelectPreferredIdleState @ 0x1C000B66C
 * Callers:
 *     AcpiCStatePreselect @ 0x1C000AF90 (AcpiCStatePreselect.c)
 *     PepIdlePreselect @ 0x1C000C3A0 (PepIdlePreselect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SelectPreferredIdleState(__int64 a1, __int64 a2)
{
  char i; // r9
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx

  i = 0;
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 == -1 )
  {
    if ( *(_BYTE *)(a2 + 42) )
    {
      i = 1;
      v8 = *(unsigned __int8 *)(a1 + 20) - 1;
      v7 = *(unsigned __int8 *)(v8 + a1 + 21);
    }
    else
    {
      v10 = *(unsigned __int8 *)(a2 + 41);
      if ( (_BYTE)v10 && (v11 = *(unsigned __int8 *)(a2 + 40), (_BYTE)v11) )
      {
        v12 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 32);
        v8 = *(_DWORD *)(a1 + 16);
        if ( v12 >= *(unsigned int *)(a2 + 36) )
        {
          v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 24);
          if ( v13 < (unsigned int)(v12 * v10 / 0x64) && v8 )
          {
            --v8;
          }
          else
          {
            v14 = (v12 * v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
            if ( v13 >= (unsigned int)((v14 + ((v12 * v11 - v14) >> 1)) >> 6) && v8 + 1 < *(unsigned __int8 *)(a1 + 20) )
              ++v8;
          }
          i = 1;
        }
        result = v8;
        v7 = *(unsigned __int8 *)(v8 + a1 + 21);
      }
      else
      {
        i = 1;
        v8 = *(unsigned __int8 *)(a1 + 20) - 1;
        v7 = *(_DWORD *)(a1 + 56) - 1;
      }
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 56);
    v7 = result - 1;
    if ( v4 < (unsigned int)result )
      v7 = v4;
    v8 = 0;
    v9 = 0LL;
    for ( i = 1; (unsigned int)v9 < *(unsigned __int8 *)(a1 + 20); v9 = (unsigned int)(v9 + 1) )
    {
      if ( (_DWORD)v9 && *(unsigned __int8 *)(v9 + a1 + 21) <= v7 )
        v8 = v9;
    }
  }
  *(_DWORD *)(a1 + 12) = v7;
  *(_DWORD *)(a1 + 16) = v8;
  if ( i )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)a2;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
