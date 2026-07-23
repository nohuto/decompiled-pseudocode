/*
 * XREFs of sub_1406DCB10 @ 0x1406DCB10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FB890 (ExSetFirmwareEnvironmentVariable.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406DCB10(__m128i *a1, __int128 *a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // esi
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // ebx
  BOOLEAN v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  __m128i Src; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+68h] [rbp-40h] BYREF

  v5 = a3;
  v19 = 0LL;
  if ( !*((_BYTE *)KeGetCurrentThread() + 562) )
    return ExSetFirmwareEnvironmentVariable((_DWORD)a1, (_DWORD)a2, a3, a4, a5);
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_31;
  Src = *a1;
  v8 = _mm_cvtsi128_si32(*a1);
  if ( !v8 )
    return 3221225477LL;
  if ( (Src.m128i_i8[8] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = v8 + Src.m128i_i64[1];
  if ( v10 > 0x7FFFFFFF0000LL || v10 < Src.m128i_i64[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_31:
    ExRaiseDatatypeMisalignment();
  v17 = a3 != 0 ? a4 : 0;
  if ( v17 )
  {
    v11 = a3 + (a4 & (unsigned int)-(a3 != 0));
    if ( v11 > 0x7FFFFFFF0000LL || v11 < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v16 = SeSinglePrivilegeCheck(stru_140D3CA50, 1);
  if ( v16 )
    goto LABEL_23;
  if ( sub_1406C9928(*((_QWORD *)KeGetCurrentThread() + 23)) )
    v16 = sub_1409FC784(2LL);
  if ( !v16 )
    return 3221225569LL;
LABEL_23:
  v19 = *a2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, (const void *)Src.m128i_i64[1], v9);
  v13[v9 >> 1] = 0;
  v14 = v19 - 0x4D32035977FA9ABDLL;
  if ( (_QWORD)v19 == 0x4D32035977FA9ABDLL )
    v14 = *((_QWORD *)&v19 + 1) - 0x4B788FE7F42860BDLL;
  if ( v14 || wcsnicmp(v13, L"Kernel_", 7uLL) )
  {
    v15 = sub_1409FE284((_DWORD)v13, (unsigned int)&v19, v5, v17, a5, 1);
    ExFreePoolWithTag(v13, 0);
    return v15;
  }
  else
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225506LL;
  }
}
