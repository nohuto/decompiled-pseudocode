/*
 * XREFs of sub_1409AEFF0 @ 0x1409AEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1409AEFF0(HANDLE *a1, int a2, int a3, ULONG_PTR a4, int a5)
{
  char v8; // r14
  __int64 v9; // rcx
  int v10; // edi
  PVOID *v11; // rcx
  __int64 Tag; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16[3]; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( a5 )
  {
    v10 = -1073741811;
  }
  else
  {
    v10 = sub_140732D40(a4, 512, (__int64)PsProcessType, v8, 0x63507350u, &Object, 0LL, 0LL);
    if ( v10 >= 0 )
    {
      v10 = sub_14072B3B0(v8, (_DWORD *)qword_140D06E08, a3, v8, Tag, 24, 0, 0, v16, 0LL);
      if ( v10 >= 0 )
      {
        v11 = (PVOID *)v16[0];
        *(_OWORD *)v16[0] = 0LL;
        v11[2] = 0LL;
        v11[1] = 0LL;
        *v11 = Object;
        *((_DWORD *)v11 + 4) = 0;
        Object = 0LL;
        v10 = sub_140729C30((char *)v11, 0LL, a2, 0, 0, 0LL, &Handle);
        if ( v10 >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v10;
}
