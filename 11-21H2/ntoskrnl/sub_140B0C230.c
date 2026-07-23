/*
 * XREFs of sub_140B0C230 @ 0x140B0C230
 * Callers:
 *     sub_140B0C394 @ 0x140B0C394 (sub_140B0C394.c)
 * Callees:
 *     sub_1402DCBFC @ 0x1402DCBFC (sub_1402DCBFC.c)
 *     sub_1403C47EC @ 0x1403C47EC (sub_1403C47EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strchr @ 0x1403E2AA0 (strchr.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0D658 @ 0x140B0D658 (sub_140B0D658.c)
 */

__int64 __fastcall sub_140B0C230(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  void *v8; // rsi
  char *v11; // rax
  char *v12; // r12
  int v13; // ebx
  _DWORD *v14; // rax
  int v15; // r14d
  int v16; // ebp
  int v17; // r15d
  unsigned int v18; // edi
  __int64 Pool2; // rax
  _DWORD *v21; // rax
  __int128 v22; // [rsp+38h] [rbp-60h] BYREF

  v5 = a2 + 1;
  v8 = 0LL;
  v22 = 0LL;
  v11 = strchr((const char *)(a2 + 1), 40);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741811;
  *v11 = 0;
  if ( *(_BYTE *)a2 == 63 )
  {
    v13 = sub_140B0CCAC(a1, "CallbackGuidDef", v5, &v22);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v21 = sub_1403C47EC(&v22);
    if ( v21 )
    {
      *a3 = v21;
      v15 = v21[14];
      v16 = v21[15];
      v17 = v21[16];
      goto LABEL_6;
    }
    return (unsigned int)-1073741275;
  }
  v13 = sub_140B0CCAC(a1, "RuleNameGuidDef", v5, &v22);
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = sub_1402DCBFC(&v22);
  if ( !v14 )
    return (unsigned int)-1073741275;
  *a3 = v14;
  v15 = v14[10];
  v16 = v14[11];
  v17 = v14[12];
LABEL_6:
  *v12 = 40;
  v18 = v17 + v15 + v16;
  if ( v18 )
  {
    Pool2 = ExAllocatePool2(256LL, 4LL * v18, 0x74734D45u);
    v8 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( !(unsigned __int8)sub_140B0D658((_DWORD)v12, Pool2, v15, v16, v17) )
    {
      v13 = -1073741811;
      ExFreePoolWithTag(v8, 0x74734D45u);
      return (unsigned int)v13;
    }
  }
  *a4 = v8;
  *a5 = v18;
  return (unsigned int)v13;
}
