/*
 * XREFs of sub_140663D08 @ 0x140663D08
 * Callers:
 *     sub_140662090 @ 0x140662090 (sub_140662090.c)
 *     sub_1406620E0 @ 0x1406620E0 (sub_1406620E0.c)
 *     sub_140663CC0 @ 0x140663CC0 (sub_140663CC0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140667554 @ 0x140667554 (sub_140667554.c)
 *     sub_1406675AC @ 0x1406675AC (sub_1406675AC.c)
 *     sub_140667810 @ 0x140667810 (sub_140667810.c)
 *     sub_140667864 @ 0x140667864 (sub_140667864.c)
 *     sub_1406679E8 @ 0x1406679E8 (sub_1406679E8.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 */

__int64 __fastcall sub_140663D08(HANDLE *a1, __int64 a2, unsigned __int64 a3, int a4, char a5, char a6)
{
  __int64 v10; // rcx
  char v11; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r8
  char v15; // al
  PVOID v16; // rbx
  int v17; // r14d
  unsigned __int64 v18; // r14
  int v19; // edi
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  int v23; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v26[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v26, 0, 0x48uLL);
  Object = 0LL;
  Handle = 0LL;
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v11 )
  {
    v12 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v12 = a3;
      v26[0] = *(_OWORD *)v12;
      v26[1] = *(_OWORD *)(v12 + 16);
      v26[2] = *(_OWORD *)(v12 + 32);
      v26[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v26[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v26[0] = *(_OWORD *)a3;
    v26[1] = *(_OWORD *)(a3 + 16);
    v26[2] = *(_OWORD *)(a3 + 32);
    v26[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v26[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = v11;
  result = sub_1406679E8(v10, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v15 = a5;
      if ( (v26[0] & 0x40000) != 0 )
        v15 = 1;
      a5 = v15;
    }
    LOBYTE(v14) = a5;
    v16 = Object;
    v17 = sub_140667864(Object, 1LL, v14);
    if ( v17 < 0 )
    {
      ObfDereferenceObject(v16);
      return (unsigned int)v17;
    }
    v18 = (unsigned __int64)v26 & -(__int64)(a3 != 0);
    v19 = sub_1406675AC((_DWORD)v16, v18, (_DWORD)v16, 0, a4, a5, a6);
    if ( v19 >= 0 )
    {
      if ( a6 )
        *((_DWORD *)v16 + 104) |= 0x3000u;
      sub_140667554(v16, v18);
      v20 = sub_1407A73B0(qword_1400011C0, 80LL, 1LL);
      *((_QWORD *)v16 + 2) = v20;
      if ( v20 )
      {
        *(_QWORD *)(v20 + 16) = 0LL;
        **((_QWORD **)v16 + 2) = v16;
        *(_QWORD *)(*((_QWORD *)v16 + 2) + 8LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)v16 + 2) + 72LL) = 0LL;
        v21 = (_QWORD *)(*((_QWORD *)v16 + 2) + 24LL);
        v21[1] = v21;
        *v21 = v21;
        v22 = sub_140667810(*((_QWORD *)v16 + 2) + 40LL);
        if ( v22 >= 0 )
        {
          v23 = sub_140729C30(v16, 0LL, 0, 0LL, (__int64)&Handle);
          if ( v23 >= 0 )
            *a1 = Handle;
          return (unsigned int)v23;
        }
        v19 = v22;
      }
      else
      {
        v19 = -1073741801;
      }
    }
    ObfDereferenceObject(v16);
    return (unsigned int)v19;
  }
  return result;
}
