/*
 * XREFs of sub_18001417C @ 0x18001417C
 * Callers:
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 *     sub_180013980 @ 0x180013980 (sub_180013980.c)
 * Callees:
 *     sub_1800011EC @ 0x1800011EC (sub_1800011EC.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_18001417C(__int64 a1, int a2)
{
  int v4; // ebp
  void *v5; // rcx
  NTSTATUS v6; // edi
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+44h] [rbp-44h] BYREF
  int v17; // [rsp+48h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  v18 = 0LL;
  LODWORD(v18) = 4;
  v4 = a2 & 1;
  v5 = *(void **)(a1 + 48);
  BYTE5(v18) = v4 != 0;
  v6 = NtSetInformationJobObject(v5, (JOBOBJECTINFOCLASS)18, &v18, 0x10u);
  if ( v6 == 262 )
    v6 = -1073741671;
  sub_18001F1C4(a1 + 64);
  v7 = *(_DWORD *)(a1 + 104);
  v8 = 0;
  if ( v6 >= 0 )
  {
    v10 = v7 & 0xFFFFFFEF;
  }
  else
  {
    v9 = v7 & 0xFFFFFFEF;
    v10 = v7 | 0x10;
    v6 = v4 != 0 ? v6 : 0;
    if ( !v4 )
      v10 = v9;
  }
  *(_DWORD *)(a1 + 104) = v10;
  *(_DWORD *)(a1 + 72) = 0;
  RtlReleaseSRWLockExclusive(a1 + 64);
  if ( v6 < 0 )
    v8 = v6;
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 && (qword_180032018 & 3) == qword_180032018 )
  {
    v13 = *(unsigned int *)(a1 + 80);
    v15 = v8;
    v16 = a2;
    v17 = v13;
    sub_1800011EC(v13, byte_18002A69B, v11, v12, (__int64)&v17, (__int64)&v16, (__int64)&v15);
  }
  return v8;
}
