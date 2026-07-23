/*
 * XREFs of sub_1403D69E8 @ 0x1403D69E8
 * Callers:
 *     sub_1408530AC @ 0x1408530AC (sub_1408530AC.c)
 * Callees:
 *     sub_140694554 @ 0x140694554 (sub_140694554.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 */

__int64 __fastcall sub_1403D69E8(_DWORD **a1)
{
  int v2; // ebx
  _DWORD *v3; // r8
  int v4; // edx
  unsigned int i; // r9d
  unsigned int v6; // edx
  _OWORD *v8; // rax
  _RTL_RUN_ONCE *v9; // rax
  _RTL_RUN_ONCE *v10; // rax
  __int64 v11; // rdx

  v2 = 4;
  while ( 1 )
  {
    v3 = *a1;
    if ( !*a1 )
    {
      v8 = (_OWORD *)sub_140694554((unsigned int)((40 << v2) + 8));
      v3 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v8[2] = 0LL;
        if ( 1 << v2 )
        {
          v9 = (_RTL_RUN_ONCE *)(v8 + 2);
          do
          {
            RtlRunOnceInitialize(v9 - 3);
            v10[-2].Ptr = 0LL;
            v10[-1].Ptr = 0LL;
            v10[1].Ptr = v10;
            v10->Ptr = v10;
            v9 = v10 + 5;
          }
          while ( v11 != 1 );
        }
        *a1 = v3;
      }
      if ( !v3 )
        return (unsigned int)-1;
    }
    v4 = 1 << v2;
    if ( *v3 < (unsigned int)(1 << v2) )
      break;
    ++v2;
    ++a1;
    if ( (unsigned int)(v2 - 4) >= 4 )
      return (unsigned int)-1;
  }
  for ( i = *v3; *(_QWORD *)&v3[10 * i + 4]; i = (v4 - 1) & (i + 1) )
    ;
  v6 = i | v4;
  ++*v3;
  return v6;
}
