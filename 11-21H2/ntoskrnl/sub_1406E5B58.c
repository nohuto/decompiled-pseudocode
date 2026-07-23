/*
 * XREFs of sub_1406E5B58 @ 0x1406E5B58
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406E5B58(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  PVOID v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  __int64 v8; // r9
  __int64 v10; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  PVOID v12; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-58h]
  PVOID v14; // [rsp+50h] [rbp-48h]
  _OWORD v15[3]; // [rsp+58h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  v12 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0;
  *(_OWORD *)Handle = 0LL;
  if ( a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v6 = a1;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 15) = *(_BYTE *)(v6 + 15);
    }
    *(_OWORD *)Handle = *(_OWORD *)a1;
    if ( LOBYTE(Handle[0]) == 1 )
    {
      if ( ((__int64)Handle[0] & 0xFFFFFC00) != 0 )
      {
        v7 = -1073741811;
      }
      else if ( ((__int64)Handle[0] & 0x100) != 0 )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(Handle[1], 0x2000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
        v4 = Object;
        if ( v7 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x40000u);
          if ( ((__int64)Handle[0] & 0x200) != 0 )
          {
            if ( *((PVOID *)KeGetCurrentThread() + 23) != v4 )
            {
              v5 = 1;
              sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v15, v8);
            }
            v12 = Object;
            v10 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v12, 0LL, 0);
            if ( v10 )
              *(_BYTE *)(*(_QWORD *)sub_14035F5E8((__int64)&unk_140D31A00, *(_WORD *)(v10 + 16) & 0x3FF) + 6023LL) = 1;
            else
              v7 = -1073741632;
          }
          else
          {
            v7 = 0;
          }
        }
      }
      else
      {
        v7 = -1073741637;
      }
    }
    else
    {
      v7 = -1073741735;
    }
  }
  else
  {
    v7 = -1073741306;
  }
  if ( v5 )
    sub_1402D0930((__int64)v15, 0LL);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v7;
}
