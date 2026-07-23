/*
 * XREFs of sub_1408575AC @ 0x1408575AC
 * Callers:
 *     sub_14068B750 @ 0x14068B750 (sub_14068B750.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020B698 @ 0x14020B698 (sub_14020B698.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140857634 @ 0x140857634 (sub_140857634.c)
 *     sub_140863DA8 @ 0x140863DA8 (sub_140863DA8.c)
 */

__int64 __fastcall sub_1408575AC(__int64 a1, __int64 a2, _PRIVILEGE_SET **a3)
{
  _PRIVILEGE_SET *v5; // rax
  unsigned int v6; // edi
  _PRIVILEGE_SET *v7; // rbx
  __int64 v8; // rdx
  int v9; // esi

  v5 = (_PRIVILEGE_SET *)sub_14020B698(0x48uLL, 0x39384D43u);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x48uLL);
    *(_QWORD *)&v7[1].Control = 1LL;
    v9 = sub_140857634(v7, v8, a2);
    if ( v9 < 0 )
    {
      sub_140863DA8(v7);
      SeFreePrivileges(v7);
      return (unsigned int)v9;
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
