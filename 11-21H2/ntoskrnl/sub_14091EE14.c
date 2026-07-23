/*
 * XREFs of sub_14091EE14 @ 0x14091EE14
 * Callers:
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 */

__int64 __fastcall sub_14091EE14(__int64 a1, ULONG a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4, int a5, int a6)
{
  ULONG v9; // edi
  _PRIVILEGE_SET *v10; // rax
  _PRIVILEGE_SET *v11; // rbx
  unsigned int v12; // edi

  v9 = (unsigned int)a4;
  v10 = (_PRIVILEGE_SET *)Allocate(PagedPool, 0x2800uLL, 0x20204D43u, a4);
  v11 = v10;
  if ( v10 )
  {
    v10->Privilege[0].Luid.LowPart = 0;
    v10->Privilege[0].Luid.HighPart &= 0xFFFFFFF8;
    LOBYTE(v10->Privilege[0].Attributes) &= 0xFCu;
    v10->PrivilegeCount = a2;
    v10->Control = v9;
    v12 = sub_14091EEC4(v10, 512LL, 0LL, a1, a3, a5, a6);
    SeFreePrivileges(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
