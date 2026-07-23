/*
 * XREFs of sub_14075C22C @ 0x14075C22C
 * Callers:
 *     sub_14075C2E0 @ 0x14075C2E0 (sub_14075C2E0.c)
 * Callees:
 *     sub_14075C190 @ 0x14075C190 (sub_14075C190.c)
 */

__int64 __fastcall sub_14075C22C(void *a1, unsigned int a2, __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+44h] [rbp+1Ch]

  v11 = HIDWORD(a3);
  v10 = 0;
  a5 = 0LL;
  v6 = sub_14075C190(a1, a2, &v10, &a5);
  if ( a5 && *a5 >= 0x94u && (a5[36] & 0x800) != 0 )
    return 1LL;
  if ( v6 && *(_QWORD *)v6 == 0x2B992DDFA232LL )
  {
    v7 = __rdtsc();
    v8 = (v6 ^ (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
    if ( v8 == 0x2B992DDFA232LL || !v8 )
      v8 = 0x2B992DDFA233LL;
    *(_QWORD *)v6 = v8;
    return 1LL;
  }
  return 0LL;
}
