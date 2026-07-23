/*
 * XREFs of sub_140986D28 @ 0x140986D28
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14059774C @ 0x14059774C (sub_14059774C.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140986D28(__int64 a1, char a2)
{
  unsigned int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  int v7; // edi
  char v8; // r8
  ULONG_PTR BugCheckParameter1[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *(_OWORD *)BugCheckParameter1 = 0LL;
  v11 = 0;
  Object = 0LL;
  v3 = 24;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (v5 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v5 + 24 > 0x7FFFFFFF0000LL || v5 + 24 < v5 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v3 = *(_DWORD *)(a1 + 24);
      }
    }
    memmove(BugCheckParameter1, *(const void **)(a1 + 16), v3);
    if ( LODWORD(BugCheckParameter1[0]) != 3
      || (v11 & 0xFFFFFFC0) != 0
      || (v6 = v11 & 0xF, v6 > 8)
      || (v7 = (v11 >> 4) & 3, v7 == 3)
      || v6 == 8 && !v7 )
    {
      v4 = -1073741811;
    }
    else
    {
      v4 = sub_140732D40(BugCheckParameter1[1], 0x2000, (__int64)PsProcessType, a2, 0x73576650u, &Object, 0LL, 0LL);
      if ( v4 >= 0 )
      {
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          if ( v7 == 1 )
            v8 = 3;
        }
        v4 = sub_14059774C((ULONG_PTR)Object, v6, v8);
      }
    }
  }
  else
  {
    v4 = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)v4;
}
