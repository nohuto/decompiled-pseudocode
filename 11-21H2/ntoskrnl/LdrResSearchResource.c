/*
 * XREFs of LdrResSearchResource @ 0x140673120
 * Callers:
 *     sub_140673010 @ 0x140673010 (sub_140673010.c)
 *     sub_1406744E0 @ 0x1406744E0 (sub_1406744E0.c)
 *     LdrResFindResource @ 0x1406E7250 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x1406EB1B0 (LdrResFindResourceDirectory.c)
 *     sub_14082E228 @ 0x14082E228 (sub_14082E228.c)
 *     sub_1408422F0 @ 0x1408422F0 (sub_1408422F0.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 *     KeHwPolicyLocateResource @ 0x140AFAC30 (KeHwPolicyLocateResource.c)
 * Callees:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406734EC @ 0x1406734EC (sub_1406734EC.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  void *v10; // r14
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edi
  __int64 result; // rax
  bool v15; // zf
  int v16; // eax
  int v17; // esi
  unsigned __int16 v18; // ax
  __int64 v19; // r12
  ULONG64 v20; // [rsp+58h] [rbp-80h] BYREF
  void *v21; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  _QWORD v24[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-50h]

  v22 = a5;
  v23 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v12 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v12 = a4;
  v13 = v12 | 0x1000;
  if ( (v12 & 0x2000) != 0 )
    v13 = v12;
  if ( (v13 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v13 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v13 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_22;
  }
  if ( (v13 & 0x41) == 0 )
    return 3221225714LL;
LABEL_22:
  if ( (v13 & 0x100) != 0 )
  {
    v15 = (v13 & 0xE00) == 0;
  }
  else
  {
    v16 = v13 & 0xC00;
    if ( (v13 & 0x200) == 0 )
    {
      if ( v16 == 3072 )
        return (unsigned int)-1073741582;
      goto LABEL_29;
    }
    v15 = v16 == 0;
  }
  if ( !v15 )
    return (unsigned int)-1073741582;
LABEL_29:
  if ( (v13 & 0x8000) != 0 && (~(_WORD)v13 & 0x810) != 0 || (v13 & 0x3000) == 0x3000 || (v13 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v20 = 0LL;
  if ( (v13 & 0x20000) != 0 )
  {
    if ( (v13 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v20 = *a6;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    if ( (v13 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v20 = *a6;
  }
  memmove(v24, a2, 8LL * a3);
  v17 = 3;
  if ( a3 <= 3 )
    v17 = a3;
  if ( v17 == 3 )
  {
    if ( v25 >= 0x10000 )
    {
      if ( *(_WORD *)v25 )
      {
        v18 = sub_1403C68CC((const void *)v25, 2);
        LODWORD(v21) = v18;
      }
      else
      {
        v18 = 0;
        LODWORD(v21) = 0;
      }
      v25 = v18;
      goto LABEL_57;
    }
    if ( v25 && ((v25 & 0x3FF) == 0 || v25 == 127 || !(unsigned int)sub_140372644(v25, 0LL, 0, 2)) )
      return (unsigned int)-1073741811;
  }
LABEL_57:
  if ( (v13 & 0x300) == 0 )
    goto LABEL_63;
  v10 = (void *)a1;
  if ( (v13 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = sub_1406734EC(v10, &v20, v13);
  if ( (int)result >= 0 || (v13 & 0x1000) == 0 )
  {
LABEL_63:
    v19 = v23;
    v11 = sub_140206200(v10, v20, v13, (__int64)v24, v17, v22, a6, a7, v23);
    if ( v11 == -1073741686 && ((v24[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      v21 = 0LL;
      if ( (int)sub_1402D708C((__int64)v10, 0xF2EEu, &v21, 0LL, 0x1000000) >= 0 )
      {
        v20 = 0LL;
        if ( (int)sub_1406734EC(v21, &v20, v13) >= 0 )
          return (unsigned int)sub_140206200(v21, v20, v13 | 0x1000000, (__int64)v24, v17, v22, a6, a7, v19);
      }
    }
    return v11;
  }
  return result;
}
