/*
 * XREFs of sub_140568024 @ 0x140568024
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

PVOID __fastcall sub_140568024(unsigned __int64 a1, PVOID **a2, int a3, _BYTE *a4)
{
  PVOID *v8; // rsi
  PVOID *v9; // rbx
  PVOID v10; // rdi
  unsigned int v11; // ebp
  PVOID *v12; // rcx
  PVOID v13; // rdx

  if ( (unsigned int)dword_140C4E560 >= 2 )
    v8 = &PsLoadedModuleList;
  else
    v8 = (PVOID *)(qword_140D068D0 + 16);
  v9 = (PVOID *)*v8;
  v10 = 0LL;
  *a4 = 0;
  if ( v9 )
  {
    v11 = 0;
    while ( v9 != v8 )
    {
      if ( !sub_14028FBF0((__int64)v9) )
        return 0LL;
      if ( ++v11 <= 2 && a3 == 1 )
      {
        v9 = (PVOID *)*v9;
      }
      else
      {
        v12 = v9;
        v9 = (PVOID *)*v9;
        v13 = v12[6];
        if ( a1 >= (unsigned __int64)v13 && a1 < (unsigned __int64)v13 + *((unsigned int *)v12 + 16) )
        {
          *a2 = v12;
          v10 = v13;
          if ( v11 <= 2 )
            *a4 = 1;
          return v10;
        }
      }
    }
  }
  return v10;
}
