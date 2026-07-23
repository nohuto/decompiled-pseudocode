/*
 * XREFs of PoCreateThermalRequest @ 0x140829400
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  int v7; // edi
  __int64 Pool2; // rax
  CMSPAddress *v9; // rcx
  __int64 v10; // rax
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  *a1 = 0LL;
  if ( a2 && a3 && a4 )
  {
    v7 = sub_14036B98C(a4, 0LL, a3, 1, 0LL, &v12);
    if ( v7 >= 0 )
    {
      Pool2 = ExAllocatePool2(256LL, 576LL, 1819231056LL);
      v5 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v9 = (CMSPAddress *)Pool2;
        *(_QWORD *)(Pool2 + 24) = v12;
        *(_BYTE *)(Pool2 + 16) = 100;
        v10 = MEMORY[0xFFFFF78000000008];
        v5[6] = MEMORY[0xFFFFF78000000008];
        v5[7] = v10;
        v7 = sub_1408294F0(v9);
        if ( v7 >= 0 )
        {
          *a1 = v5;
          return (unsigned int)v7;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    v6 = v12;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v6 )
    sub_14036B090(v6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6C6F4350u);
  return (unsigned int)v7;
}
