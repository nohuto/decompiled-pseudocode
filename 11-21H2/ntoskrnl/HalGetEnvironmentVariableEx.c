/*
 * XREFs of HalGetEnvironmentVariableEx @ 0x1403DAAF0
 * Callers:
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 *     sub_140552D54 @ 0x140552D54 (sub_140552D54.c)
 *     sub_140881840 @ 0x140881840 (sub_140881840.c)
 *     sub_140A00A80 @ 0x140A00A80 (sub_140A00A80.c)
 *     sub_140A6AE00 @ 0x140A6AE00 (sub_140A6AE00.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_140456B94 @ 0x140456B94 (sub_140456B94.c)
 */

__int64 __fastcall HalGetEnvironmentVariableEx(const wchar_t *a1, int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  rsize_t v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  unsigned int v19; // edx
  unsigned int v20; // edi
  wchar_t Dst[4]; // [rsp+30h] [rbp+0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp+8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp+18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !byte_140C4BFC8 )
    return 3221225474LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a1[v10] );
  v11 = 1;
  v12 = (unsigned int)(v10 + 1);
  if ( (unsigned int)v12 >= 0x100 )
    v12 = 256LL;
  v13 = (unsigned int)v12;
  v14 = 2 * v12;
  v15 = v14 + 15;
  if ( v14 + 15 < v14 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  wcscpy_s(Dst, v13, a1);
  *(_QWORD *)Dst = (unsigned int)*a4;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v11 = 0;
  }
  else
  {
    v19 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v19 >> 6);
    Affinity.Mask = 1LL << (v19 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v20 = sub_140456B94((unsigned int)Dst, a2, a5, (unsigned int)Dst, a3);
  if ( v11 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  result = v20;
  *a4 = *(_DWORD *)Dst;
  return result;
}
