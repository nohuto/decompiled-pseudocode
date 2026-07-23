/*
 * XREFs of sub_14075A30C @ 0x14075A30C
 * Callers:
 *     sub_1406608E8 @ 0x1406608E8 (sub_1406608E8.c)
 *     sub_1406E5CB0 @ 0x1406E5CB0 (sub_1406E5CB0.c)
 *     sub_1406E9488 @ 0x1406E9488 (sub_1406E9488.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14085939C @ 0x14085939C (sub_14085939C.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall sub_14075A30C(int a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  __int64 *v6; // rax
  ACCESS_MASK v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edi
  BOOL CreateOptions; // [rsp+28h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v3 = 6LL * a1;
  if ( a1 )
  {
    if ( a1 == 1 )
      v4 = (volatile signed __int64 *)((char *)sub_140347DB0() + 920);
    else
      v4 = (volatile signed __int64 *)((char *)sub_140347DB0() + 928);
  }
  else
  {
    v4 = (volatile signed __int64 *)&unk_140D3D1F0;
  }
  if ( *v4 )
  {
    *a2 = *v4;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v6 = &qword_140A3BC10[3];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( !dword_140D011A8 )
    v6 = &qword_140A3BC10[1];
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6[v3];
  CreateOptions = HIDWORD(qword_140A3BC10[v3 + 5]) != 0;
  v7 = LODWORD(qword_140A3BC10[v3 + 5]) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v8) = dword_140D011A8 != 0;
      v9 = ExpInitializeStateSeparationPhase2(v8, &qword_140A3BC10[v3 + 1], &qword_140A3BC10[v3 + 3]);
      v10 = v9;
      if ( v9 != -1073741637 && v9 < 0 )
      {
        ZwClose(KeyHandle);
        return v10;
      }
    }
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a2 = *v4;
    return 0;
  }
  return result;
}
