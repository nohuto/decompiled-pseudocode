/*
 * XREFs of sub_1406ED260 @ 0x1406ED260
 * Callers:
 *     sub_14070EE20 @ 0x14070EE20 (sub_14070EE20.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1406ED344 @ 0x1406ED344 (sub_1406ED344.c)
 */

__int64 __fastcall sub_1406ED260(ULONG_PTR BugCheckParameter2, __int64 a2, LUID a3)
{
  int v3; // eax
  _PRIVILEGE_SET *v5; // rbx
  int v8; // edi
  _PRIVILEGE_SET *v9; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)&a3 + 2172LL);
  v16 = -1;
  v5 = 0LL;
  v8 = sub_1406ED344(a2, (v3 & 1) != 0 ? 2048 : 512, 1LL, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  v9 = (_PRIVILEGE_SET *)sub_140260C2C(0x30uLL, 0x53506D73u);
  v5 = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  *(_OWORD *)&v9->PrivilegeCount = 0LL;
  *(_OWORD *)&v9->Privilege[0].Attributes = 0LL;
  *(_OWORD *)&v9[1].Privilege[0].Luid.HighPart = 0LL;
  v9->Privilege[0].Luid = a3;
  v10 = v16;
  LOWORD(v9->Privilege[0].Attributes) = v16;
  if ( sub_1402A1124(BugCheckParameter2, &v9->Privilege[0].Luid, 1uLL, 0) )
  {
    v10 = -1;
    v5 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_5:
  if ( v10 != -1 )
  {
    v12 = v10 & 0x3FF;
    v13 = (__int64 *)sub_14035F5E8(a2, v12);
    sub_14035F344(v14, *v13);
    v15 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a2, v12);
    sub_1402AD030(v15 + 1);
  }
  if ( v5 )
    SeFreePrivileges(v5);
  return (unsigned int)v8;
}
