/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C00662A8
 * Callers:
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0066118 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, (__int64 *)&v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, v8 + 64, a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
