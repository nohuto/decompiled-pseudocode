/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0065AA0 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0065E94 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0065F88 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0066210 (AMLIGetValidNamespaceName.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, char *a3)
{
  int valid; // ebx
  int v6; // eax
  void *Pool2; // rdi
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  int v13; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h]

  v13 = 0;
  v14 = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v13);
  if ( valid >= 0 )
  {
    v6 = OSReadRegValue(a3);
    valid = v6;
    if ( v6 == -2147483643 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 0LL, 1231842625LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = 0LL;
      if ( v6 < 0 )
        return (unsigned int)valid;
    }
    valid = OSReadRegValue(a3);
    if ( valid >= 0 )
    {
      v15 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v8 = v13 == 1346716767 ? AMLICreateOverrideObjectDep(Pool2) : AMLICreateOverrideObjectDefault(Pool2, 0LL);
      valid = v8;
      if ( v8 >= 0 )
      {
        valid = CreateNameSpaceObject(
                  gpheapGlobal,
                  (unsigned __int8 *)a3,
                  a2,
                  *(struct _EX_RUNDOWN_REF **)(a2 + 48),
                  (__int64 *)&v14,
                  0);
        if ( valid < 0 )
        {
          FreeObjData((__int64)&v15);
        }
        else
        {
          v9 = v14;
          v10 = v16;
          *(_OWORD *)(v14 + 64) = v15;
          v11 = v17;
          *(_OWORD *)(v9 + 80) = v10;
          *(_QWORD *)(v9 + 96) = v11;
          DereferenceObjectEx(v9);
        }
      }
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)valid;
}
