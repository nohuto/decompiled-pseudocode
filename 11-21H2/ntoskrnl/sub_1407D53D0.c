/*
 * XREFs of sub_1407D53D0 @ 0x1407D53D0
 * Callers:
 *     sub_1406EBB70 @ 0x1406EBB70 (sub_1406EBB70.c)
 * Callees:
 *     sub_140358884 @ 0x140358884 (sub_140358884.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1407F40A8 @ 0x1407F40A8 (sub_1407F40A8.c)
 */

__int64 __fastcall sub_1407D53D0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int *v9; // r10
  unsigned __int8 v10; // si
  __int64 v11; // rcx
  int v12; // ecx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v18 = 0LL;
  Object = 0LL;
  if ( !sub_140358884(a4) )
    return 3221225714LL;
  if ( v8 )
    return 3221225713LL;
  if ( v9 && (a4 & 2) == 0 )
    return 3221225712LL;
  v16 = 0;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v10 )
  {
    v7 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v9;
      v16 = *(_DWORD *)v7;
    }
  }
  else if ( v9 )
  {
    v16 = *v9;
  }
  if ( (a4 & 2) == 0 || (LOBYTE(v7) = v10, result = sub_1407F40A8(v16, v7), (int)result >= 0) )
  {
    v12 = sub_14072B3B0(v10, qword_140D06C78, 0, v10, v15, 168, 0, 0, &Object, 0LL);
    if ( v12 >= 0 )
    {
      v13 = Object;
      if ( (a4 & 2) != 0 )
        sub_1403725A0((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v16, a4);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, a4);
      v13[17] = 0LL;
      *((_DWORD *)v13 + 40) = a4;
      v12 = sub_140729C30((char *)v13, 0LL, a5, 0, 0, 0LL, &v18);
      v16 = v12;
      if ( v12 >= 0 )
        *a1 = v18;
    }
    return (unsigned int)v12;
  }
  return result;
}
