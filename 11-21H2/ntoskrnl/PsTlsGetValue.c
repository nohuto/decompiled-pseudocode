/*
 * XREFs of PsTlsGetValue @ 0x1406940E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021BB0C @ 0x14021BB0C (sub_14021BB0C.c)
 */

__int64 __fastcall PsTlsGetValue(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rbx
  int v4; // edx
  int v5; // ecx
  __int64 v6; // r10
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = (unsigned __int64 *)((char *)KeGetCurrentThread() + 2280);
  v11 = 0LL;
  v12 = 0LL;
  v4 = a1;
  if ( (*(_DWORD *)v2 & 2) != 0 )
    return 3221225547LL;
  if ( (*(_DWORD *)v2 & 1) == 0 )
    goto LABEL_3;
  result = sub_14021BB0C(a1, a1, &v12);
  if ( (int)result < 0 )
    return result;
  if ( (_DWORD)v12 != 0x40000000 )
    return 3221225547LL;
  v10 = *v2;
  v2 = &v11;
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_3:
  if ( (unsigned int)(v4 - 1) > 0xEE )
    return 3221225485LL;
  if ( *v2 )
  {
    _BitScanReverse((unsigned int *)&v5, v4 + 16);
    v6 = *(_QWORD *)(*v2 + 8LL * (unsigned int)(v5 - 4));
    if ( v6
      && (v7 = (__int64 *)(v6 + 8 * (3 * ((unsigned int)(v4 + 16) ^ (unsigned __int64)(unsigned int)(1 << v5)) + 1))) != 0LL )
    {
      v8 = *v7;
    }
    else
    {
      v8 = 0LL;
    }
    *a2 = v8;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
