/*
 * XREFs of sub_1406E2A70 @ 0x1406E2A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1406E2A70(HANDLE *a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  char v9; // r14
  char v10; // r15
  __int64 v11; // rax
  int v12; // edi
  _OWORD *v13; // rcx
  PVOID v14; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h]
  __int64 v18[3]; // [rsp+68h] [rbp-30h] BYREF

  *(_OWORD *)v18 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  sub_140347770((__int64)v18);
  v9 = sub_140AB46D0();
  if ( v9 )
  {
    if ( a4 )
    {
      v12 = -1073741811;
    }
    else
    {
      v10 = *((_BYTE *)KeGetCurrentThread() + 562);
      if ( v10 == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a1;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      LOBYTE(v8) = v10;
      v12 = sub_14072B3B0(v8, (_DWORD)qword_140C490F0, a3, v10);
      if ( v12 >= 0 )
      {
        v13 = Object;
        *(_OWORD *)Object = 0LL;
        v13[1] = 0LL;
        *((_QWORD *)v13 + 1) = 0LL;
        v12 = sub_140729C30(v13, 0LL, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( v12 >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          v12 = 0;
        }
      }
    }
  }
  else
  {
    v12 = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  v14 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
    sub_140AB42A0(v14, v7);
  sub_14022EA30(v18);
  return (unsigned int)v12;
}
