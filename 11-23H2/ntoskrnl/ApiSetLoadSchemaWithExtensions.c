/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x140A0A06C
 * Callers:
 *     PspSiloLoadApiSets @ 0x1409ADBF0 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ApiSetReleaseSchema @ 0x140614C00 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x140615610 (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x140A09F9C (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A38C (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x140A0A640 (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, __int64 *a2, size_t *a3)
{
  int SchemaExtensions; // ebx
  __int64 v6; // rcx
  int v7; // eax
  size_t v8; // rax
  void *v9; // rcx
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  size_t v12; // [rsp+28h] [rbp-8h] BYREF
  void *v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Handle = (HANDLE)-1LL;
  v13 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v13, &v12);
  if ( SchemaExtensions < 0 )
    goto LABEL_10;
  if ( ApiSetIsSchemaSealed((__int64)v13) )
  {
LABEL_9:
    v8 = v12;
    *a2 = v6;
    v9 = 0LL;
    v13 = 0LL;
    *a3 = v8;
    goto LABEL_11;
  }
  v7 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
  SchemaExtensions = v7;
  if ( v7 >= 0 )
  {
    SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
  }
  else
  {
    if ( v7 != -1073741772 )
      goto LABEL_10;
    SchemaExtensions = 0;
  }
  if ( SchemaExtensions >= 0 )
  {
    v6 = (__int64)v13;
    goto LABEL_9;
  }
LABEL_10:
  v9 = v13;
LABEL_11:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    v9 = v13;
  }
  if ( v9 )
    ApiSetReleaseSchema(v9);
  return (unsigned int)SchemaExtensions;
}
