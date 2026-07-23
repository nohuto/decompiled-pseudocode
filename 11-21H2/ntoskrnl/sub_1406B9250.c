/*
 * XREFs of sub_1406B9250 @ 0x1406B9250
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 */

__int64 __fastcall sub_1406B9250(HANDLE Handle, int a2, __int16 *a3, int a4)
{
  NTSTATUS v5; // edi
  int v6; // edx
  char v7; // cl
  int v9; // edx
  KPROCESSOR_MODE v10; // bl
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rsi
  _QWORD *v16; // rbx
  KPROCESSOR_MODE v17; // bl
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h]
  __int16 v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = 0;
  v5 = -1073741821;
  v6 = a2 - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return (unsigned int)v5;
      v10 = *((_BYTE *)KeGetCurrentThread() + 562);
      if ( SeSinglePrivilegeCheck(stru_140D3CA10, v10) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, qword_140C24FB8, v10, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          v15 = sub_1402DF7D8(CurrentProcessSessionId, v12, v13, v14);
          v16 = Object;
          if ( !v15 )
          {
            v5 = -1073740715;
            goto LABEL_17;
          }
          v20 = 0LL;
          v21 = 0LL;
          sub_1406B96B0(&v20, Object);
          if ( v16[41] )
          {
            v5 = -1073741790;
            ObfDereferenceObject(v15);
          }
          else
          {
            v16[41] = v15;
          }
LABEL_16:
          sub_14066960C((__int64)&v20);
LABEL_17:
          ObfDereferenceObject(v16);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v17 = *((_BYTE *)KeGetCurrentThread() + 562);
      if ( SeSinglePrivilegeCheck(stru_140D3CA10, v17) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, qword_140C24FB8, v17, &Object, &HandleInformation);
        if ( v5 < 0 )
          return (unsigned int)v5;
        v20 = 0LL;
        v21 = 0LL;
        v16 = Object;
        sub_1406B96B0(&v20, Object);
        *((_DWORD *)v16 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_16;
      }
    }
    return (unsigned int)-1073741727;
  }
  if ( a4 == 2 )
  {
    v7 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v7 && ((unsigned __int64)(a3 + 1) > 0x7FFFFFFF0000LL || a3 + 1 < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v22 = *a3;
    LOBYTE(a3) = v7;
    return (unsigned int)ObSetHandleAttributes(Handle, &v22, a3);
  }
  return 3221225476LL;
}
