/*
 * XREFs of sub_1407EF750 @ 0x1407EF750
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_14098A060 @ 0x14098A060 (sub_14098A060.c)
 *     sub_14098A13C @ 0x14098A13C (sub_14098A13C.c)
 */

__int64 __fastcall sub_1407EF750(__int64 a1)
{
  char v2; // bp
  ULONG_PTR v3; // rcx
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  v3 = *(_QWORD *)a1;
  Object = 0LL;
  v4 = sub_140732D40(v3, 0, qword_140D053C8, v2, 0x72506F50u, &Object, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( !v2 )
        goto LABEL_5;
      v4 = sub_1407EF848(0LL);
      if ( v4 >= 0 )
        goto LABEL_5;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) != 4 || v2 == 1 )
      {
LABEL_5:
        v6 = *(unsigned int *)(a1 + 8);
        if ( *(_BYTE *)(a1 + 12) )
        {
          if ( *((_BYTE *)v5 + 152) )
            v7 = sub_14098A13C(v5, v6, *(_QWORD *)(a1 + 16));
          else
            v7 = sub_14036A2C8(v5, v6);
        }
        else if ( *((_BYTE *)v5 + 152) )
        {
          v7 = sub_14098A060(v5, v6);
        }
        else
        {
          v7 = sub_140369FDC(v5, v6);
        }
        v4 = v7;
        goto LABEL_9;
      }
      v4 = -1073741637;
    }
LABEL_9:
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return (unsigned int)v4;
}
